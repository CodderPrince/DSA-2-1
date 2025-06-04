//prince

#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,res;
    scanf("%d %d",&a,&b);
    res = ceil((float)a/b);
    printf("%d\n",res);

    return 0;
}