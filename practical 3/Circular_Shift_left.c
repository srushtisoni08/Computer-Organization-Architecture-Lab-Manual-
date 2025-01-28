#include <stdio.h>
#include <stdlib.h>

int main() {
    int size=0;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    
    int *arr = (int*)malloc(size*sizeof(int));
    
    printf("Original array: ");
    for(int i=0;i<size;i++){
        arr[i] = i+1;
        printf("%d\t",arr[i]);
    }
    int first = arr[0];
    printf("\nLeft shifted array: ");
    for(int i=0;i<size;i++){
        arr[i]=arr[i+1];
    }
    arr[size-1]=first;
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
