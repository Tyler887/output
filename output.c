#include <stdio.h>
int main(int argc, char* argv[] ) {
    if ( argv[1] == 0 ) {
      printf("output: no args");
      return 1;
    }
    printf(argv[1]);
    printf("");
    return 0;
}
