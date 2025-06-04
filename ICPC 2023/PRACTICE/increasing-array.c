//increasing-array.c
//prince

#include<stdio.h>

int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int a[n],i;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&a[i]);
    }
    long long int index,value,count=0;
    for(i=1; i<n; i++)
    {
        value = a[i];
        index = i;
        while(index>0 && a[index-1]>value)
        {
            a[index] = a[index-1];
            index--;
            count++;
        }
        a[index]=value;
    }
 
    printf("%lld\n",count+1);


    return 0;
}