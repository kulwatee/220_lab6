#include<stdio.h>
int main()
{
    int n,i,j,max,min,q,w;
    scanf("%d",&n);
    int a[n][2],b[n];
    for(w=0;w<n;w++)
        b[w]=0;
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
    for(q=2; q<n+1; q++)
    {
        if(b[q]>b[max])
            max=q;
        if(b[q]<b[min])
            min=q;
    }
    printf("%d %d",max,min);



}
