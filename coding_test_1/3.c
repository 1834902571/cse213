#include <stdio.h>
void sort(int a[], int n);
int main()
{
    int n,i;
    printf("Enter the number of elements :\n ");
    scanf("%d",&n);
    int a[n];
    printf(" Enter the elements :\n ");
    for(i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
     }
     sort(a, n);
     printf("\n second smallest element is %d \n",a[1]);
     return 0;
}
void sort(int a[], int n)
{
     int i, j;
    for (i = 0; i < n-1; i++)
    {
         for (j = 0; j < n-i-1; j++)
         {
             if (a[j] > a[j+1])
             {
                 int temp = a[j];
                 a[j] = a[j+1];
                 a[j+1] = temp;
              }
          }
      }
}
