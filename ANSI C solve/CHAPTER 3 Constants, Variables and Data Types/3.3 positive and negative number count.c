#include<stdio.h>
#define N 5;
int main()
{

int  A[N], i, pos=0, neg=0, zero=0;
printf("Enter the 5 numbers:%d\n");
for(i=0; i<N; i++)
    scanf("%d", &A[i]);
for(i=0; i<N; i++)
{
if(A[i]>0)
p++;
else if(A[i]<0)
neg++;
else
zero++;
}
printf("Total positive number:%d\n",pos);
printf("Total negative number:%d\n",neg);
printf("Total zeros number:%d\n",zero);



return 0;
}
