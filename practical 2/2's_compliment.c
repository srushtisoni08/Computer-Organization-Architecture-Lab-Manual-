#include <stdio.h>
#include <string.h>

char flip(char c) {
    return (c == '0') ? '1' : '0';
}

void printOneAndTwosComplement(char bin[]) {
    int n = strlen(bin);
    int i;

    char ones[n + 1], twos[n + 2];  
    ones[n] = '\0';
    twos[n] = '\0';

    for (i = 0; i < n; i++) {
        ones[i] = flip(bin[i]);
    }

    strcpy(twos, ones);

    for (i = n - 1; i >= 0; i--) {
        if (ones[i] == '1') {
            twos[i] = '0';
        } else {
            twos[i] = '1';
            break;
        }
    }

    if (i == -1) {
        for (i = n; i > 0; i--) {
            twos[i] = twos[i - 1];
        }
        twos[0] = '1';
        twos[n + 1] = '\0';
    }

    printf("1's complement: %s\n", ones);
    printf("2's complement: %s\n", twos);
}

int main() {
    char bin[100];
    printf("Enter the number: ");
    scanf("%s", bin);  
    printOneAndTwosComplement(bin);
    return 0;
}
