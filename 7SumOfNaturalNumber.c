#include<stdio.h> 
int main()
{
int n,i,sum=0;
printf("enter number for upto added:\n"); 
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i; 
}
printf("sum=%d",sum);
return 0; 
}
// Write a prpgram to check
// Codes written by Deepak and tested in VS CODE