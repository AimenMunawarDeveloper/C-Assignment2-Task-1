#include <stdio.h>
int main() {
    //For Task 1
    float a, b;
    char ch;
    printf("Input two integers and an operator separated with commas (+,-,*,/):");
    scanf("%f,%f,%c", &a, &b, &ch);
    switch (ch) {
        case '+':
            printf("%f + %f = %f", a, b, a + b);
            break;
        case '-':
            printf("%f - %f = %f", a, b, a - b);
            break;
        case '/':
            printf("%f / %f = %f", a, b, a / b);
            break;

        case '*':
            printf("%f * %f = %f", a, b, a * b);
            break;
        default:
            printf("Invalid input");
            break;
    }


    return 0;
}
