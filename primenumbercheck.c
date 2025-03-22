int main() {
    int num;
    scanf("%d", &num);
    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("0\n");
            return 0;
        }
    }
    printf("1\n");
    return 0;
}
