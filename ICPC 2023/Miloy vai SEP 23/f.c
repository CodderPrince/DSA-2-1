////Ethernal Entrophy

#include<stdio.h>
#include<math.h>

int main()
{
   int n;
   scanf("%d",&n);
   int i,j;
   for(i=0; i<n; i++)
   {
    for(j=0; j<n; j++)
    {
        if((i+j) % 2 == 0)
        {
            printf("W");
        }
        else
        {
            printf("B");
        }
    }
    printf("\n");
   }

    return 0;
}