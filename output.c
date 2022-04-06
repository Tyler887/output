/*
I mainly do the build on GCC: gcc output.c. Developers should
test their code!
*/
#include <stdio.h>

int main() {
  if ( argc == 0 ) {
    printf("output: no args");
    return 1;
  }
  printf(argv);
  return 0;
}
