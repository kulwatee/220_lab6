#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,k=0,l=0,q,w,e;
    scanf("%d",&n);
    fflush(stdin);
    char nn[n][n],x[250];
    gets(x);
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            nn[i][j]='.';
    }
    for(q=0; q<strlen(x); q++)
    {
        switch(x[q])
        {
        case 'U' :
            if(k-1>=0)
            {
                if(nn[k][l]=='.')
                    nn[k][l]='|';
                else if(nn[k][l]=='-')
                    nn[k][l]='+';

                nn[k-1][l]='|';
                k--;

            }
            break;
        case 'D' :
            if(k+1<n)
            {
                if(nn[k][l]=='.')
                    nn[k][l]='|';
                else if(nn[k][l]=='-')
                    nn[k][l]='+';

                nn[k+1][l]='|';
                k++;
            }
            break;
        case 'R' :
            if(l+1<n)
            {
                if(nn[k][l]=='.')
                    nn[k][l]='-';
                else if(nn[k][l]=='|')
                    nn[k][l]='+';

                nn[k][l+1]='-';
                l++;
            }
            break;
        case 'L' :
            if(l-1>=0)
            {
                if(nn[k][l]=='.')
                    nn[k][l]='-';
                else if(nn[k][l]=='|')
                    nn[k][l]='+';

                nn[k][l-1]='-';
                l--;
            }

        }
    }
    for(w=0; w<n; w++)
    {
        for(e=0; e<n; e++)
            printf("%c",nn[w][e]);
        printf("\n");
    }




}
