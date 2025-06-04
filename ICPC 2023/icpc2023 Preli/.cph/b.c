// Ethernal_Entrophy

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int t,k;
    scanf("%d",&t);
    for(k=1; k<=t; k++)
    {
        int n,a,out=0,i;
        scanf("%d %d",&a,&n);
        for(i=1; i<=n; i++)
        {
            out = out + abs((i%a)-(i%(a-1)));
        }
        printf("Case %d: %d\n",k,out);
    }

    return 0;
}