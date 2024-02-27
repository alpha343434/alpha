#include <stdio.h>

int main() {
    int n, i = 1, factorial = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    do {
        factorial *= i;
        i++;
    } while(i <= n);

    printf("%d! = %d\n", n, factorial);

    return 0;
}
