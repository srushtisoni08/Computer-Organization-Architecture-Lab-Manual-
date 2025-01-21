#include <stdio.h>

int main() {

    int decimal=0,i=0;
    int binary=0;
    int num[50];
    printf("Enter your decimal number:");
    scanf("%d",&decimal);
    while(decimal>0){
        num[i] = decimal%2;
        decimal = decimal/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        binary = binary*10 + num[j];
    }
    printf("Binary number is: %d",binary);
}
