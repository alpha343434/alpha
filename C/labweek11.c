#include <stdio.h>
#include <string.h>

int F(char * str, char ch) {
	int i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            return i;
        }
    }
    return -1;
}

int main() {
    char str[81], ch;
    printf("string: ");
    scanf("%s",str);
    printf("character: ");
    scanf(" %c",&ch);

    int occurrence = F(str, ch);
    if (occurrence == -1) {
        printf("the character is not present\n");
    } else {
        printf("%s\n", str+occurrence);
    }

    return 0;
}

