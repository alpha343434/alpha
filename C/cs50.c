
#include <stdio.h>
#include <string.h>

const int BITS_IN_BYTE = 8;

void print_bulb(int bit);

int main(void)
{
    char message[100];
    printf("Enter a string: ");
    scanf("%s",message);
    int length= strlen(message);
	int i,j;
    for ( i = 0; i < length; i++) {
        char c = message[i];
        for (j = 7; j >= 0; j--) {
            int bit = (c >> j) & 1;
        }
    }int x;
    for( x=0;x<length;x++ ){
        message[x]= print_bulb(x);
        printf(message[x]);
    }

}

void print_bulb(int bit)
{
    if (bit == 0)
    {
        // Dark emoji
        printf("\U000026AB");
    }
    else if (bit == 1)
    {
        // Light emoji
        printf("\U0001F7E1");
    }
