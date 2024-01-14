// This program takes a list of names from the user and sorts them in alphabetical order
// by Robiel

#include <iostream>
#include <string>

int main()
{

    const int MAX_NAMES = 20;
    std::string names[MAX_NAMES];
    int numNames = 0;
    std::cout << "Enter names (type 'end' to finish):\n";

    while (numNames < MAX_NAMES)
    {
        getline(std::cin, names[numNames]);
        if (names[numNames] == "end")
        {
            break;
        }
        numNames++;
    }

    for (int i = 0; i < numNames - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < numNames; j++)
        {
            if (strcmp(names[j].c_str(), names[minIndex].c_str()) < 0)
            {
                minIndex = j;
            }
        }
        std::string temp = names[i];
        names[i] = names[minIndex];
        names[minIndex] = temp;
    }

    std::cout << "\nSorted Names:\n";
    for (int i = 0; i < numNames; i++)
    {
        std::cout << names[i] << "\n";
    }

    return 0;
}