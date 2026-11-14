#include<stdio.h>
int main()
{
    int a = 0, n= 0, i = 1, z = 0;
    
    printf("Enter Number:-");
    scanf("%d", &a);

    z = a;

    printf("Enter Power:-");
    scanf("%d", &n);

    while (i<= n)
    {   
        printf("%d^%d = %d\n", a, i, z);
        
        
        z = z*a;
        i++;
    }

}