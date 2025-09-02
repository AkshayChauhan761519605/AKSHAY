#include <stdio.h>

int main() {
    FILE *p, *q;
    char string[100];
    p = fopen("input.txt", "r");
    q = fopen("output.txt", "w");

    while(fgets(string, 100, p)) {
        fputs(string, q);
    }
    fclose(p); fclose(q);
    printf("File copied.\n");
    return 0;
}
