#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int a[n][2],b[n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&a[i][j]);
        b[a[i][j]]++;
    }


}
