//Ethernal Entrophy

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n,x,y,sum=0;
        scanf("%d %d %d %d",&n,&m,&x,&y);
        getchar();
        if(y>2*x)
        
        y = 2*x;
        
        
        int i;
        for(i=0; i<n; i++)
        {
            int white=0;
            for(int j=0; j<m; j++)
            {
                char str;
                scanf("%c",&str);
                if(str=='*')
                white=0;
                if(str=='.')
                {
                    white++;
                    sum = sum+x;
                }
                if(white==2)
                {
                    white=0;
                    sum = sum-2*x+y;
                }
            }
            getchar();
        }
        printf("%d\n",sum);
        
    }

    return 0;
}