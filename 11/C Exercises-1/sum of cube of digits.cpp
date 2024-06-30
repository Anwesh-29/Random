#include <stdio.h>

int main() 
{
    int num, mn, rem, remen, sum = 0;
    printf("This calculates the sum of square of digits\n");
    printf("Enter a number:");
    scanf("%d", &num);
    mn = num;
    while(mn != 0)
    {
        rem = mn % 10;
        sum += rem*rem*rem;       
        mn = mn / 10;
    }
    printf("The sum of the digits is: %d ", sum);
    return 0;
}