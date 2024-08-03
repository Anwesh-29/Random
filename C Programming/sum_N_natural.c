#include <stdio.h>
int sum()
{
  int i = 1, sum = 0, n;
  printf("Enter the number: ");
  scanf("%d", &n);
  for(i=1; i<=n; ++i)
  {
    sum += i;
  }
  return sum;
}
void main(){
  int T_sum = sum();
  printf("The sum of is %d", T_sum);
}
