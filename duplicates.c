#include <stdio.h>

int main() {
    int arr[7] = {1, 2, 2, 3, 4, 4, 5};
    int x, y, k=0;

    for(x=0; x<7; x++) {
        for(y=0; y<k; y++) if(arr[x]==arr[y]) break;
        if(y==k) arr[k++] = arr[x];
    }
    printf("Without duplicates: ");
    for(x=0; x<k; x++) printf("%d ", arr[x]);
    return 0;
}
