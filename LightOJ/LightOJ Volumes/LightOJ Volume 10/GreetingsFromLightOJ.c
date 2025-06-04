#include<stdio.h>
int main(){
    int t,i;
    scanf("%d", &t);
    for(i=1; i<=t; i++)
    {
        int a,b, sum=0;
        scanf("%d %d", &a, &b);
        sum = a+b;
        printf("Case %d: %d\n",i,sum);

    }
    return 0;
}