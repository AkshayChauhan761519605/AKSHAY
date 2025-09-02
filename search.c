#include <stdio.h>
#include <string.h>

int main() {
    FILE *p;
    char string[100];
    char word[20] = "hello";
    int found = 0;

    p = fopen("input.txt", "r");
    while(fgets(string, 100, p)) {
        if(strstr(string, word)) {
            found = 1;
            break;
        }
    }
    fclose(p);
    if(found) printf("Word found\n");
    else printf("Word not found\n");
    return 0;
}
