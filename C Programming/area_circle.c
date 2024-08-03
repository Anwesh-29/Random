#include <stdio.h>
float pi(float a);
float radius;
float area;
int main(){
    printf("Enter the Radius of the Cricle: ");
    scanf("%f", &radius);
    area = pi(radius);
    printf("The area of the circle is %f", area);
    return 0;
}
float pi(float a){
    int temp_holder;
    temp_holder = 3.14*a*a;
    return temp_holder;
}