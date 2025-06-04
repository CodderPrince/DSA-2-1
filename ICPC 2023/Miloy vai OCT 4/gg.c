//prince

#include<stdio.h>  

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
{
    long long int  number; 
    scanf("%lld",&number);
    long long div=2, ans = 0, largest;
    while(number!=0)
    {
        if(number % div !=0)
        {
            div = div + 1;
        }
            else
            {
                largest  = number;
                number = number / div;

                if(number == 1)
                {
                    printf("%lld\n",largest);
                    break;
                }
            }
 }
 }
 return 0;
}