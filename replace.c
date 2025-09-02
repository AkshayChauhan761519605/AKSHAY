#include <stdio.h>
#include <string.h>

int main() {
    char string[100] = "I love C, C is fun";
    char old[10] = "C", new[10] = "CPP";
    char result[200] = "";
    char *p;

    p = string;
    while((x = strstr(p, old))) {
        strncat(result, p, x - p);
        strcat(result, new);
        p = x + strlen(old);
    }
    strcat(result, p);
    printf("After replace: %s\n", result);
    return 0;
}
