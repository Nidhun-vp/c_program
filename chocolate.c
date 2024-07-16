#include<stdio.h>
int main()
{
    int n,i;
    int arr[20];
    printf("enter the no. of elements:\n");
    scanf("%d",&n);

    for(i=0;i<n;++i)
    { 
        scanf("%d",&arr[i]);

    }
    int j=0;
    for(i=0;i<n;++i)
    { 
        if(arr[i]!=0)
        {
            arr[j++]=arr[i];

        }
        

    }
    while(j<n)
    {
        arr[j++]=0;
    }
    //print modified array
    for(i=0;i<n;++i)
    { 
        printf("%d",arr[i]);

    }
return 0;
}