#include<stdio.h>
void sort(int *arr, int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(arr+i) > *(arr+j))
            {
                int temp;
                temp = *(arr+i);
                *(arr+i) = *(arr+j);
                *(arr+j)=temp;
            }
        }
    }
    //printing the final result 
    printf("The final array after sorting --->\n\n");
    for(int i = 0; i < n; i++)
    {
        printf("%d ",*(arr+i));
    }
    
}
int main()
{
    int n;
    printf("enter array size\n");
    scanf("%d",&n);
    int arr[n];
    printf("enter the array elements one by one\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    sort(arr,n);
    return 0;
}