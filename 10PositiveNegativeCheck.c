#include <stdio.h>
int main() {
    float num;
    printf("Enter a random number: \n");
    scanf("%f", &num);
    if (num <= 0.0) {
        if (num == 0.0) {
            printf("You entered 0. Please input other number.");
        }
        else
            printf("You entered a Negative Number.");
    } 
       else
        printf("You entered a Positive Number.");
    return 0;
}
// Program to check the entered number is negative or positive
// codes written by Deepak and tested in VS CODE


