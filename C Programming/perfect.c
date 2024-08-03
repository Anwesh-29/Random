#include <stdio.h>
int is_perfect(int num);
int main() {
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    if (is_perfect(number)) {
        printf("%d is a perfect number\n", number);
    } else {
        printf("%d is not a perfect number\n", number);
    }
    return 0;
}

int is_perfect(int num) {
    int sum = 0;
    if (num <= 1) {
        return 0;
    }
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}
