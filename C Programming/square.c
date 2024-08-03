#include <stdio.h>
int num, square;
void square_input();
void square_compute();
void square_print();
void main() {
    square_input();
    square_compute();
    square_print();
     
}

void square_input() {
    printf("Kindly input your arbitrary number: ");
    scanf("%d", &num);
}
void square_compute() {
    square = num * num; // Use the global variable square
}
void square_print() {
    printf("The square of %d is %d\n", num, square);
}
