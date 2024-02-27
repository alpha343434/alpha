#include <stdio.h>

int main() {
    char ch1, ch2;
    printf("Enter two alphabetic characters: ");
    ch1 = getchar(); // read first character
    ch2 = getchar(); // read second character

    // calculate harmonic average
    float h = 2.0f / ((1.0f / ch1) + (1.0f / ch2));

    // print the result
    printf("Harmonic average of %c and %c is: %.2f", ch1, ch2, h);

    return 0;
}

