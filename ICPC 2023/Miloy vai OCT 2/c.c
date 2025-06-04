//prince

#include<stdio.h>
#include<math.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    while(n--)
    {
        long long int num;
        scanf("%lld",&num);
        
        num = num - (num%11)*111;
        if(num>=0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}