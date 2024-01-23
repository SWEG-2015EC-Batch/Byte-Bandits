#include <iostream>

int main()
{
    int numbers[100];
    int size = 0;

    std::cout << "Enter numbers (enter 0 to stop): ";

    int num;
    while (true)
    {
        std::cin >> num;
        if (num == 0)
            break;

        numbers[size] = num;
        size++;
    }

    // Selection sort in ascending order
    for (int i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (numbers[j] < numbers[minIndex])
            {
                minIndex = j;
            }
        }
        std::swap(numbers[i], numbers[minIndex]);
    }

    std::cout << "Numbers in ascending order: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Selection sort in descending order
    for (int i = 0; i < size - 1; i++)
    {
        int maxIndex = i;
        for (int j = i + 1; j < size; j++)
        {
            if (numbers[j] > numbers[maxIndex])
            {
                maxIndex = j;
            }
        }
        std::swap(numbers[i], numbers[maxIndex]);
    }

    std::cout << "Numbers in descending order: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}