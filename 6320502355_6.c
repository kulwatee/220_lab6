#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k=0,l=0,q;
    scanf("%d",&n);
    fflush(stdin);
    char nn[n][n],x[250];
    gets(x);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            nn[i][j]='.';
    }
    for(q=0;q<strlen(x);q++)
    {
        switch(x[q])
        {
            case 'U' : if(k-1>=0)
            {
                nn[k][l]='|';
                k--;
            }
            case 'D' : if(k+1<n)
            {
                nn[k][l]='|';
                k++;

            }
            case 'R' : if(l+1<n)
            {
                nn[k][l]='-';
                l++;
            }
            case 'L' : if(l-1>=0)
            {
                nn[k][l]='-';
                l--;
            }
        }
    }




}
