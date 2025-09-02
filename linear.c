#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int x, y, found = 0;

    printf("Enter value: ");
    scanf("%d", &x);

    for(y = 0; y < 5; y++) {
        if(arr[y] == x) {
            found = 1;
            break;
        }
    }
    if(found) printf("Found at position %d\n", y);
    else printf("Not found\n");
    return 0;
}

