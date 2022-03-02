#include<stdio.h>
int main(){
    int a,i;
    i=1;
    printf("Enter a random number : ");
    scanf("%d",&a);
    while (i!=11)
    {
        printf("%d * %d = %d \n", a,i,a*i);
        i++;
    }
    return 0;
}
//Write a program to print Table of entered number
//Codes written by Deepak in VS CODE