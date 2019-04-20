#include <stdio.h>

int main()
{
    float v1, v2;
    char op;
    printf("Please type your expression: ");
    scanf("%f %c %f", &v1, &op, &v2);
    switch(op)
    {
        case '+':
            printf("%f + %f = %f\n", v1, v2, v1 + v2);
            break;
        case '-':
            printf("%f - %f = %f\n", v1, v2, v1 - v2);
        case '*':
            printf("%f * %f = %f\n", v1, v2, v1 * v2);
        case '/':
            if(v2 == 0)
                printf("division by zero!\n");
            else
                printf("%f / %f = %f\n", v1, v2, v1 / v2);
            break;
        default:
            printf("unknown operator.\n");
        }
        return 0;
}