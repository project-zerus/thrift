gen_rule(
  name = 'thrifty_bison',
  srcs = [
    'src/thrifty.yy',
  ],
  outs = [
    'thrifty.cc',
    'thrifty.hh',
  ],
  cmd = 'bison $FIRST_SRC -d -o $FIRST_OUT',
)

gen_rule(
  name = 'thriftl_flex',
  srcs = [
    'src/thriftl.ll',
  ],
  outs = [
    'thriftl.cc'
  ],
  cmd = 'flex -o $FIRST_OUT $FIRST_SRC',
)

gen_rule(
  name = 'version_h',
  srcs = [
    'version.h.in',
  ],
  outs = [
    'version.h',
  ],
  cmd = 'cat $FIRST_SRC | sed -e \\"s/@PACKAGE_VERSION@/0.9.3/g\\" > $FIRST_OUT',
)

cc_binary(
  name = 'thrift',
  warning = 'no',
  incs = [
    'src',
  ],
  srcs = [
    'src/md5.c',
    'src/main.cc',
    'src/audit/t_audit.cpp',
    'src/parse/parse.cc',
    'src/parse/t_typedef.cc',
    'src/generate/t_as3_generator.cc',
    'src/generate/t_c_glib_generator.cc',
    'src/generate/t_cocoa_generator.cc',
    'src/generate/t_cpp_generator.cc',
    'src/generate/t_csharp_generator.cc',
    'src/generate/t_delphi_generator.cc',
    'src/generate/t_d_generator.cc',
    'src/generate/t_erl_generator.cc',
    'src/generate/t_generator.cc',
    'src/generate/t_go_generator.cc',
    'src/generate/t_gv_generator.cc',
    'src/generate/t_haxe_generator.cc',
    'src/generate/t_hs_generator.cc',
    'src/generate/t_html_generator.cc',
    'src/generate/t_java_generator.cc',
    'src/generate/t_javame_generator.cc',
    'src/generate/t_js_generator.cc',
    'src/generate/t_json_generator.cc',
    'src/generate/t_lua_generator.cc',
    'src/generate/t_ocaml_generator.cc',
    'src/generate/t_perl_generator.cc',
    'src/generate/t_php_generator.cc',
    'src/generate/t_py_generator.cc',
    'src/generate/t_rb_generator.cc',
    'src/generate/t_st_generator.cc',
    'src/generate/t_xsd_generator.cc',
    'thriftl.cc',
    'thrifty.cc',
  ],
  deps = [
    ':thriftl_flex',
    ':thrifty_bison',
    ':version_h',
  ]
)
