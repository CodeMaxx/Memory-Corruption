#include <stdio.h>
#include <string.h>

void hackthis(char* inp)
{
     char name[64];
     strcpy(name, inp);
     printf("Hello %s\n", name);
}

int main(int argc, char** argv)
{
     if (argc < 2)
          {
             printf("Usage: %s <your name>\n", argv[0]);
             return 0;
          }
     hackthis(argv[1]);
     return 0;
}
