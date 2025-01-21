#include <stdio.h>

int main() {
    int decimal,re=0;
    char hex[20]; 
    int index = 0; 
    printf("Enter your number:");
    scanf("%d",&decimal);
    if (decimal <= 0) {
        printf("Invalid input. Please enter a positive number.\n");
        return 1;
    }
    while(decimal>0){
        re = decimal%16;
        decimal = decimal / 16;
        if(re > 9){
            hex[index] = 'A' + (re - 10); 
        } else {
            hex[index] = '0' + re; 
        }
        index++;
    }
    printf("Hexadecimal representation: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
    return 0;
}
