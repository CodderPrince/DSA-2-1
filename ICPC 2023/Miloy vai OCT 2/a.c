//prince

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c,m;
        scanf("%d %d %d",&a,&b,&c);
        if(b<c)
        {
            m = 2*c - b;
        }
        else
        {
            m = b;
        }
        if(a<m)
        {
            printf("1\n");
        }
        else if(a>m)
        {
            printf("2\n");
        }
        else
        {
            printf("3\n");
        }
    }

    return 0;
}