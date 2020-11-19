#include<stdio.h>
#include<stdio.h>
int Addition (int,int);
int Subtraction (int,int);
int Multiplication(int,int);
int Devision (int,int);
int Modulo (int,int);


int Addition(int x, int y)
{
    int z;
    z=(x+y);
    return(z);
}
int Subtraction(int x, int y)
{
    int z;
    z=(x-y);
    return(z);
}
int Multiplication(int x, int y)
{
    int z;
    z=(x*y);
    return(z);
}
int Devision(int x, int y)
{
    int z;
    z=(x/y);
    return(z);
}
int Modulo(int x, int y)
{
    int z;
    z=(x%y);
    return(z);
}
int main () //Set the Enviroment for the user to interact
{
    int operation;
    int num1;
    int num2;
    int result;
    int x;
    int y;
    int z;

    printf("CALCULATOR\n");
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication \n");
    printf("Press 4 for Division\n");
    printf("Press 5 for Modulus\n");
    printf("Press 0 for Exit\n");

start:
    printf("\nWhat operation you want to do\n");
    scanf("%d",&operation);
    if (operation == 0)
    {
        printf("See Y Layer");
        return 0 ;
    }





    if (operation>0 && operation<=5)
    {
        printf("Please FirstNo:\n");
        scanf("%d",&num1);
        printf("num1 is%d\n",num1);
        printf("Please Second:\n");
        scanf("%d",&num2);


        if (operation==1)
        {
            result=Addition(num1,num2);
            printf("Result: %d + %d = %d \n",num1,num2,result);
            goto start;
        }
        else if (operation==2)
        {
            result=Subtraction(num1,num2);
            printf("Result: %d - %d = %d \n",num1,num2,result);
            goto start;
        }
        else if (operation==3)
        {
            result=Multiplication(num1,num2);
            printf("Result: %d * %d = %d \n",num1,num2,result);
            goto start;
        }
        else if (operation==4)
        {
            result=Devision(num1,num2);
            printf("Result: %d / %d = %d \n",num1,num2,result);
            goto start;
        }
        else if (operation==5)
        {

            if (num2!=0)
            {
                result=Modulo(num1,num2);
                printf("Result: %d mod %d = %d \n",num1,num2,result);
                goto start;

            }
            else
            {
                printf("ERROR...............ERROR............ERROR............ERROR\nU cant divide with zero");
                goto start;
            }
        }


    }
    else
    {
        printf("InvalidInput pleaze Try again\n");
        goto start;
    }

}




