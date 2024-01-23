#include <iostream>

int main() {
    // 1D array
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};

    std::cout << "Addresses of elements in balance array:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i << ": " << static_cast<void*>(&balance[i]) << std::endl;
    }

    double *ptr_balance = balance;

    std::cout << "\nArray elements of balance using pointer:\n";
    for (int i = 0; i < 5; i++) {
        std::cout << "Element " << i << ": " << *(ptr_balance + i) << std::endl;
    }

    // 2D array
    int arr[3][4] = { { 10, 11, 12, 13 }, { 20, 21, 22, 23 }, { 30, 31, 32, 33 }};

    std::cout << "\nAddresses of elements in arr array:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Element [" << i << "][" << j << "]: " << static_cast<void*>(&arr[i][j]) << std::endl;
        }
    }

    int *ptr_arr = &arr[0][0];

    std::cout << "\nArray elements of arr using pointer:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << "Element [" << i << "][" << j << "]: " << *(ptr_arr + i * 4 + j) << std::endl;
        }
    }

    return 0;
}
