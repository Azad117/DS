#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char binary[100];
    scanf("%s", binary);
    int decimal = 0;
    int len = strlen(binary);
    for (int i = 0; i < len; i++) {
        decimal += (binary[i] - '0') * (1 << (len - i - 1));
    }
    printf("%d\n", decimal);
    return 0;
}
