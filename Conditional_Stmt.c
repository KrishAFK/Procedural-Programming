#include <stdio.h>
#include <string.h>

/*..
Program 1
int main()
{
    int num;
        scanf("%d",&num);
        if (num>=0)
            printf("The number is positive\n");
        else
            printf("The number is negative\n");
}


Program 2
int main()
{
    char choice;
    printf("Do you want to continue (y/n) or (Y/N) ?: ");
    scanf("%c",&choice);
    switch (choice)
    {
        case 'Y' : case 'y':
            printf("Your choice is YES");
            break;
        case 'N' : case 'n' :
            printf("Your coice is NO");
            break;
    }
}


Program3
int main()
{
    int a;
    int num;
    printf("Enter value:");
    scanf("%d",&num);
    num>50 ? (a=1) : (a=0);
    printf("%d",a);

}


Program4
int main()
{
    char grade;
    printf("Enter Grade: ");
    scanf("%c",&grade);
    switch (grade)
    {
        case 'A' : case 'a' :
            printf("Excellent!");
            break;
        case 'B' : case 'b' :
            printf("Good!");
            break;
        case 'C' : case 'c' :
            printf("Average!");
            break;
        case 'D' : case 'd' :
            printf("Poor!");
            break;
        case 'E' : case 'e' :
            printf("Failing!");
            break;
    }
}


Program5
int main()
{
    char choice;
    float temp,value;
    printf("Enter Temperature: ");
    scanf("%f",&temp);
    printf("Enter conversion required F or C: ");
    scanf(" %c",&choice);
    if (choice=='F')
    {
        value=temp * (9.0/5.0) +32;
        printf("Temperature in Fahrenheit: %.2f\n", value);
    }
    if (choice=='C')
    {
        value=(temp -32) * (5.0/9.0);
        printf("Temperature in Celsius: %.2f\n", value);
    }
}


Program6
int main()
{
    char day[4];

    printf("Enter 3-letter day ");
    scanf("%3s", day);

    if (strcmp(day, "mon") == 0 || strcmp(day, "Mon") == 0 || strcmp(day, "MON") == 0)
        printf("Day number is 1");
    else if (strcmp(day, "tue") == 0 || strcmp(day, "Tue") == 0 || strcmp(day, "TUE") == 0)
        printf("Day number is 2");
    else if (strcmp(day, "wed") == 0 || strcmp(day, "Wed") == 0 || strcmp(day, "WED") == 0)
        printf("Day number is 3");
    else if (strcmp(day, "thu") == 0 || strcmp(day, "Thu") == 0 || strcmp(day, "THU") == 0)
        printf("Day number is 4");
    else if (strcmp(day, "fri") == 0 || strcmp(day, "Fri") == 0 || strcmp(day, "FRI") == 0)
        printf("Day number is 5");
    else if (strcmp(day, "sat") == 0 || strcmp(day, "Sat") == 0 || strcmp(day, "SAT") == 0)
        printf("Day number is 6");
    else if (strcmp(day, "sun") == 0 || strcmp(day, "Sun") == 0 || strcmp(day, "SUN") == 0)
        printf("Day number is 7");
}


Program7
int main()
{
    int num1;
    int num2;
    printf("Enter 1st number:");
    scanf("%d",&num1);
    printf("Enter 2nd number:");
    scanf("%d",&num2);

    if (num1%2==0 && num2%2==0)
        printf("Both numbers are even");
    else if (num1%2==0 && num2%2!=0)
        printf("One number is even");
    else if (num1%2!=0 && num2%2==0)
        printf("One number is even");
    else
        printf("Both numbers are odd");
}
*/

int main()
{
    char code;
    int qty;
    float unitPrice = 0.0, discount = 0.0;
    float total, finalAmount;

    printf("Enter product code (W, X, Y, Z): ");
    scanf(" %c", &code);

    printf("Enter quantity ordered: ");
    scanf("%d", &qty);

    /* Determine unit price */
    switch (code)
    {
        case 'W':
            unitPrice = 12.45;
            if (qty >= 100) discount = 0.075;
            else if (qty >= 50) discount = 0.05;
            else if (qty >= 10) discount = 0.02;
            break;
        case 'X':
            unitPrice = 2.36;
            if (qty >= 100) discount = 0.04;
            else if (qty >= 50) discount = 0.02;
            else if (qty >= 10) discount = 0.005;
            break;

        case 'Y':
            unitPrice = 6.50;
            if (qty >= 100) discount = 0.05;
            else if (qty >= 50) discount = 0.025;
            else if (qty >= 10) discount = 0.01;
            break;

        case 'Z':
            unitPrice = 16.40;
            if (qty >= 100) discount = 0.15;
            else if (qty >= 50) discount = 0.125;
            else if (qty >= 10) discount = 0.10;
            break;
    }
    total = unitPrice * qty;
    finalAmount = total - (total * discount);

    printf("\nTotal price before discount: %.2f", total);
    printf("\nDiscount applied: %.2f%%", discount * 100);
    printf("\nFinal order price: %.2f\n", finalAmount);
    
}