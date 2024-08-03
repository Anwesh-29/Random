#include <stdio.h>
int find_max(int a, int b, int c);
int find_min(int a, int b, int c);
int main() {
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int max = find_max(num1, num2, num3);
    int min = find_min(num1, num2, num3);
    
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    
    return 0;
}

int find_max(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    } else if (b >= a && b >= c) {
        return b;
    } else {
        return c;
    }
}

int find_min(int a, int b, int c) {
    if (a <= b && a <= c) {
        return a;
    } else if (b <= a && b <= c) {
        return b;
    } else {
        return c;
    }
}
