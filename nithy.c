
#include <stdio.h>
#include <math.h>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double power(double base, double exponent);
double squareRoot(double x);
double sinFunction(double angle);
double cosFunction(double angle);
double tanFunction(double angle);
double solvePolynomial(double a, double b, double c);
double logarithm(double base, double x);

int main() {
    int choice;
    double num1, num2, result;

    do {
        printf("\nCalculator Menu:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Power\n");
        printf("6. Square Root\n");
        printf("7. Sine\n");
        printf("8. Cosine\n");
        printf("9. Tangent\n");
        printf("10. Solve Polynomial (ax^2 + bx + c = 0)\n");
        printf("11. Logarithm\n");
        printf("0. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = add(num1, num2);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = subtract(num1, num2);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = multiply(num1, num2);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = divide(num1, num2);
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = power(num1, num2);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = squareRoot(num1);
                break;
            case 7:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                result = sinFunction(num1);
                break;
            case 8:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                result = cosFunction(num1);
                break;
            case 9:
                printf("Enter an angle in degrees: ");
                scanf("%lf", &num1);
                result = tanFunction(num1);
                break;
            case 10:
                printf("Enter coefficients a, b, and c: ");
                scanf("%lf %lf %lf", &num1, &num2, &result);
                result = solvePolynomial(num1, num2, result);
                break;
            case 11:
                printf("Enter base and x: ");
                scanf("%lf %lf", &num1, &num2);
                result = logarithm(num1, num2);
                break;
            case 0:
                printf("Exiting calculator.\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
                continue;
        }

        printf("Result: %lf\n", result);

    } while (1);

    return 0;
}

double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

double power(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double x) {
    if (x >= 0) {
        return sqrt(x);
    } else {
        printf("Error: Cannot calculate square root of a negative number\n");
        return 0;
    }
}

double sinFunction(double angle) {
    return sin(angle * M_PI / 180.0);
}

double cosFunction(double angle) {
    return cos(angle * M_PI / 180.0);
}

double tanFunction(double angle) {
    return tan(angle * M_PI / 180.0);
}

double solvePolynomial(double a, double b, double c) {
    double discriminant = b * b - 4 * a * c;
    if (discriminant >= 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Roots: %lf, %lf\n", root1, root2);
        return 0;
    } else {
        printf("Complex roots.\n");
        return 0;
    }
}

double logarithm(double base, double x) {
    if (base > 0 && base != 1 && x > 0) {
        return log(x) / log(base);
    } else {
        printf("Error: Invalid base or argument for logarithm\n");
        return 0;
    }
}
```
