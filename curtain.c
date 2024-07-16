#include<stdio.h>
#include<string.h>
int main()
{
    char str[51];
    int n,L;
 printf("enter a string and L.\n:");
 scanf("%d",&str);
 printf("enter value of L:\n");
 scanf("%d",&L);
 n=strlen(str);
 int max_a=0,i=0;
 while(i<n)
 {
    int count_a=0;
    for(int j=0;j<L && i<n;++j)
    { 
        if(str[i]=='a')
        {
            count_a=count_a++;
        }
        i++;
    }
    if (count_a>max_a)
    {
        max_a=count_a;
    }
 }
 printf("%d\n",max_a);
 return 0;



}