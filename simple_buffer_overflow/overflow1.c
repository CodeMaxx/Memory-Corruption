#pragma check_stack(off)

#include <string.h>
#include <stdio.h> 

struct User
{
  char buf[4];
  int isRoot;
};

int main() {

  struct User user;
  user.isRoot = 0;

  gets(user.buf);

  if(!user.isRoot) {
    printf("No root permissions available\n");
  }
  else {
    printf("Hacked!! Root permissions available\n");
  }

}
