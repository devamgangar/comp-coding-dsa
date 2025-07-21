//In C, to convert a character digit (like '1') to its corresponding integer value (1), simply subtract the character '0' from it.


#include <stdio.h>

int main() {
    char ch = '1';
    int num = ch - '0';  // Convert '1' to 1

    printf("Character: %c\n", ch);
    printf("Integer: %d\n", num);

    return 0;
}