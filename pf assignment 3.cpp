#include <stdio.h>
#include <conio.h>

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

int main() {
    
    float a, b;
    char operation;

   
    printf("===============================\n");
    printf("|    Scientific Calculator    |\n");
    printf("===============================\n");

  
    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Enter operator (+, -, *, /): ");
    operation = getche();

    if (operation == '+' || operation == '-' || operation == '*' || operation == '/') {
        printf("\nEnter second number: ");
        scanf("%f", &b);
    } else {
        printf("\nInvalid Operator!!\n");
        return 1; 
    }

    switch (operation) {
        case '+':
            printf("Result: %f\n", addition(a, b));
            break;
        case '-':
            printf("Result: %f\n", subtraction(a, b));
            break;
        case '*':
            printf("Result: %f\n", multiplication(a, b));
            break;
        case '/':
            printf("Result: %f\n", division(a, b));
            break;
    }

    return 0;
}

float addition(float a, float b) {
    return a + b;
}

float subtraction(float a, float b) {
    return a - b;
}

float multiplication(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

