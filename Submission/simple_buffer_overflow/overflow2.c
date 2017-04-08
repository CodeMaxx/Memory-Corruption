#pragma check_stack(off)

#include <string.h>
#include <stdio.h> 

void f() {
  int* ptr;
  int buf[10];
  ptr = buf + 14;
  (*ptr) += 2;
}

int main() {

  printf("The end of the program\n");
  f();
  printf("... May be not\n");

}
