#include <stdio.h>
int main() {

  float n1, n2, n3;
  printf("Enter three different numbers: \n");
  scanf("%f %f %f", &n1, &n2, &n3);

  // if n1 is greater than both n2 and n3, n1 is the largest
  if (n1 >= n2 && n1 >= n3)
    printf("%f is the largest number.\n", n1);
  // if n2 is greater than both n1 and n3, n2 is the largest
  if (n2 >= n1 && n2 >= n3)
    printf("%f is the largest number.", n2);
  // if n3 is greater than both n1 and n2, n3 is the largest
  if (n3 >= n1 && n3 >= n2)
    printf("%f is the largest number.", n3);

 return 0;
}
// Program to check number is POsitive or Negative
// Codes written by Deepak and tested in VS CODE
