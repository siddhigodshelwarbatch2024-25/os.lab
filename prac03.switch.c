#include <stdio.h>

int main() {
    int a, b, ch;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1. Add  2. Sub  3. Mul  4. Div\n");
    printf("Enter choice: ");
    scanf("%d", &ch);

    switch (ch) {
        case 1:
            printf("Sum = %d\n", a + b);
            break;

        case 2:
            printf("Sub = %d\n", a - b);
            break;

        case 3:
            printf("Mul = %d\n", a * b);
            break;

        case 4:
            if (b != 0)
                printf("Div = %d\n", a / b);
            else
                printf("Error: Division by zero\n");
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}
