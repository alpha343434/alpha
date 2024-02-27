#include <stdio.h>

// Function to classify triangle type
void TriangleType(int a, int b, int c) {
    if(a == b && b == c) {
        printf("The triangle is equilateral.\n");
    } else if(a == b || b == c || a == c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
}

int main() {
    int a, b, c;
    printf("Enter the three side lengths of the triangle:\n");
    scanf("%d %d %d", &a, &b, &c);
    TriangleType(a, b, c);
    return 0;
}

