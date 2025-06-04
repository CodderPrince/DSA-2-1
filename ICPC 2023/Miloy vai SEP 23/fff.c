#include<stdio.h>
int main()
{
    int x,i,j;
    scanf("%d",&x);
    if(x==3){
        for(i=1;i<=x;i++){
            for(j=1;j<=x;j++){
                if(i==2)
                    printf("B");
                else if(j%2==1)
                    printf("W");
                else
                    printf("B");
            }
            printf("\n");
        }
    }
    else{
        for(i=1;i<=x;i++){
            for(j=1;j<=x;j++){
                if(i%2==1 && j%2==1)
                    printf("W");
                else if(i%2!=1 && j%2!=1)
                    printf("W");
                else
                    printf("B");
            }
            printf("\n");
        }
    }
    return 0;
}
