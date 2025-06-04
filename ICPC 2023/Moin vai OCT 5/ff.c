//prince

#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n],i,j,sum=0,flag=0;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
            //sum = sum + arr[i];
        }
        for(j=2; j<n; j+=1)
        {
            if(arr[j]%2 != arr[j-2]%2)
            {
                flag=1;
            }
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