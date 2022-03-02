#include<stdio.h>
int main()
{
    float temp, cel;
    printf("Enter a random value of Temperature in Fahrenhiet : ");
    scanf("%f",&temp);
    cel = (temp*1.8+32);
    printf("Celcius value is %f",cel);
    return 0;
}
// Fahrenhiet value into celcius
// All codes written by Deepak and tested in VS CODE