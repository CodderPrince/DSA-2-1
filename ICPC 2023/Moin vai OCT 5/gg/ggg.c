//prince

#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        getchar();
        char ch;
        int i,blue=0,red=0,flag=0;
        for(i=0; i<n; i++)
        {
            scanf("%c",&ch);
            if(ch == 'B')
            {
                blue++;
            }
            else if(ch == 'R')
            {
                red++;
            }
            else
            {
                if(blue==0 && red!=0)
                {
                    flag=1;
                }
                if(blue!=0 && red==0)
                {
                    flag=1;
                }
                blue=0;
                red=0;
            }
        }
            if(blue==0 && red!=0)
            {
                flag=1;
            }
            if(blue!=0 && red==0)
            {
                flag=1;
            }
        if(flag==1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }

    return 0;
}