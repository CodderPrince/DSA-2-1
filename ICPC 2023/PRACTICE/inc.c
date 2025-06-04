#include<stdio.h>
int main()
{
    long long n;
    scanf("%lld",&n);
    long long int array[n];
    long long int i,j,size=5;
    for(i=0; i<n; i++)
    {
        scanf("%lld",&array[i]);
    }
    long long int swap,counter=0;
    for(i=0; i<n-1; i++)
    {
        swap=0;
        for(j=0; j<n-1-i; j++)
        {
            counter++;
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
                swap=1;
            }
        }
        if(swap==0)
        {
            break;
        }
    }
    printf("%lld\n",counter);
    return 0;
}