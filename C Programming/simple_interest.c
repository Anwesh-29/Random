#include <stdio.h>
float p, r, t;
void input_value();
float calculate_interest(float a, float b, float c);

void main(){
  input_value();
  float interest = calculate_interest(p, r, t);
  printf("The simple interest for Rs %f at %f for %f = %f", p, r, t, interest);
}

void input_value(){
  printf("Enter the Principle, Rate and Time: ");
  scanf("%f %f %f",&p,&r,&t);
}
float calculate_interest(float a, float b, float c){
  return (a * b * c) / 100;
}
