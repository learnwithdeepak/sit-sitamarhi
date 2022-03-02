#include<stdio.h>
int main ()
{
    int P,T,i;
    float R,SI;
    i=0;
    while (i<=2)    
    {
        printf("Enter value of P and T respt.\n");
        scanf("%d%d",&P,&T);
        printf("Enter value of R \n");
        scanf("%f",&R);
        SI=(P*R*T)/100;
        printf("SI Value is %f\n",SI);
        i++;
        }
    return 0;
}

// Write a program to calculate Simple Intrest using while loop
// Codes written by Deepak and tested in VS CODE