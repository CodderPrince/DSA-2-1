//Ethernal Entrophy

#include <stdio.h>
#include <string.h>

int main() 
{
    char str[1000001]; 
    scanf("%s", str);
    int cl = 1; 
    int ml = 1;    

    for (int i = 1; i < strlen(str); i++) 
    {
        if (str[i] == str[i - 1]) 
        {
            cl++;
        } 
        else 
        {
            cl = 1;
        }

        if (cl > ml) 
        {
            ml = cl;
        }
    }

    printf("%d\n", ml);

    return 0;
}
 