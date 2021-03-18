#include<stdio.h>
int main()
{
    int n,i,j,max,min,q;
    scanf("%d",&n);
    int a[n][2],b[n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<2; j++)
        {
            scanf("%d",&a[i][j]);
            b[a[i][j]]++;
        }
    }
    max=1;
    min=1;
    for(q=0; q<n; q++)
    {
        if(b[q]>b[max])
            max=q;
        if(b[q]<b[min])
            min=q;
    }
    printf("%d %d",max,min);



}
