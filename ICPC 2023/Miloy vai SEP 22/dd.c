#include <stdio.h>

int main()
{
    int rounds;
    scanf("%d",&rounds);
    for(int i=0;i<rounds;i++){
        int row,col,x,y,sum=0;
        scanf("%d",&row);
        scanf("%d",&col);
        scanf("%d",&x);
        scanf("%d",&y);
        getchar();
        if(y>2*x)
            y=2*x;
        for(int r=0;r<row;r++){
            int white=0;
            for(int c=0;c<col;c++){
                char squ;
                scanf("%c",&squ);
                if(squ=='*')
                    white=0;
                if(squ=='.'){
                    white++;
                    sum=sum+x;
                }
                if(white==2){
                    white=0;
                    sum=sum-2*x+y;
                }
            }
            getchar();
        }
        printf("%d\n",sum);
    }
    return 0;
}
