#include <stdio.h> 
#include "hellomake.h"


void myPrintHelloMake(void) {

  #ifdef EXTRA
    printf("EXTRA is set\n");
  #else
    printf("EXTRA is not set\n");
  #endif

  printf("Hello makefiles!\n");

  return;
}
