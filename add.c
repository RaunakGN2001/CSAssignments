#include<stdio.h>
void sum(int *A, int *B)
{
    int res;
    res = *A + *B;
    printf("The sum is = %d",res);
}
int main()
{
    int a,b;
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    sum(&a,&b);
    return 0;
}
