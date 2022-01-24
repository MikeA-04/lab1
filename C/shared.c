int extern_global_var = 5; // Symbol type in object file: Object
static int static_global = 99; // Created static global, Object in .o file
                              // Has .1915 under the Name
void multiply(int mfactor) {
  static int static_local = 3; // Created static local, Object in .o
  extern_global_var = extern_global_var * mfactor;
}

int get() {
  return extern_global_var;
}
