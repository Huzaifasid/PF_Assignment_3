#include <stdio.h>
#include <conio.h>
#include <math.h>

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);

float sine(float angle);
float cosine(float angle);
float tangent(float angle);
float arcsine(float value);
float arccosine(float value);
float arctangent(float value);

float exponentiation(float base, float exponent);
float squareRoot(float value);
float cubeRoot(float value);
float nthRoot(float value, int n);
int factorial(int n);
float absoluteValue(float value);

float logarithm(float base, float value);
float naturalLogarithm(float value);
float logWithBase(float base, float value);

int main()
{

    float a, b;
    char operation;

    printf("===============================\n");
    printf("|    Scientific Calculator    |\n");
    printf("===============================\n");

    printf("Enter first number: ");
    scanf("%f", &a);

    printf("Please Select an operator: \n");
    printf("Enter + for Addition\n");
    printf("Enter - for Subtraction\n");
    printf("Enter * for Multiplication\n");
    printf("Enter / for Division\n");

    printf("Enter s for Sine\n");
    printf("Enter c for Cosine\n");
    printf("Enter t for Tangent\n");
    printf("Enter a for Arcsine\n");
    printf("Enter o for Arccosine\n");
    printf("Enter n for Artangent\n");

    printf("Enter e for Exponential\n");
    printf("Enter r for Square root\n");
    printf("Enter u for Cuberoot\n");
    printf("Enter g for nth root\n");
    printf("Enter f for Factorial\n");
    printf("Enter v for Absolute Value\n");

    printf("Enter l for Logarithm\n");
    printf("Enter i for Natural Logarithm\n");
    printf("Enter b for Custom Base Logarithm\n");

    operation = getche();

    if (operation != 's' && operation != 'c' && operation != 't' && operation != 'a' &&
        operation != 'o' && operation != 'n' && operation != 'A' && operation != 'O' &&
        operation != 'N' && operation != 'r' && operation != 'u' && operation != 'f' &&
        operation != 'v' && operation != 'e' && operation != 'R' && operation != 'U' &&
        operation != 'F' && operation != 'V' && operation != 'E' && operation != 'l' &&
        operation != 'i' && operation != 'L' && operation != 'I')
    {

        printf("\nEnter second number: ");
        scanf("%f", &b);
    }

    switch (operation)
    {
    // Arithmetic Operations
    case '+':
        printf("\nResult: %f\n", addition(a, b));
        break;
    case '-':
        printf("\nResult: %f\n", subtraction(a, b));
        break;
    case '*':
        printf("\nResult: %f\n", multiplication(a, b));
        break;
    case '/':
        printf("\nResult: %f\n", division(a, b));
        break;

    // Trigonometric Operations
    case 's':
    case 'S':
        printf("\nResult: %f\n", sine(a));
        break;
    case 'c':
    case 'C':
        printf("\nResult: %f\n", cosine(a));
        break;
    case 't':
    case 'T':
        printf("\nResult: %f\n", tangent(a));
        break;
    case 'a':
    case 'A':
        printf("\nResult: %f\n", arcsine(a));
        break;
    case 'o':
    case 'O':
        printf("\nResult: %f\n", arccosine(a));
        break;
    case 'n':
    case 'N':
        printf("\nResult: %f\n", arctangent(a));
        break;

    // Algebraic Operations
    case 'e':
    case 'E':
        printf("Result: %f\n", exponentiation(a, b));
        break;
    case 'r':
    case 'R':
        printf("Result: %f\n", squareRoot(a));
        break;
    case 'u':
    case 'U':
        printf("Result: %f\n", cubeRoot(a));
        break;
    case 'f':
    case 'F':
        printf("Result: %d\n", factorial((int)a));
        break;
    case 'v':
    case 'V':
        printf("Result: %f\n", absoluteValue(a));
        break;
    case 'g':
    case 'G':
        printf("Result: %f\n", nthRoot(a, b));
        break;

    // Logarithmic Operations
    case 'l':
    case 'L':
        printf("Result: %f\n", logarithm(a, b));
        break;
    case 'i':
    case 'I':
        printf("Result: %f\n", naturalLogarithm(a));
        break;
    case 'b':
    case 'B':
        printf("Result: %f\n", logWithBase(a, b));
        break;

    default:
        printf("\nError: Invalid operator\n");
        break;
    }

    return 0;
}

// Arithmetic Operations Calculations
// Addition Calculation
float addition(float a, float b)
{
    return a + b;
}

// Subtraction Calculation
float subtraction(float a, float b)
{
    return a - b;
}

// Multiplication Calculation
float multiplication(float a, float b)
{
    return a * b;
}

// Division Calculation
float division(float a, float b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        printf("Error: Division by zero\n");
        return 0;
    }
}

// Trigonometric Calculations
// Sine Calculation
float sine(float angle)
{
    return sin(angle);
}

// Cosine Calculation
float cosine(float angle)
{
    return cos(angle);
}

// Tangent Calculation
float tangent(float angle)
{
    return tan(angle);
}

// Arcsine Calculation
float arcsine(float value)
{
    return asin(value);
}

// Arccosine Calculation
float arccosine(float value)
{
    return acos(value);
}

// Arctangent Calculation
float arctangent(float value)
{
    return atan(value);
}

// Exponential Calculation
float exponentiation(float base, float exponent)
{
    return pow(base, exponent);
}

// Square Root Calculation
float squareRoot(float value)
{
    if (value >= 0)
    {
        return sqrt(value);
    }
    else
    {
        printf("Error: Cannot calculate square root of a negative number\n");
        return 0;
    }
}

// Cube Root Calculation
float cubeRoot(float value)
{
    return cbrt(value);
}

// Nth Root Calculation
float nthRoot(float value, int n)
{
    if (value >= 0 || n % 2 != 0)
    {
        return pow(value, 1.0 / n);
    }
    else
    {
        printf("Error: Cannot calculate even root of a negative number\n");
        return 0;
    }
}

// Factorial Calculation
int factorial(int n)
{
    if (n < 0)
    {
        printf("Error: Cannot calculate factorial of a negative number\n");
        return 0;
    }
    else if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

// Absolute Value Calculation
float absoluteValue(float value)
{
    return fabs(value);
}

// Logarithm Calculation
float logarithm(float base, float value)
{
    return log10(value) / log10(base);
}

// Natural Logarithm calculation
float naturalLogarithm(float value)
{
    if (value > 0)
    {
        return log(value);
    }
    else
    {
        printf("Error: Cannot calculate natural logarithm of a non-positive number\n");
        return 0;
    }
}

// Custom base logarithm calculation
float logWithBase(float base, float value)
{
    return log(value) / log(base);
}
