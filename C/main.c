#include <stdio.h>
#include <stdlib.h>

extern int extern_global_var; // Symbol type in object file: Notype
int global_var = 6; // Symbol type in object file: Object
static int static_global = 4; // Created static global, Object in .o file

int main(){
  int factor = 2;
  static int static_local = 9; // Created static local, Object in .o
                              // Has .2836 under Name
  printf("%d, %d, %d\n", global_var, extern_global_var, factor);
  printf("Before modification:- secret value: %d\n", get());
  multiply(factor); // External functions are UND
  printf("After modification:- secret value: %d\n", get());

	return 0;
}
