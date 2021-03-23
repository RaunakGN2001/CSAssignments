#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void sort(char *str[],int n)
{
    char temp[20];
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("after sorting ,the final list is-->\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n",str[i]);
    }
    
}
int main()
{
    int n;
    printf("enter number of strings\n");
    scanf("%d",&n);
    char *str[20];
    for (int i = 0; i < n; i++)
    {
        printf("Enter string %d\n",i+1);
        str[i] = (char *)malloc(20*sizeof(char));
        scanf("%s",str[i]);
    }
    sort(str,n);

    return 0;
}