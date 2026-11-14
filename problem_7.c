#include<stdio.h>
int main()
{
    int n;
    int x = 1;
    int z = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Table of %d is:\n",n);

    for(int i=1; i<=10; i++)
    {
        x = n*i;
        printf("%d*%d = %d\n", n,i,x);
        z = z+x;
    }
    printf("Sum of all values: %d", z);

    return 0;
}