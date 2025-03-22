int main() {
    char str[100];
    scanf("%s", str);
    char reversed[100];
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        reversed[i] = str[len - i - 1];
    }
    reversed[len] = '\0';
    printf("%s\n", reversed);
    return 0;
}
