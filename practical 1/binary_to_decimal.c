#include<stdio.h>
#include<math.h>
int main(){
    int binary;
    int index=0;
    int decimal=0;
    printf("Enter your Binary number:");
    scanf("%d",&binary);
    while(binary>0){
        int num=0,d=0;
        num = binary%10;
        d = num*pow(2,index);
        binary = binary/10;
        ++index;
        decimal = decimal + d;
    }
    printf("your decimal number is: %d",decimal);
}
