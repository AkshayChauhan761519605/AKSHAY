#include <stdio.h>

int main() {
    int arr1[3] = {1,3,5}, arr2[3] = {2,4,6}, arr[6];
    int x=0, y=0, k=0;

    while(x<3 && y<3) {
        if(arr1[x] < arr2[y]) arr[k++] = arr1[x++];
        else arr[k++] = arr2[y++];
    }
    while(x<3) arr[k++] = arr1[x++];
    while(y<3) arr[k++] = arr2[y++];

    printf("Merged: ");
    for(x=0; x<6; x++) printf("%d ", arr[x]);
    return 0;
}
