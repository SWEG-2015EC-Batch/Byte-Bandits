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

int main() {
    constexpr int nday = 30, nprod = 5, nwhouse = 4, maxrep = 5; 
    constexpr float bon_rate = 0.05;
    constexpr char jnt = '+', hln = '-', vln = '|';//table drawring characters
    int inventory[nday][nprod][nwhouse] {};
    string products[nprod] {"Mobile", "Computer", "Disk", "Charger", "Cable"}; //case insensitive
    string salesppl[nwhouse] {"Paulos", "Yonatan", "Zerubabel", "Robel"};//case insensitive
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
             << "5. Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 1: {
            int count = 0;
            char opt;
            do
            {
                int whouse = 0;
                string prod;
                int qty = 0;

                cout << "Enter data\n"; cin.clear();
                cout << "Warehouse (1-4): ";
                cin >> whouse; cin.clear();
                cout << "Product ("; for (auto prodct: products) cout<<prodct<<"/"; cout<<"): ";
                cin >> prod; cin.clear();
                int prindx = -1;
                for (int i = 0; i < nprod; ++i) {
                    if (! strncasecmp(products[i].c_str(), prod.c_str(), min(products[i].size(), prod.size())))
                    {
                        prindx = i;
                        break;
                    }
                }

                // not found
                if (prindx == -1) { cout<<"No Product found!"; break; }

                cout << "Quantity: ";
                cin >> qty; cin.clear();

                inventory[day][prindx][whouse - 1] = qty;
                ++count;
                if (count == maxrep)
                    break; // done with todays reports
                cout << "Done? (y/N): ";
                cin >> opt; cin.clear();
            } while (tolower(opt != 'y'));

            ++day;
            break;
        }
        case 2: {
            const int drow = 5, dcol = 4;
            int report[drow][dcol] = {};
            for (int i = 0; i < nday; ++i)
                for (int j = 0; j < nprod; ++j)
                    for (int k = 0; k < nwhouse; ++k)
                        report[j][k] += inventory[i][j][k];
            // print table
            int rows = 5, colmuns = 6, width = 10;
            cout << left;
            // output first line
            cout << "+";
            for (int k = 0; k < colmuns; ++k) {
                for (int j = 0; j < width; ++j) cout << "-";
                cout << "+";
            }
            cout << endl;
            // column markers
            cout << "|" << setw(width) << " " << "|";
            for (int i = 0; i < dcol; ++i) cout << setw(width) << salesppl[i] << "|";
            cout << setw(width) << "Total" << "|" << endl; // end of column markers
            //
            cout << "+";
            for (int k = 0; k < colmuns; ++k) {
                for (int j = 0; j < width; ++j) cout << "-";
                cout << "+";
            }
            cout << endl;
            //
            int ctots[dcol] = {}, ttot = {0};
            for (int i = 0; i < drow; ++i)
            {
                // row marker
                cout << "|" << setw(width) << products[i] << "|"; // end of row marker
                // actual data elements
                int rtot = 0;
                for (int j = 0; j < dcol; ++j) {
                    cout << setw(width) << report[i][j] << "|";
                    rtot += report[i][j];
                    ctots[j] = report[i][j];
                } // end of data elements
                //total at the end
                ttot += rtot;
                cout << setw(width) << rtot << "|" << endl;
                // line afterwards
                cout << "+";
                for (int k = 0; k < colmuns; ++k) {
                    for (int j = 0; j < width; ++j) cout << "-";
                    cout << "+";
                }
                cout << endl;
            }
            // bottom total
            cout << "|" << setw(width) << "Total" << "|";
            for (int i = 0; i < dcol; ++i) cout << setw(width) << ctots[i] << "|";
            cout << setw(width) << ttot << "|" << endl; /*total of total*/
            // line at the end
            cout << "+";
            for (int k = 0; k < colmuns; ++k) {
                for (int j = 0; j < width; ++j) cout << "-";
                cout << "+";
            }
            cout << endl;
            break;
        }
        case 3: {
            cout << "Search by:" << endl;
            cout << "1. Product" << endl;
            cout << "2. Salesperson" << endl;

            int searchOption;
            cin >> searchOption;
            switch (searchOption) {
                case 1:
                {
                    string productName;
                    cout << "Enter product name to search: ";
                    cin.ignore();
                    getline(cin, productName);
                    // Find index of product
                    int prodIndex;
                    for (int i = 0; i < nprod; i++) {
                    if (products[i] == productName) {
                            prodIndex = i;
                            break;
                        }
                    }
                    const int drow = 30, dcol = 4;
                    int rows = 30, colmuns = 6, width = 10;
                    cout << left;
                    // output first line
                    cout << "+";
                    for (int k = 0; k < colmuns; ++k) {
                        for (int j = 0; j < width; ++j) cout << "-";
                        cout << "+";
                    }
                    cout << endl;
                    // column markers
                    cout << "|" << setw(width) << " " << "|";
                    for (int i = 0; i < dcol; ++i) cout << setw(width) << salesppl[i] << "|";
                    cout << setw(width) << "Total" << "|" << endl;
                    //
                    cout << "+";
                    for (int k = 0; k < colmuns; ++k) {
                        for (int j = 0; j < width; ++j) cout << "-";
                        cout << "+";
                    }
                    cout << endl;
                    //
                    int ctots[dcol] = {}, ttot = {0};
                    for (int i = 0; i < drow; ++i) {
                        // row marker
                        cout << "|" << setw(width) << i + 1 << "|"; // end of row marker
                        // actual data elements
                        int rtot = 0;
                        for (int j = 0; j < dcol; ++j) {
                            cout << setw(width) << inventory[i][prodIndex][j] << "|";
                            rtot += inventory[i][prodIndex][j];
                            ctots[j] = inventory[i][prodIndex][j];
                        }
                        ttot += rtot;
                        cout << setw(width) << rtot << "|";
                        cout << endl; // end of data elements
                        // line afterwards
                        cout << "+";
                        for (int k = 0; k < colmuns; ++k) {
                            for (int j = 0; j < width; ++j) cout << "-";
                            cout << "+";
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
                    cin>>salesPn;
                    // Find index of salesperon
                    int prodIndex;
                    for (int i = 0; i < nprod; i++)
                    {
                        if (salesppl[i] == salesPn)
                        {
                            prodIndex = i;
                            break;
                        }
                    }
                    const int drow = 30, dcol = 5;
                    int rows = 30, colmuns = 7, width = 10;
                    cout << left;
                    // draw first line
                    cout << "+";
                    for (int k = 0; k < colmuns; ++k) {
                        for (int j = 0; j < width; ++j) cout << "-";
                        cout << "+";
                    }
                    cout << endl;
                    // column markers
                    cout << "|" << setw(width) << " " << "|";
                    for (int i = 0; i < dcol; ++i) cout << setw(width) << products[i] << "|";
                    cout << setw(width) << "Total" << "|" << endl;
                    //
                    cout << "+";
                    for (int k = 0; k < colmuns; ++k) {
                        for (int j = 0; j < width; ++j) cout << "-";
                        cout << "+";
                    }
                    cout << endl;
                    //
                    int ctots[dcol] = {}, ttot = {0};
                    for (int i = 0; i < drow; ++i) {
                        // row marker
                        cout << "|" << setw(width) << i + 1 << "|"; // end of row marker
                        // actual data elements
                        int rtot = 0;
                        for (int j = 0; j < dcol; ++j) {
                            cout << setw(width) << inventory[i][j][prodIndex] << "|";
                            rtot += inventory[i][j][prodIndex];
                        }
                        ttot += rtot;
                        cout << setw(width) << rtot << "|" << endl;
                        // end of data elements
                        // line afterwards
                        cout << "+";
                        for (int k = 0; k < colmuns; ++k) {
                            for (int j = 0; j < width; ++j) cout << "-";
                            cout << "+";
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
        case 4: {
            int total[nwhouse] = {};
            int bonus[nwhouse] = {};
            for (int i = 0; i < nday; ++i)
                for (int j = 0; j < nprod; ++j)
                    for (int k = 0; k < nwhouse; ++k)
                        total[k] += inventory[i][j][k];

            for (int i = 0; i < nwhouse; ++i)
                bonus[i] = total[i] * bon_rate;

            // make table
            int rows = 4, colmuns = 3, width = 10;
            cout << left;
            // output first line
            cout << jnt;
            for (int k = 0; k < colmuns; ++k) {
                for (int j = 0; j < width; ++j) cout << hln;
                cout << jnt;
            }
            cout << endl;
            // column markers
            cout << vln << setw(width) << "" << vln << setw(width) << "Total" << vln << setw(width) << "Bonus" << vln << endl; // end of column markers
            cout << jnt;
            for (int k = 0; k < colmuns; ++k) {
                for (int j = 0; j < width; ++j) cout << hln;
                cout << jnt;
            }
            cout << endl;
            for (int i = 0; i < rows; ++i) {
                // row marker
                cout << vln << setw(width) << salesppl[i] << vln; // end of row marker
                // actual data elements
                cout << setw(width) << total[i] << vln << setw(width) << bonus[i] << vln << endl; // end of data elements
                // line afterwards
                cout << jnt;
                for (int k = 0; k < colmuns; ++k) {
                    for (int j = 0; j < width; ++j) cout << hln;
                    cout << jnt;
                }
                cout << endl;
            }
            break;
        }
        case 5:
            return 0;

        default:
            cout << "Invalid option. Please choose a valid option." << endl;
            break;
        }
    }
}
