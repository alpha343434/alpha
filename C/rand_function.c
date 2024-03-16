#include <stdio.h>
#include <time.h>

int main() {
    int dizi[10000];
    int i;

    srand(time(NULL)); // seed the random number generator

    // generate 10 random numbers between -50 and 49 (inclusive)
    for (i = 0; i < 10; i++) {
        dizi[i] = rand() % 100 - 50;
    }

    // print the generated random numbers
    for (i = 0; i < 10; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}

