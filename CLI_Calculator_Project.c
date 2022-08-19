// Mini Project Name : - Simple CLI Calculator
// Coded : - Rakesh Kumar Meena
// Institute Name : - National Institute of Technology, Hamirpur


#include <stdio.h>  // Header file 

// Prototyping the function
void Addition(double *, double *);
void Subtraction(double *, double *);
void Multiplication(double *, double *);
void Division(double *, double *);

int main()
{
    
    char loop_repeater = '1';// To repeat the while loop continue  //
    do
    {
        int user_choice_operation;
        double first_Input, second_Input;

        printf("\n\n******************  Standard Calculator  ******************");

        printf("\n\n1.Addition Operation");
        printf("\n2.Subtraction Operation");
        printf("\n3.Multiplication Operation");
        printf("\n4.Division Operation");
        printf("\n\nEnter Your Choice :");
        scanf("%d", &user_choice_operation);

        if ((user_choice_operation > 4) || (user_choice_operation < 1))
        {
            printf("\nInvalid Choice\nPlease Choose Correct Option");
            printf("\nPress Any Key to Continue");
            fflush(stdin);
            getchar();
            continue;
        }

        printf("Enter the First Number :");
        scanf("%lf", &first_Input);

        printf("Enter the Second Number :");
        scanf("%lf", &second_Input);

        printf("Here is Your Result");
        switch (user_choice_operation)
        {
        case 1:
            Addition(&first_Input, &second_Input);
            break;
        case 2:
            Subtraction(&first_Input, &second_Input);
            break;
        case 3:
            Multiplication(&first_Input, &second_Input);
            break;
        case 4:
            Division(&first_Input, &second_Input);
            break;
        }
        printf("\nPress 1 to Continue\nPress Any Key to Exit:");
        fflush(stdin);
        scanf("%c", &loop_repeater);

        if (loop_repeater != '1')
        {
            printf("Calculator is Switching OFF........\n");
            break;
        }

    } while (loop_repeater == '1');

    return 0;
}

// Function To Add Two Numbers
void Addition(double *First_Num, double *Second_Num)
{
    printf("\n%.2lf + %.2lf = %.2lf\n", *First_Num, *Second_Num, *First_Num + *Second_Num);
}

// Function to Subtract Two Numbers
void Subtraction(double *First_Num, double *Second_Num)
{
    printf("\n%.2lf - %.2lf = %.2lf\n", *First_Num, *Second_Num, *First_Num - *Second_Num);
}

// Function to Multiply Two Numbers
void Multiplication(double *First_Num, double *Second_Num)
{
    printf("\n%.2lf * %.2lf = %.2lf\n", *First_Num, *Second_Num, *First_Num * *Second_Num);
}

// Function to Divide Two Numbers
void Division(double *First_Num, double *Second_Num)
{
    printf("\n%.2lf / %.2lf = %.2lf\n", *First_Num, *Second_Num, *First_Num / *Second_Num);
}

//********************************  Ends  ******************************
