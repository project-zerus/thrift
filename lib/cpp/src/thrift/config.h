#ifdef __APPLE__
  #include "config.darwin.h"
#elif __linux__
  #include "config.linux.h"
#else
  #error "Unknown compiler"
#endif
