//prince

#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        long long int arr[10000],i,j,index=0;
        for(i=0; i<=10000; i++)
        {
            if(i==1)
            {
                continue;
            }
            for(j=2; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    break;
                }
            }
            if(j*j>i)
            {
                arr[index]=i;
                index++;
            }
        }
        printf("%lld\n",arr[n]);
        /*for(i=0; i<=n; i++)
        {
            if(arr[i]>0)
            {
                printf("%lld\n",arr[i]);
            }
            
        }*/
    }

    return 0;
}