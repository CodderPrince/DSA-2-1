#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char ta1[1000000];
    char ta2[1000000];
    int b=0,a=0;
    gets(ta1);
    gets(ta2);
    int l=strlen(ta1);
    int h=strlen(ta2);
    int k=0;
    if(l!=h){
        printf("NO");
        return 0;
    }
    for(int i=0;i<l;i++){
        if(ta1[i]!=ta2[i]){
            a+=ta1[i];
            b+=ta2[i];
            k+=1;}
    }
    if(k==2 && a==b){
        printf("YES");
        return 0;}


printf("NO");

    return 0;
}
