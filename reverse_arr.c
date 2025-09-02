#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int x=0, y=4, p;

    while(x < y) {
        p = arr[x];
        arr[x] = arr[y];
        arr[y] = p;
        x++; y--;
    }
    printf("Reversed: ");
    for(x=0; x<5; x++) printf("%d ", arr[x]);
    return 0;
}
0;
}
