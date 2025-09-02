#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int x, y;
    printf("Enter string: ");
    gets(string);

    x = 0;
    y = strlen(string) - 1;
    while(x < y) {
        char p = string[x];
        string[x] = string[y];
        string[y] = p;
        x++; y--;
    }
    printf("Reversed: %s\n", string);
    return 0;
}
