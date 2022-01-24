#include <stdio.h>
#include <stdlib.h>

extern int extern_global_var; // TODO: Check symbol type in object file
int global_var = 6; // TODO: Check symbol type in object file

int main(){
  int factor = 2;
  printf("%d, %d, %d\n", global_var, extern_global_var, factor);
  printf("Before modification:- secret value: %d\n", get());
  multiply(factor);
  printf("After modification:- secret value: %d\n", get());

	return 0;
}
