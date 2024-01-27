/*
 *Inventory management system
 *
 * This code is part of project for semester end.
 *
 *Byte Bandits, 2024.
 */

#include <cctype>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
    const int nday = 30, nprod = 5, nwhouse = 4;
    const float bon_rate = 0.05;
    const char jnt = '+', hln = '-', vln = '|'; // table drawing characters
    int inventory[nday][nprod][nwhouse] = {};
    string products[nprod]{"Mobile", "Computer", "Disk", "Charger", "Cable"}; // case insensitive
    string salesppl[nwhouse]{"Paulos", "Yonatan", "Zerubabbel", "Robel"};      // case insensitive
    int day = 0;

    string welcomeMessage = "I N V E N T O R Y     M A N A G E M E N T     S Y S T E M";

    cout << "\v\v";
    cout << setw(40) << " ";
    cout << "<==============================================================>\n";
    cout << setw(40) << " ";
    cout << "*   " << welcomeMessage << "  *\n";
    cout << setw(40) << " ";
    cout << "<==============================================================>\n\v";
    cout << endl;

    cout << setw(60)<<" "<<"<========================>\n"
         << setw(60)<<" "<<right << setw(18) << "WELCOME!"
         << "\n"<<setw(60)<<" "<<"<========================>";
    cout<<"\n\n";
    while (true)
    {
        int option;
        cout << "\nWhat to do?" << endl
             << "1. Input Report" <<" (Day "<<(day%30)+1<<")"<< endl
             << "2. Generate Report" << endl
             << "3. Search" << endl
             << "4. Display Information" << endl 
             << "5. Exit" << endl;
        cin >> option;
        switch (option)
        {
        case 1:
        {
            if (day >= nday) {
                cout << "Maximum days reached! Resetting data for a new cycle.\n";
                day = 0;
            }
            cout << "Enter Reports. (Hit ENTER to skip any empty fields!)\n";
            char opt;
            do
            {
                cout << "Day " << day + 1 << endl;

                // somehow getline reads newline character from inputline
                // the following clears it.
                string throwaway;
                getline(cin, throwaway, '\n');
                for (int i = 0; i<nwhouse; ++i){
                    string ch;
                    cout<<"Warehouse "<<i+1<<"? (y/N): ";
                    cin.clear();
                    getline(cin, ch, '\n');

                    if (ch.empty() || tolower(ch[0]) != 'y') continue;

                    for (int j = 0; j<nprod; ++j) {
                        string prodq;
                    ReRead:
                        cout << products[j]<<": ";
                        getline(cin, prodq, '\n');
                        if(prodq.empty()) continue;
                        for (int i = 0; i < prodq.length(); i++){
                        while (isalpha(prodq[i])) {
                            cout << "\n\033[1;31mInvalid input! Please enter a number!\033[0m\n" << std::endl; 
                            cout << products[j]<<": ";
                            getline(cin, prodq, '\n');
                            break;
                        }
                        }
                        int qty = atoi(prodq.c_str());
                        if (qty < 0 ) {
                            cout << "\n\033[1;31mInvalid quantity! Please enter a positive number!\033[0m\n\n";
                            goto ReRead;
                        }
                        inventory[day][j][i] = qty;
                    }
                }
                ++day;
                cout << "\nDone for the day! Continue? (Y/N): ";
                cin >> opt;
                cin.clear();
                if (day == nday) { cout<<"All done!"; break; }// done this month's reports
            } while (tolower(opt) == 'y');

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

            cout << setw(20)<<" "<<"========================\n"
                << setw(20)<<" "<<right << setw(15) << "Report"<<"\n"
                << setw(20)<<" "<<"========================\n\n";

            cout<<"Total Days: "<<day<<"\n\n";
            // print table
            int colmuns = 6, width = 10;
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
            int ctot[dcol] = {}, ttot = {0};
            for (int i = 0; i < drow; ++i) {
                // row marker
                cout << vln << setw(width) << products[i] << vln; // end of row marker
                // actual data elements
                int rtot = 0;
                for (int j = 0; j < dcol; ++j)
                {
                    cout << setw(width) << report[i][j] << vln;
                    rtot += report[i][j];
                    ctot[j] += report[i][j];
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
                cout << setw(width) << ctot[i] << vln;
            cout << setw(width) << ttot << vln << endl; /*total of total*/
            // line at the end
            cout << jnt;
            for (int k = 0; k < colmuns; ++k) {
                for (int j = 0; j < width; ++j)
                    cout << hln;
                cout << jnt;
            }
             // display bonuses
            cout << endl;
            cout << vln << setw(width) << "Bonus" << vln;
            for (int i = 0; i < dcol; ++i)
                cout << setw(width) << ctot[i] * bon_rate << vln;
            cout << setw(width) << ttot * bon_rate << vln << endl; /*total bonus */
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
        SearchChoice:
            cout << "Search by:" << endl;
            cout << "1. Product" << endl;
            cout << "2. Salesperson" << endl;
            cout << "3. Back to Menu" << endl;

            int searchOption;
            cin >> searchOption;
            if (searchOption == 3) break; // Exit by choice
            switch (searchOption) { 
                case 1: 
                { string productName; cout << "Enter product name to search: "; cin.clear(); cin >> productName;
                int prodIndex = -1;
                for (int i = 0; i < nprod; ++i) {
                    if (!strncasecmp(products[i].c_str(), productName.c_str(), min(products[i].size(), productName.size())))
                    {
                        prodIndex = i;
                        break;
                    }
                }
                if (prodIndex == -1) {
                    cout << "\n\033[1;31mNo product found!\033[0m\n\n";
                    goto SearchChoice;
                }

                const int drow = nday, dcol = nwhouse;
                int colmuns = dcol + 2, width = 10;
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
                    cout << "\n\033[1;31mNo salesperson found!\033[0m\n\n";
                    goto SearchChoice;
                }

                const int drow = nday, dcol = nprod;
                int colmuns = dcol + 2, width = 10;
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
                int ttot = {0};
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
                    cout << setw(width) << rtot << vln << endl; // end of data elements
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
                cout << "\n\033[1;31mInvalid option!\033[0m\n\n";
                goto SearchChoice;
            }
            break;
        }
       case 4:
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
        case 5:
            return 0;

        default:
            cout << "" << endl;
            cout << "\n\033[1;31mInvalid option. Please choose a valid option!\033[0m\n";
            break;
        }
    }
}
