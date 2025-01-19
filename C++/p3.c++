#include <iostream>
#include <math.h>

void bin2oct();
void oct2bin();
void dec2base(int num, int base);

int main()
{
    char ch;
    std::cout << " Binary to Octal(a)\n Octal to Binary(b)";
    std::cin >> ch;
    switch (ch)
    {
    case 'a':
        bin2oct();
        break;
    case 'b':
        oct2bin();
        break;
    default:
        std::cout << "command not found";
        break;
    }
}
void bin2oct()
{
    int num, d, n, x, s = 0;
    std::cout << "Enter binary number";
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
    dec2base(s, 8);
}
void oct2bin()
{
    int num, d, n, x, s = 0;
    std::cout << "Enter Octal number";
    std::cin >> num;
    n = 0;

    while (num > 0)
    {
        d = num % 10;
        if (d >= 0 && d <= 7)
        {
            x = d * pow(8, n);
            n++;
            s = s + x;
            num = num / 10;
        }
        else
        {
            std::cout << "Enterd digit is not octal";
            break;
        }
    }

    dec2base(s, 2);
}

void dec2base(int num, int base)
{
    int arr[100], y, i = 0, c = 0;

    while (num > 0)
    {
        y = num % base;
        num = num / base;
        arr[i] = y;

        c++;
        i++;
    }
    for (i = c - 1; i >= 0; i--)
    {
        std::cout << arr[i];
    }
}
