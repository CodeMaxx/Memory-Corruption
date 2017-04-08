#pragma check_stack(off)

#include <string.h>
#include <stdio.h> 

void f() {
  int* ptr;
  int buf[10];
  ptr = buf + 14;
  (*ptr) += 10;
}

int main() {

  printf("The end of the program\n");
  f();
  printf("... May be not\n");

}

// The return pointer is changed so as to skip the second printf
