#include <stdio.h>
int main()
{
    float Mathematics, BEE, Chemistry, Total_Percentage;

    printf("Enter Marks Scored in Mathematics:- ");
    scanf("%f", &Mathematics);

    printf("Enter Marks Scored in BEE:- ");
    scanf("%f", &BEE);

    printf("Enter Marks Scored in Chemistry:- ");
    scanf("%f", &Chemistry);

    Total_Percentage = (Mathematics + BEE + Chemistry) / 3;

    printf("Marks Scored in Each Subject:-\n");
    printf("%f Marks in Mathematics\n", Mathematics);
    printf("%f Marks in BEE\n", BEE);
    printf("%f Marks in Chemistry\n", Chemistry);

    printf("Total Percentage is:- %f\n", Total_Percentage);

    if (Mathematics >= 33 && BEE >= 33 && Chemistry >= 33 && Total_Percentage >= 40)
    {
        printf("You Got More Than Or equal to 33 Marks In Each Subject and Total Percentage is:- %f\n", Total_Percentage);
        printf("Congratulations You Passed!");
    }

    else if (Mathematics < 33 || BEE < 33 || Chemistry < 33)
    {
        printf("You get less Than 33 Marks In one or More Subjects\n");
        printf("Sorry, You Failed");
    }

    else if (Total_Percentage < 40)
    {
        printf("Your Total Percentage is Less than 40\n");
        printf("Sorry, You Failed");
    }

    else
    {
        printf("You have entered invalid marks. Please enter marks between 0 and 100.\n");
    }

    return 0;
}
