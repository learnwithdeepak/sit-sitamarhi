#include<stdio.h>
int main()
{
int a1,a2,a3,a4,a5;
float per;
printf("Enter the five subject marks:\n");
scanf("%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5); 
per=(a1+a2+a3+a4+a5)/5;
if (per>=60) 
printf("First division:%f",per);
if((per>=45)&&(per<60)) 
printf("Second division:%f",per);
if((per>30)&&(per<45)) 
printf("Third division:%f",per);
if(per<30) 
printf("Sorry you failed, Your score is %f only !!\nBest of Luck ",per);
return 0; 
}
/* Write a program to calculate the percentage of marks and show status of First,Second and Third devision */
// Codes written by Deepak and tested in VS CODE