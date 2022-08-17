#include <stdio.h>
#include<stdlib.h>
#include <math.h>


int main(){

    double number1;
    double number2;
    char op;
    double sum1;
    double minus1;
    double multiplication1;
    double Division1;
    double power1;
    double sqrt1;
void sum(){
     sum1 = number1 + number2;
        printf("%f", sum1);
}
void minus(){

    minus1 = number1 - number2;
    printf("%f", minus1);
}

void multiplication(){
   multiplication1 = number1 * number2;
   printf("%f", multiplication1); 
}

void Division(){
    Division1 = number1 / number2;
    printf("%f",Division1);
}

void Power(){
   double power1 = pow(number1 , number2);
    printf("%f", power1);
}

void Sqrt(){
    sqrt1 = sqrt(number1);
    printf("%f", sqrt1);
}
    printf("Enter Your Number1: ");
    scanf("%lf", &number1);

    printf("Enter Your Operator:");
    scanf(" %c", &op);
    if (op == 'R'){
        Sqrt();
    }
    printf("Enter Your Number2: ");
    scanf("%lf", &number2);


    if (op == '+'){
        sum();

        }else if(op == '-'){
            minus();
        
        }else if (op == '*')
        {
            multiplication();
        }else if (op == '/'){
            Division();
        }else if (op == '^'){
            Power();
        }else if(op == 'R'){
            Sqrt();
        }
        
        else
        {
            printf("Invalid Operator");
        }
        
    return 0;
}