//prince

#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,c;
        scanf("%d %d %d",&a,&b,&c);
        int sum,min;
        sum = (a+b+c)/3;
        if(a<b)
        {
            min=a;
        }
        else
        {
            min=b;
        }
        if(min<sum)
        {
            printf("%d\n",min);
        }
        else
        {
            printf("%d\n",sum);
        }
    }

    return 0;
}