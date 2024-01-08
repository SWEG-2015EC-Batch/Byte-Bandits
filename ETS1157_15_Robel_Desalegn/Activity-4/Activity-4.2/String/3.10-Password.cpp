#include <iostream>
#include <cstring>

int main()
{
    const int MAX_LEN = 100;
    char pass[MAX_LEN] = "lkjhgfdsa@123";

    char input[MAX_LEN];

    std::cout << "Enter password: ";
    std::cin.getline(input, MAX_LEN);

    int trial = 3;

    while ((strcmp(input, pass) != 0) && trial > 1)
    {
        std::cout << "Incorrect password! Please re-enter " << trial - 1 << " chances remaining" << std::endl;
        std::cout << "Enter password: ";
        std::cin.getline(input, MAX_LEN);
        --trial;
    }

    if (strcmp(input, pass) == 0)
    {
        std::cout << "Correct Password!";
    }
    else
    {
        std::cout << "Out of chances. Quitting...." << std::endl;
    }

    return 0;
}
