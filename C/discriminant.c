#include <stdio.h>

int main() {
    int a=1, b=0, c=3, dist, i;

    dist = b*b - 4*a*c;

    if (dist > 0) {
        i = '$'; // two real roots
    } else if (dist == 0) {
        i = '!'; // one repeated real root
    } else {
        i = '+'; // complex roots
    }

    switch (i) {
        case '$':
            printf("Two real roots\n");
            break;
        case '!':
            printf("One repeated real root\n");
            break;
        case '+':
            printf("Complex roots\n");
            break;
    }

    return 0;
}
