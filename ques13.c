#include <stdio.h>
void decimalToBinary(int n, int bin[]);
int main() {
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int binx[8] = {0}; 
    int biny[8] = {0}; 
    decimalToBinary(x, binx);
    decimalToBinary(y, biny);
    int count = 0;
    for (int i = 0; i < 8; i++) {
        if (binx[i] != biny[i])
            count++;
    }
    printf("Number of digits needed to be flipped: %d\n", count);
    return 0;
}
void decimalToBinary(int n, int binary[]) {
    int i = 7;
    while (n > 0) {
        binary[i] = n % 2;
        n /= 2;
        i--;
    }
}