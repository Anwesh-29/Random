#include <stdio.h>

int main() 
{
    int num, mn, rem, sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    mn = num;
    while(mn != 0)
    {
        rem = mn % 10;
        sum += rem;
        mn = mn / 10;
    }
    printf("The sum of the digits is: %d ", sum);
    return 0;
}