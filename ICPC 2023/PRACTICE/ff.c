#include<stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int i, arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int AliceTime=0, BobTime=0, AliceConsume=0, BobConsume=0, left=0, right = n-1;\
    while(left<=right)
    {
        if(AliceTime <= BobTime)
        {
            AliceTime = AliceTime + arr[left];
            AliceConsume++;
            left++;
        }
        else
        {
            BobTime = BobTime + arr[right];
            BobConsume++;
            right--;
        }
    }

    printf("%d %d\n",AliceConsume,BobConsume);

    return 0;
}