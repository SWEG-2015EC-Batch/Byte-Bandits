/*
 *Inventory management system
 *
 * This code is part of project for semester end.
 *
 *Byte Bandits, 2024.
 */

#include <iostream>

using namespace std;

int main() {
    int inventory[30][5][4] {};
    string salesppl[4] {"Paulos", "Yonatan", "Zerubabel", "Robel"};
    string products[5] {"Mobile", "Computer", "Disk", "Charger", "Cable"};
    int day = 0;

    while (true) { int option; cin>>option;
        cout<<"What to do?"<<endl
            <<"1. Input Report"<<endl
            <<"2. Generate Report"<<endl
            <<"3. Search"<<endl
            <<"4. Calculate Bonus"<<endl
            <<"4. Exit"<<endl;
        switch (option) {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                return 0;
        }
    }
}
