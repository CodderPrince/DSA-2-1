//prince

#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float hotWater,coldWater,temperature;
        scanf("%f %f %f",&hotWater,&coldWater,&temperature);
        float avg=0;
        float x,y,m,n;
        int cup;
        avg = (hotWater+coldWater)/2;
        if(temperature>avg)
        {
            cup = (hotWater-avg)/(temperature-avg);
            if(cup%2==1)
            {
                cup = cup +1;
            }
            if(cup%2==0)
            {
                x = hotWater-avg;
                y = temperature -avg;//temperature short
                m = fabs(y - (x/(cup-1)));
                n = fabs(y - (x/(cup+1)));
                if(m>n)
                {
                    cup = cup+1;
                }
                else
                {
                    cup = cup-1;
                }
            }
        }
        else
        {
            cup = 2;
        }
        printf("%d\n",cup);
    }
    
}