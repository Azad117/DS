int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
    return 0;
}
