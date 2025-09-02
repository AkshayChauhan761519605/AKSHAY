#include <stdio.h>

int main() {
    int arr[5] = {30, 10, 50, 20, 40};
    int x, y, p;

    for(x=0; x<5-1; x++) {
        for(y=0; y<5-x-1; y++) {
            if(arr[y] > arr[y+1]) {
                p = arr[y];
                arr[y] = arr[y+1];
                arr[y+1] = p;
            }
        }
    }
    printf("Sorted: ");
    for(x=0; x<5; x++) printf("%d ", arr[x]);
    return 0;
}
