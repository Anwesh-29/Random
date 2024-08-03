  #include <stdio.h>
  int num;
  int absolute(int a);
  void main(){
    printf("Enter a number: ");
    scanf("%d", &num);
    int absolute_value = absolute(num);
    printf("The absolute value of %d is %d", num, absolute_value);
  }

  int absolute(int a)
  {
    if (a < 0)
    {
      return -a;
    }
    else
    {
      return a;
    }
  }