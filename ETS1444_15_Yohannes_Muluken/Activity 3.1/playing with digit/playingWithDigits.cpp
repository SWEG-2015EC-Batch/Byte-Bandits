// playing with digits
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, menu, reverse = 0, temp, count = 0, sum = 0, product = 1, lastDigit, firstDigit;
    int swaped, middle, numSame, frequency[10] = {0}, factorial = 1;
    bool isEven = false, isPalendrome = false, isArmstrong = false, isStrong = false, isPerfect = false;
    cout << "enter the number: " << endl;
    cin >> num;

    do
    {

        cout << "\n choose operation \n";
        cout << " 1 for reverse \n 2 for no of digits\n 3 for sum of digits\n";
        cout << " 4 for product of even digits\n 5 for first and last digit sum\n";
        cout << " 6 for swaping first and last digit\n 7 check palindrome\n 8 for frequency of digits\n";
        cout << " 9 check armstrong\n 10 check strong\n 11 check perfect\n and any other key to exit\n ";
        cin >> menu;

        switch (menu)
        {
        case 1:
        {
            while (num > 0)
            {
                temp = num % 10;
                reverse = (reverse * 10) + temp;
                num /= 10;
            }

            cout << "reverse: " << reverse;
        }
        break;

        case 2:
        {
            while (num > 0)
            {
                count++;
                num /= 10;
            }

            cout << "no of digits: " << count;
        }
        break;

        case 3:
        {
            while (num > 0)
            {
                temp = num % 10;
                sum += temp;
                num /= 10;
            }

            cout << "sum of digits: " << sum;
        }
        break;

        case 4:
        {
            while (num > 0)
            {
                temp = num % 10;
                if (temp % 2 == 0)
                {
                    isEven = true;
                    product *= temp;
                }

                num /= 10;
            }

            if (!isEven)
            {
                product = 0;
            }

            cout << "product of even digits: " << product;
        }
        break;

        case 5:
        {

            lastDigit = num % 10;
            while (num > 0)
            {
                firstDigit = num % 10;
                num /= 10;
            }

            cout << "sum of the first and last digit: " << firstDigit + lastDigit;
        }
        break;

        case 6:
        {

            numSame = num;
            lastDigit = num % 10;
            while (num > 0)
            {
                firstDigit = num % 10;
                count++;
                num /= 10;
            }

            middle = numSame - ((firstDigit * pow(10, (count - 1))) + lastDigit);
            swaped = (lastDigit * pow(10, (count - 1))) + middle + firstDigit;

            cout << "swaped: " << swaped;
        }
        break;

        case 7:
        {

            numSame = num;
            while (num > 0)
            {
                temp = num % 10;
                reverse = (reverse * 10) + temp;
                num /= 10;
            }

            if (reverse == numSame)
            {
                isPalendrome = true;
            }

            cout << "is palendrome: " << boolalpha << isPalendrome;
        }
        break;

        case 8:
        {

            while (num > 0)
            {
                temp = num % 10;
                frequency[temp]++;
                num /= 10;
            }

            for (int i = 0; i < 10; i++)
            {
                cout << "frequency of " << i << " is " << frequency[i] << endl;
            }
        }
        break;

        case 9:
        {

            numSame = num;
            while (num > 0)
            {
                count++;
                num /= 10;
            }

            num = numSame;
            while (num > 0)
            {
                temp = num % 10;
                sum += (pow(temp, count));
                num /= 10;
            }

            if (sum == numSame)
            {
                isArmstrong = true;
            }

            cout << "is armstrong: " << boolalpha << isArmstrong;
        }
        break;

        case 10:
        {

            numSame = num;
            while (num > 0)
            {
                temp = num % 10;

                for (int i = 1; i <= temp; i++)
                {
                    factorial *= i;
                }
                sum += factorial;
                factorial = 1;
                num /= 10;
            }

            if (sum == numSame)
            {
                isStrong = true;
            }

            cout << "is strong: " << boolalpha << isStrong;
        }
        break;

        case 11:
        {

            if (num >= 0)
            {
                for (int i = 1; i < num; i++)
                {
                    if (num % i == 0)
                    {

                        sum += i;
                    }
                }
            }
            if (sum == num)
            {
                isPerfect = true;
            }

            cout << "is perfect: " << boolalpha << isPerfect;
        }
        break;
        }

    } while ((menu > 0) && (menu <= 12));
}