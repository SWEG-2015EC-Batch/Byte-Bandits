/*
 *Inventory management system
 *
 * This code is part of project for semester end.
 *
 *Byte Bandits, 2024.
 */

#include <iostream>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <cctype>

using namespace std;

int main()
{
    const int nday = 30, nprod = 5, nwhouse = 4, maxrep = 5;
    const float bon_rate = 0.05;
    const char jnt = '+', hln = '-', vln = '|'; // table drawring characters
    int inventory[nday][nprod][nwhouse] = {};
    string products[nprod]{"Mobile", "Computer", "Disk", "Charger", "Cable"}; // case insensitive
    string salesppl[nwhouse]{"Paulos", "Yonatan", "Zerubabel", "Robel"};      // case insensitive
    int day = 0;

    cout << "========================\n"
         << right << setw(15) << "WELCOME!"
         << "\n========================\n\n";
    while (true)
    {
        int option;
        cout << "\nWhat to do?" << endl
             << "1. Input Report" << endl
             << "2. Generate Report" << endl
             << "3. Search" << endl
             << "4. Calculate Bonus" << endl
             << "5. Display Information" << endl // New option to display information
             << "6. Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
        {
            int count = 0;
            char opt;
            do
            {
                if (day >= nday)
                {
                    cout << "Maximum days reached! Resetting data for a new cycle.\n";
                    day = 0;
                }
                int whouse = 0;
                string prod;
                int qty = 0;

                cout << "Enter data\n";
                cin.clear();
                cout << "Day " << day + 1 << endl;
                cout << "Warehouse (1-4): ";
                cin >> whouse;
                cin.clear();
            goHere:
                cout << "Product (";
                for (auto prodct : products)
                    cout << prodct << "/";
                cout << "): ";
                cin >> prod;
                cin.clear();
                int prindx = -1;
                for (int i = 0; i < nprod; ++i)
                {
                    if (!strncasecmp(products[i].c_str(), prod.c_str(), min(products[i].size(), prod.size())))
                    {
                        prindx = i;
                        break;
                    }
                }

                // not found
                if (prindx == -1)
                {
                    cout << "\n\033[1;31mNo product found! Please choose valid product name!\033[0m\n";
                    goto goHere;
                }

                cout << "Quantity: ";
                cin >> qty;
                cin.clear();

                inventory[day][prindx][whouse - 1] = qty;
                ++count;
                if (count == maxrep)
                    break; // done with todays reports
                cout << "Done? (y/N): ";
                cin >> opt;
                cin.clear();
            } while (tolower(opt != 'y'));

            ++day;
            break;
        }
        case 2:
        {
            const int drow = nprod, dcol = nwhouse;
            int report[drow][dcol] = {};
            for (int i = 0; i < nday; ++i)
                for (int j = 0; j < nprod; ++j)
                    for (int k = 0; k < nwhouse; ++k)
                        report[j][k] += inventory[i][j][k];
            // print table
            int rows = 5, colmuns = 6, width = 10;
            cout << left;
            // output first line
            cout << jnt;
            for (int k = 0; k < colmuns; ++k)
            {
                for (int j = 0; j < width; ++j)
                    cout << hln;
                cout << jnt;
            }
            cout << endl;
            // column markers
            cout << vln << setw(width) << " " << vln;
            for (int i = 0; i < dcol; ++i)
                cout << setw(width) << salesppl[i] << vln;
            cout << setw(width) << "Total" << vln << endl; // end of column markers
            //
            cout << jnt;
            for (int k = 0; k < colmuns; ++k) {
                for (int j = 0; j < width; ++j)
                    cout << hln;
                cout << jnt;
            }
            cout << endl;
            //
            int ctots[dcol] = {}, ttot = {0};
            for (int i = 0; i < drow; ++i) {
                // row marker
                cout << vln << setw(width) << products[i] << vln; // end of row marker
                // actual data elements
                int rtot = 0;
                for (int j = 0; j < dcol; ++j)
                {
                    cout << setw(width) << report[i][j] << vln;
                    rtot += report[i][j];
                    ctots[j] += report[i][j];
                } // end of data elements
                // total at the end
                ttot += rtot;
                cout << setw(width) << rtot << vln << endl;
                // line afterwards
                cout << jnt;
                for (int k = 0; k < colmuns; ++k) {
                    for (int j = 0; j < width; ++j)
                        cout << hln;
                    cout << jnt;
                }
                cout << endl;
            }
            // bottom total
            cout << vln << setw(width) << "Total" << vln;
            for (int i = 0; i < dcol; ++i)
                cout << setw(width) << ctots[i] << vln;
            cout << setw(width) << ttot << vln << endl; /*total of total*/
            // line at the end
            cout << jnt;
            for (int k = 0; k < colmuns; ++k) {
                for (int j = 0; j < width; ++j)
                    cout << hln;
                cout << jnt;
            }
            cout << endl;
            break;
        }
        case 3:
        {
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
                cin.clear();
                cin >> productName;
                int prodIndex = -1;
                for (int i = 0; i < nprod; ++i) {
                    if (!strncasecmp(products[i].c_str(), productName.c_str(), min(products[i].size(), productName.size())))
                    {
                        prodIndex = i;
                        break;
                    }
                }
                if (prodIndex == -1) {
                    cout << "\n\033[1;31mNo product found!\033[0m\n";
                    break;
                }

                const int drow = nday, dcol = nwhouse;
                int rows = drow, colmuns = dcol + 2, width = 10;
                cout << left;
                // output first line
                cout << jnt;
                for (int k = 0; k < colmuns; ++k) {
                    for (int j = 0; j < width; ++j)
                        cout << hln;
                    cout << jnt;
                }
                cout << endl;
                // column markers
                cout << vln << setw(width) << " " << vln;
                for (int i = 0; i < dcol; ++i)
                    cout << setw(width) << salesppl[i] << vln;
                cout << setw(width) << "Total" << vln << endl;
                //
                cout << jnt;
                for (int k = 0; k < colmuns; ++k)
                {
                    for (int j = 0; j < width; ++j)
                        cout << hln;
                    cout << jnt;
                }
                cout << endl;
                //
                int ttot = {0};
                for (int i = 0; i < drow; ++i)
                {
                    // row marker
                    cout << vln << setw(width) << i + 1 << vln; // end of row marker
                    // actual data elements
                    int rtot = 0;
                    for (int j = 0; j < dcol; ++j)
                    {
                        cout << setw(width) << inventory[i][prodIndex][j] << vln;
                        rtot += inventory[i][prodIndex][j];
                    }
                    ttot += rtot;
                    cout << setw(width) << rtot << vln;
                    cout << endl; // end of data elements
                    // line afterwards
                    cout << jnt;
                    for (int k = 0; k < colmuns; ++k)
                    {
                        for (int j = 0; j < width; ++j)
                            cout << hln;
                        cout << jnt;
                    }
                    cout << endl;
                }
                break;
            }
            case 2:
            {
                string salesPn;
                cout << "Enter Salesperson name to search: ";
                cin.clear();
                cin >> salesPn;
                // Find index of salesperon
                int prodIndex = -1;
                for (int i = 0; i < nwhouse; ++i)
                {
                    if (!strncasecmp(salesppl[i].c_str(), salesPn.c_str(), min(salesppl[i].size(), salesPn.size())))
                    {
                        prodIndex = i;
                        break;
                    }
                }
                if (prodIndex == -1)
                {
                    cout << "\n\033[1;31mNo salesperson found!\033[0m\n";
                    break;
                }

                const int drow = nday, dcol = nprod;
                int rows = drow, colmuns = dcol + 2, width = 10;
                cout << left;
                // draw first line
                cout << jnt;
                for (int k = 0; k < colmuns; ++k)
                {
                    for (int j = 0; j < width; ++j)
                        cout << hln;
                    cout << jnt;
                }
                cout << endl;
                // column markers
                cout << vln << setw(width) << " " << vln;
                for (int i = 0; i < dcol; ++i)
                    cout << setw(width) << products[i] << vln;
                cout << setw(width) << "Total" << vln << endl;
                //
                cout << jnt;
                for (int k = 0; k < colmuns; ++k)
                {
                    for (int j = 0; j < width; ++j)
                        cout << hln;
                    cout << jnt;
                }
                cout << endl;
                //
                int ctots[dcol] = {}, ttot = {0};
                for (int i = 0; i < drow; ++i)
                {
                    // row marker
                    cout << vln << setw(width) << i + 1 << vln; // end of row marker
                    // actual data elements
                    int rtot = 0;
                    for (int j = 0; j < dcol; ++j)
                    {
                        cout << setw(width) << inventory[i][j][prodIndex] << vln;
                        rtot += inventory[i][j][prodIndex];
                    }
                    ttot += rtot;
                    cout << setw(width) << rtot << vln << endl;
                    // end of data elements
                    // line afterwards
                    cout << jnt;
                    for (int k = 0; k < colmuns; ++k)
                    {
                        for (int j = 0; j < width; ++j)
                            cout << hln;
                        cout << jnt;
                    }
                    cout << endl;
                }
                break;
            }
            default:
                std::cout << "Invalid option!";
                break;
            }
            break;
        }
        case 4:
        {
            int total[nwhouse] = {};
            float bonus[nwhouse] = {};
            for (int i = 0; i < nday; ++i)
                for (int j = 0; j < nprod; ++j)
                    for (int k = 0; k < nwhouse; ++k)
                        total[k] += inventory[i][j][k];

            for (int i = 0; i < nwhouse; ++i)
                bonus[i] = total[i] * bon_rate;

            // make table
            int rows = nwhouse, colmuns = 3, width = 10;
            cout << left;
            // output first line
            cout << jnt;
            for (int k = 0; k < colmuns; ++k)
            {
                for (int j = 0; j < width; ++j)
                    cout << hln;
                cout << jnt;
            }
            cout << endl;
            // column markers
            cout << vln << setw(width) << "" << vln << setw(width) << "Total" << vln << setw(width) << "Bonus" << vln << endl; // end of column markers
            cout << jnt;
            for (int k = 0; k < colmuns; ++k)
            {
                for (int j = 0; j < width; ++j)
                    cout << hln;
                cout << jnt;
            }
            cout << endl;
            for (int i = 0; i < rows; ++i)
            {
                // row marker
                cout << vln << setw(width) << salesppl[i] << vln; // end of row marker
                // actual data elements
                cout << setw(width) << total[i] << vln << setw(width) << bonus[i] << vln << endl; // end of data elements
                // line afterwards
                cout << jnt;
                for (int k = 0; k < colmuns; ++k)
                {
                    for (int j = 0; j < width; ++j)
                        cout << hln;
                    cout << jnt;
                }
                cout << endl;
            }
            break;
        }
        case 5:
        { // Option to display information
            cout << "\nCurrent Information:\n";
            cout << "---------------------\n";
            cout << "Day: " << day + 1 << "\n";
            cout << "Products: ";
            for (const auto &prod : products)
                cout << prod << " ";
            cout << "\nSalespersons: ";
            for (const auto &person : salesppl)
                cout << person << " ";
            cout << "\n---------------------\n";
            break;
        }
        case 6:
            return 0;

        default:
            cout << "Invalid option. Please choose a valid option." << endl;
            break;
        }
    }
}
