#include <stdio.h>

int main() 
{
    int num, mn, rem, remen, sum = 0;
    printf("This calculates the sum of square of odd digits only\n");
    printf("Enter a number:");
    scanf("%d", &num);
    mn = num;
    while(mn != 0)
    {
        rem = mn % 10;
        if(rem % 2 != 0)
        {
            remen = rem;
        }
        else
        {
            remen = 0;
        }
        
        sum += remen*remen;
        mn = mn / 10;
    }
    printf("The sum of the square of odd digits is: %d ", sum);
    return 0;
}