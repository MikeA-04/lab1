int extern_global_var = 5; // TODO: Check symbol type in object file

void multiply(int mfactor) {
  extern_global_var = extern_global_var * mfactor;
}

int get() {
  return extern_global_var;
}
