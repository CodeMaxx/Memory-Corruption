#include <stdio.h>
#include <string.h>
extern char ** environ;
int main(int argc, char *argv[]) {
    int i,j;
    FILE * fd = fopen(".gdblist", "w");
    for (i = 0; environ[i] != NULL; i++) {
        unsigned char *q, *p;
        p = strchr(environ[i],(int)'=');
        q = environ[i];
        while (q != p)
            fprintf(fd, "\\x%02x", *q++);
        q++;
        fprintf(fd, "=");
        while (*q)
            fprintf(fd, "\\x%02x", *q++);
        fprintf(fd, "\\x0a\n");
    }
    fclose(fd);
    return 0;
}
