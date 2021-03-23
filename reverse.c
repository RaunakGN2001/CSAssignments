#include<stdio.h>
void reverse(int *arr,int n)
{
    printf("enter the array elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",(arr+i));
    }
    for(int i=n-1;i>=0;i--)
    {
        printf("%d ",*(arr+i));
    }
    
}
int main()
{
    int n=5;
    int arr[n];
    //function for taking input and
    //reversal
    reverse(arr,n);
    return 0;
}