#include<stdio.h>
int main() {
    float number,number1,number2,sum;
    printf("Give Me numbers");
    scanf("%f %f %f",&number,&number1,&number2);
    sum=(number*number2)/number1;
    printf("Total Amount %f",sum);
    return 0;

}
