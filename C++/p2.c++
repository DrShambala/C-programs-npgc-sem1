//  Binary to decial and decimal to binary

#include <iostream>
#include <math.h>

void dec2bin();
void bin2dec();

int main()
{
    char ch;
    std::cout << "convert Decimal to Binary (a)\nconvert Binary to Decimal (b)\n";
    std::cin >> ch;

    switch (ch)
    {
    case 'a':
        dec2bin();
        break;
    case 'b':
        bin2dec();
        break;

    default:
    std::cout << "Command not found";
        break;
    }
    return 0;
}
void bin2dec()
{
    int num, d, n, x, s = 0;
    std::cout << "Enter number";
    std::cin >> num;
    n = 0;

    while (num > 0)
    {
        d = num % 10;
        if (d != 1 && d != 0)
        {
            std::cout << "Enterd digit is not binary";
            break;
        }

        x = d * pow(2, n);
        n++;
        s = s + x;
        num = num / 10;
    }
    std::cout << "decimal value is " << s;
}
void dec2bin()
{
    int arr[100], num, y, i = 0, c = 0;

    std::cout << "Enter number";
    std::cin >> num;

    while (num > 0)
    {
        y = num % 2;
        num = num / 2;
        arr[i] = y;

        c++;
        i++;
    }

    for (i = c - 1; i >= 0; i--)
    {
        std::cout << arr[i];
    }
}
