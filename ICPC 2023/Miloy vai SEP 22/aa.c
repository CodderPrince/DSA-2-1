//Ethernal Entrophy

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,k,res;
        scanf("%d %d",&n,&k);
        if(n>=k)
        {
            if(n%k==0)
            {
                printf("1\n");
            }
            else
            {
                printf("2\n");
            }
        }
        else
        {
            res = (n+k-1)/n;
            printf("%d\n",res);
        }
    }
    return 0;
}