#include <iostream>

using namespace std;

int main()
{

    int arr[4][5] = {16, 22, 99, 4, 18, -258, 4, 101, 5, 98, 105, 6, 15, 2, 45, 33, 88, 72, 16};

    int sort[20];
    int index = 0;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sort[index] = arr[i][j];
            index++;
        }
    }

    // Selection sort
    for (int i = 0; i < 19 ; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < 20; j++)
        {
            if (sort[j] < sort[minIndex])
            {
                minIndex = j;
            }
        }
        // swaps the value of the array
        swap(sort[i], sort[minIndex]);
    }

    cout << "Array sorted in increasing order: ";
    for (int i = 0; i < 20; i++)
    {
        cout << sort[i] << " ";
    }

    return 0;
}
