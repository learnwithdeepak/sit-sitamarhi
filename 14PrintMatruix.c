#include<stdio.h>
int main(){
    int arr[100][100],i,j,n1,n2;
    printf("Enter Size Value of I and J :\n");
    scanf("%d %d",&n1,&n2);
    for ( i = 0; i < n1; i++)
    {
        for ( j = 0; j < n2; j++)
        {
            printf("Enter an [%d][%d]: ", i, j);
            scanf("%d",&arr[i][j]);

        }
    }
        printf("Printing the elements .....\n");
        for ( i = 0; i < n1; i++)
        {
           printf("\n");
           for ( j = 0; j < n2; j++)
           {
              printf("%d\t",arr[i][j]);
           }
           
        }
        
    return 0;
}