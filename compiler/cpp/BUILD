licenses(['notice'])

genrule(
  name = 'thrifty_bison',
  srcs = [
    'src/thrifty.yy',
  ],
  outs = [
    'thrifty.cc',
    'thrifty.hh',
  ],
  cmd = 'bison $(location src/thrifty.yy) -d -o $(location thrifty.cc)',
)

genrule(
  name = 'thriftl_flex',
  srcs = [
    'src/thriftl.ll',
  ],
  outs = [
    'thriftl.cc'
  ],
  cmd = 'flex -o $(OUTS) $(SRCS)',
)

genrule(
  name = 'thrifty_h',
  srcs = [
    'thrifty.hh',
  ],
  outs = [
    'thrifty.h',
  ],
  cmd = 'cp $(SRCS) $(OUTS)',
)

genrule(
  name = 'version_h',
  srcs = [
    'version.h.in',
  ],
  outs = [
    'version.h',
  ],
  cmd = 'cat $(SRCS) | sed -e "s/@PACKAGE_VERSION@/0.9.1/g" > $(OUTS)',
)

cc_library(
  name = 'parse',
  hdrs = [
    'thrifty.h',
    'thrifty.hh',
    'version.h',
  ],
  srcs = [
    'thrifty.cc',
    'thriftl.cc',
  ],
  includes = [
    '.',
    'src',
  ],
  linkstatic = 1,
  copts = [
    '-std=c++98',
  ]
)

cc_library(
  name = 'md5',
  srcs = [
    'src/md5.c',
  ],
  includes = [
    '.',
    'src',
  ],
  linkstatic = 1,
  copts = [
    '-ansi',
  ]
)

cc_binary(
  name = 'thrift',
  deps = [
    ':md5',
    ':parse',
  ],
  srcs = [
    'src/generate/t_as3_generator.cc',
    'src/generate/t_c_glib_generator.cc',
    'src/generate/t_cocoa_generator.cc',
    'src/generate/t_cpp_generator.cc',
    'src/generate/t_csharp_generator.cc',
    'src/generate/t_d_generator.cc',
    'src/generate/t_delphi_generator.cc',
    'src/generate/t_erl_generator.cc',
    'src/generate/t_generator.cc',
    'src/generate/t_go_generator.cc',
    'src/generate/t_gv_generator.cc',
    'src/generate/t_hs_generator.cc',
    'src/generate/t_html_generator.cc',
    'src/generate/t_java_generator.cc',
    'src/generate/t_javame_generator.cc',
    'src/generate/t_js_generator.cc',
    'src/generate/t_ocaml_generator.cc',
    'src/generate/t_perl_generator.cc',
    'src/generate/t_php_generator.cc',
    'src/generate/t_py_generator.cc',
    'src/generate/t_rb_generator.cc',
    'src/generate/t_st_generator.cc',
    'src/generate/t_xsd_generator.cc',
    'src/main.cc',
    'src/parse/parse.cc',
  ],
  linkstatic = 1,
  linkshared = 0,
  linkopts = [
    '-pthread',
  ],
  copts = [
    '-std=c++98',
  ]
)
