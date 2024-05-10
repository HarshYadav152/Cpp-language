#include <stdio.h>
#include <math.h>
int main()
{
    int i, b, digit, power, multi, d, deci = 0, p;

    printf("Enter binary no. :");
    scanf("%d", &b);
    printf("how many digit in binary no. :");
    scanf("%d", &digit);
    while (b != 0)
    {
        i = b % 10;
        power = 0;
        while (power < digit)
        {
            if (power == 0)
            {
                p = 1;
                d = i * p;
            }
            else
            {
                p = pow(2, power);
                d = i * p;
            }
            power = power + 1;
            // d = i * p;
        }
        deci = deci + d;
        b = b / 10;
    }

    printf("Decimal no. %d", deci);
    return 0;
}