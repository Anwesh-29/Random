#include <stdio.h>
char to_uppercase(char c);
int main() {
    char lower, upper;
    printf("Enter a lowercase character: ");
    scanf("%c", &lower);
    upper = to_uppercase(lower);
    printf("The uppercase equivalent of %c is %c\n", lower, upper);
    return 0;
}
// copied code
char to_uppercase(char c) {
    if (c >= 'a' && c <= 'z') {
        return c - 'a' + 'A';
    } else {
        return c;
    }
}
