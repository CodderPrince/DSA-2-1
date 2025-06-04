//Prince

#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    int discriminant = b * b - 4 * a * c;
    int root1 = (-b + sqrt(discriminant)) / (2 * a);
    int root2 = (-b - sqrt(discriminant)) / (2 * a);

    if (discriminant > 0) 
    {
        if(root1<root2)
        {
            printf("Two roots: %d %d\n", root1, root2);
        }
        else
        {
            printf("Two roots: %d %d\n", root2, root1);
        }
        
    } 
    else if (discriminant == 0) 
    {
        int root = -b / (2 * a);
        printf("One root: %d\n", root);
    } 
    else 
    {
        printf("No roots\n");
    }
    
    return 0;
}
