#include<stdio.h>
void swap(int *a, int *b);
int main ()
{
    int a=10,b=30;
    printf("Before swaping the value a = %d and b = %d \n",a,b);
    swap(&a,&b);
    printf("After swaping the value a = %d and b = %d \n",a,b);
    return 0;
}
    void swap(int *a, int *b){
    int temp;
    temp = *a;
    *a= *b;
    *b = temp;
    }
    // CallByRefenrence function
    // Codes written by Deepak and tested in VS CODE