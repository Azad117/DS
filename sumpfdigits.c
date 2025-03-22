#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char num[100];
    scanf("%s", num);
    int sum = 0;
    for (int i = 0; num[i] != '\0'; i++) {
        if (num[i] >= '0' && num[i] <= '9')
        {
            sum += num[i] - '0'; 
        }
    }
    printf("%d\n", sum);
    return 0;
}
