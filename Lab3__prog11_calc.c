#include <stdio.h>

int main () {
    int a,b,result;
    char d;

    printf("Enter the first number");
    scanf("%d",&a);

    printf("Enter the second number");  
    scanf("%d",&b);

    printf("Enter a operator (+,-,/,%):");
    scanf(" %c", &d);

    switch (d)
    {    case '+':  
        result = a + b;   
        printf("The result is %d",result);
        break;
        case '-':   
        result = a - b;   
        printf("The result is %d",result);
        break;
        case '/':
        result = a / b;
        printf("The result is %d",result);
        break;
        case '%':
        result = a % b;
        printf("The result is %d",result);
        break;
        default:
        printf("Operator is invalid");
        return 0;
    }
}
