#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int inventory[4][5] = {}; // 4 warehouses, 5 products
    string salesppl[4] = {"Paulos", "Yonatan", "Zerubabel", "Robel"};
    string products[5] = {"Mobile", "Computer", "Disk", "Charger", "Cable"};
    int day = 0;

    while (true)
    {
        int option;
        cout << "What to do?" << endl
             << "1. Input Report" << endl
             << "2. Generate Report" << endl
             << "3. Search" << endl
             << "4. Calculate Bonus" << endl
             << "5. Exit" << endl;

        cin >> option;

        switch (option)
        {
        case 1:
            break;

        case 2:
            break;

        case 3:
            cout << "Search by:" << endl;
            cout << "1. Product" << endl;
            cout << "2. Salesperson" << endl;

            int searchOption;
            cin >> searchOption;

            switch (searchOption)
            {
            case 1:
            {
                string productName;
                cout << "Enter product name to search: ";
                getline(cin, productName);
                for (int i = 0; i < 5; ++i)
                {

                    if (productName == products[1])
                    {
                       cout << "They are the same";
                    }
                }

                break;
            }
            case 2:
                break;
            }

        case 4:
            break;

        case 5:
            return 0;

        default:
            cout << "Invalid option. Please choose a valid option." << endl;
            break;
        }
    }

    return 0;
}
