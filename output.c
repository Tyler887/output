/*
I mainly do the build on GCC: gcc output.c. Developers should
test their code!
*/
#include <stdio.h>

int main(int argc, char* argv[] ) {
    if ( argv[1] == 0 ) {
      printf("output: no args");
      return 1;
    }
    printf(argv[1]);
    return 0;
}
