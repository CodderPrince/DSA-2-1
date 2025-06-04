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
        int arr[n],i,j,e;
        for(i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(arr[i]==arr[j])
                {
                    e++;
                }
                else if(arr[i]<arr[])
            }
        }
        if(e==(n-1))
        {
            printf("YES\n");
        }
    }
}