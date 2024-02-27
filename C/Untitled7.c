#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int triangle(double a, double b, double c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return 0; }
    return 1;
}

int main() {
    double x;
    printf("Enter the length of the wire in cm: ");
    scanf("%lf", &x);

    double max_length = x * 0.8; // Calculate the maximum length of each piece.
    srand(time(NULL)); // Seed the random number generator with the current time.

    double a = (rand() / (double)RAND_MAX) * max_length; // Generate a random length for wire a.
    double b = (rand() / (double)RAND_MAX) * max_length; // Generate a random length for wire b.
    double c = x - a - b; // Calculate the length of wire c.

    if (isTriangle(a, b, c)) {
        printf("The wires form a triangle.\n");
        return 1;
    } else {
        printf("The wires do not form a triangle.\n");
        return 0;
    }
}


