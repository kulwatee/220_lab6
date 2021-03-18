#include<stdio.h>
int main()
{
    int n,m,h,b,c,i,max;
    scanf("%d %d",&n,&m);
    signed long a[n];
    char t;
    for(h=0; h<n; h++)
    {
        a[h]=0;
    }
    for(i=0; i<m; i++)
    {
        scanf("%c %d %ld",&t,&b,&c);
        if(t=='U')
        {
            a[b]=c;
        }
        else if(t=='P')
        {
            max=a[b];
            while(b<c)
            {
                max=a[c];
            }



        }

    }
}
