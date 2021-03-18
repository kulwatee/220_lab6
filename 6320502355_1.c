#include<stdio.h>
#include<string.h>
int main()
{
    int n,k,i,w,l,q;
    scanf("%d",&n);
    char a[n][1000],b[1000];
    for(i=0; i<n; i++)
    {
        scanf("%s",a[i]);
    }
    for(w=1; w<n; w++)
    {
        k=0;
        while(a[w][0]%32>a[k][0]%32)
        {
            k++;
        }
        strcpy(b,a[w]);
        for(l=0; l<w-k+1; l++)
        {
            strcpy(a[w-l],a[w-l-1]);
        }
        strcpy(a[k],b);
    }
    for(q=0; q<n; q++)
    {
        printf("%s",a[q]);
        if(q<n-1)
            printf("\n");
    }

}
