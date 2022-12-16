#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
  
    switch ((num % 3) + (num % 5))
    {
        case 0:
            printf("FizzBuzz");
            break;
        default:
            switch (num % 3)
            {
                case 0:
                    printf("Fizz");
                    break;
                default:
                    switch (num % 5)
                    {
                        case 0:
                            printf("Buzz");
                            break;
                        default:
                            printf("%d", num);
                            break;
                    }
                    break;
            }
            break;
    }
    printf("\n");
    return 0;
}