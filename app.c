#include<stdio.h>
#include<conio.h>
void displayMenu()
{
    printf("Enter operator:\n");
    printf("1. Sum:\n");
    printf("2. Difference:\n");
    printf("3. Product:\n");
    printf("4. Quotient:\n");
    printf("5. Exit:\n");
}
float Sum(float a,float b)
{
    return a+b;
}
float Difference(float a,float b)
{
    return a-b;
}
float Product(float a,float b)
{
    return a*b;
}
float Quotient(float a,float b)
{
    if(b!=0)
    {
    return a/b;
    }
    else 
    {
        printf("Error:Division by 0 is not allowed");
    }
}

void main()
{
int choice;
float n1,n2,result;

do{
        displayMenu();
        printf("Enter your choice(1-5):");
        scanf("%d",&choice);

        if(choice>=1 && choice<=4)
        {
            printf("Enter any two numbers:");
            scanf("%f%f",&n1,&n2);
        }

        switch(choice)
        {
            case 1:
            result=Sum(n1,n2);
            printf("result=%.2f",result);
            break;

            case 2:
            result=Difference(n1,n2);
            printf("result=%.2f",result);
            break;

            case 3:
            result=Product(n1,n2);
            printf("result=%.2f",result);
            break;

            case 4:
            result=Quotient(n1,n2);
            if(n2!=0)
            {
            printf("result=%.2f",result);
            }
            break;

            case 5:
            printf("Exit the program.GoodBye!");

            default:
            printf("Error:PLease Try Again");
        }
    }
    while(choice!=5);
    getch();
}