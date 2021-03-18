#include<stdio.h>
int main()
{
    int n,m,h,b,c,i,max,p=0,q;
    scanf("%d %d",&n,&m);
    signed long a[n];
    char t;
    for(h=0; h<n; h++)
    {
        a[h]=0;
    }
    for(i=0; i<m; i++)
    {
        scanf("%c",&t);
        fflush(stdin);
        scanf("%d %d",&b,&c);
        if(t=='U')
        {
            a[b]=c;
        }
        else if(t=='P')
        {
            p++;
        }
    }
    for(q=0; q<p; q++)
    {
        max=a[b];
        while(b<c)
        {
            max=a[c];
        }
        printf("%d",max);
        if(q<n-1)
            printf("\n");
    }
}
