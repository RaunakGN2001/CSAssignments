#include<stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("after swapping a=%d and b=%d",*a,*b);
}
int main()
{
    int a,b;
    printf("enter 2 numbers\n");
    scanf("%d%d",&a,&b);
    printf("before swapping, a=%d and b=%d\n\n",a,b);
    swap(&a,&b);
    return 0;
}