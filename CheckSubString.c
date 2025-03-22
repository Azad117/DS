#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str1[100], str2[100];
    scanf("%s %s", str1, str2);
    if (strstr(str2, str1)) {
        printf("0\n");
    } else {
        printf("1\n");
    }
    return 0;
}
