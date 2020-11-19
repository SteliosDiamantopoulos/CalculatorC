//######################This is a Calculator That can do multiple operations using fload numbers#########
//######################Diamantopoulos Stylianos 494002##################################################
#include<stdio.h>
#include<math.h>
float Addition (float,float);
float Subtraction (float,float);
float Multiplication(float,float);
float Devision (float,float);
float Modulo (float,float);
float operation;
float num1;
float num2;
float result;
float x;
float y;
float z;


float Addition(float x, float y)
{
    float z;
    z=(x+y);
    return(z);
}
float Subtraction(float x, float y)
{
    float z;
    z=(x-y);
    return(z);
}
float Multiplication(float x, float y)
{
    float z;
    z=(x*y);
    return(z);
}
float Devision(float x, float y)
{
    float z;
    z=(x/y);
    return(z);
}
float Modulo(float x, float y)
{
    float z;
    z=fmod(x,y);
    return(z);
}
int main () //Set the Enviroment for the user to interact
{


    printf("CALCULATOR\n");
    printf("Press 1 for Addition\n");
    printf("Press 2 for Subtraction\n");
    printf("Press 3 for Multiplication \n");
    printf("Press 4 for Division\n");
    printf("Press 5 for Modulus\n");
    printf("Press 0 for Exit\n");

start:
    printf("\nWhat operation you want to do\n");
    scanf("%f",&operation);
    if (operation == 0)
    {
        printf("See Y Layer");
        return 0 ;
    }

    if (operation>0 && operation<=5)
    {
        printf("Please FirstNo:\n");
        scanf("%f",&num1);
        ;
        printf("Please Second:\n");
        scanf("%f",&num2);


        if (operation==1)
        {
            result=Addition(num1,num2);
            printf("Result: %f + %f = %f \n",num1,num2,result);
            goto start;
        }
        else if (operation==2)
        {
            result=Subtraction(num1,num2);
            printf("Result: %f - %f = %f \n",num1,num2,result);
            goto start;
        }
        else if (operation==3)
        {
            result=Multiplication(num1,num2);
            printf("Result: %f * %f = %f \n",num1,num2,result);
            goto start;
        }
        else if (operation==4)
        {
            result=Devision(num1,num2);
            printf("Result: %f / %f = %f \n",num1,num2,result);
            goto start;
        }
        else if (operation==5)
        {

            if (num2!=0)
            {
                result=Modulo(num1,num2);
                printf("Result: %f mod %f = %f \n",num1,num2,result);
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
        printf("InvalidInput please Try again\n");
        goto start;
    }

}




