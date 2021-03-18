#include<stdio.h>
int main()
{
    int n,a,b,i,j;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&b);
    int x[n],y[n];
    for(i=0;i<n;i++)
    {
        x[i]=a%10;
        a=a/10;
    }
    for(j=0;j<n;j++)
    {
        y[j]=b%10;
        b=b/10;
    }

}
