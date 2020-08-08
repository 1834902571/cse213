#include<stdio.h>
void print_arr();
int main()
{
    int *p;
    int N, i;
    int arr[100];
    p = &arr[0];
    printf("Enter the array size: ");
    scanf("%d",&N);
    if(N>100)
    {
        printf("Overflow\n");
        return 0;
    }
    else
    {
        for(i = 0; i<N; i++)
            scanf("%d",(p+i));
    }
    print_arr(p, N);
    return 0;
}
void print_arr(int *a, int size)
{
    int i;
    printf("Array is : \n");
    for(i= 0; i<size; i++)
        printf("%d\n", *(a+i));
}
