#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char *str) {
    int left = 0;
    int right = strlen(str) - 1;

    while (right > left) {
        if (str[left++] != str[right--]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    scanf("%s", str);

    if (isPalindrome(str)) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
