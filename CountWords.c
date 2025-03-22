#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str[100];
    scanf("%[^\n]", str);
    int count = 1;
    for (int i = 0; i < strlen(str); i++) {
        if(str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
