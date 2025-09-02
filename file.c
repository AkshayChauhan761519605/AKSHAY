#include <stdio.h>

int main() {
    FILE *p;
    char string[100];
    p = fopen("input.txt", "r");

    while(fgets(string, 100, p)) {
        printf("%s", string);
    }
    fclose(p);
    return 0;
}
