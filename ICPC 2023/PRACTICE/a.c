//prince

#include <stdio.h>
#include <string.h>

int main() 
{
    int t;
    scanf("%d", &t);

    while (t--) 
    {
        char s[10];
        scanf("%s", s);
        int n = strlen(s);

        if (n == 5) 
        {
            printf("3\n");
        } 
        else if ((s[0] == 'o' && s[1] == 'n') || (s[1] == 'n' && s[2] == 'e') || (s[0] == 'o' && s[2] == 'e')) 
        {
            printf("1\n");
        } 
        else 
        {
            printf("2\n");
        }
    }

    return 0;
}
