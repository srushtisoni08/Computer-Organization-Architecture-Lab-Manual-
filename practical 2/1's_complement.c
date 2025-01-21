#include<stdio.h>
#include<string.h>
int main(){
    char n[100];
    printf("Enter the value:");
    scanf("%s",n);
    for(int i=0;i<strlen(n);i++){
        if(n[i] == "0"){
            n[i]="1";
        }
        else if(n[i] == "1")
        {
            n[i] = "0";
        }
    }
    printf(n);
    return 0;
}
