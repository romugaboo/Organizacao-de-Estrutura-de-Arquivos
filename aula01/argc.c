// Para compilar: gcc -o argc argc.c

#include <stdio.h>
// stdout, stdin, stderr

int main(int argc, char const *argv[])
{
    for (int i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }
    return 0;
}