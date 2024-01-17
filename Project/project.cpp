#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int inventory[30][5][4] {};
    string salesppl[4] {"Paulos", "Yonatan", "Zerubabel", "Robel"};
    string products[5] {"Mobile", "Computer", "Disk", "Charger", "Cable"};
    int day = 0;

    while (true) {
        int option;
        cout<<"What to do?"<<endl
            <<"1. Input Report"<<endl
            <<"2. Generate Report"<<endl
            <<"3. Search"<<endl
            <<"4. Calculate Bonus"<<endl
            <<"5. Exit"<<endl;
        cin>>option;
        switch (option) {
           case 1:
               break;
           case 2:
                 {
                    constexpr int drow = 5, dcol = 4;
                    int report[drow][dcol] {};
                    for (int i = 0; i<30; ++i)
                        for (int j = 0; j<5; ++j)
                            for (int k = 0; k<4; ++k)
                                report[j][k] += inventory[i][j][j];
                    // print table
                    int rows = 5, colmuns = 6;
                    int width = 10, length = colmuns*(width+1);
                    cout<<left;
                    //output first line
                    cout<<"+"; for (int k = 0; k<colmuns; ++k) { for (int j = 0; j<width; ++j) cout<<"-"; cout<<"+"; } cout<<endl;
                    // column markers
                    cout<<"|"<<setw(width)<<" "<<"|";
                    for (int i = 0; i<dcol; ++i) cout<<setw(width)<<salesppl[i]<<"|";
                    cout<<setw(width)<<"Total"<<"|"<<endl; //end of column markers
                    //
                    cout<<"+"; for (int k = 0; k<colmuns; ++k) { for (int j = 0; j<width; ++j) cout<<"-"; cout<<"+"; } cout<<endl;
                    //
                    int ctots[dcol] {}, ttot {};
                    for (int i = 0; i<drow; ++i) {
                        //row marker
                        cout<<"|"<<setw(width)<<products[i]<<"|"; //end of row marker
                        //actual data elements
                        int rtot = 0;
                        for (int j = 0; j<dcol; ++j) { 
                            cout<<setw(width)<<report[i][j]<<"|";
                            rtot += report[i][j];
                            ctots[j] = report[i][j];
                            ttot += rtot;
                        }
                        cout<<setw(width)<<rtot<<"|";
                        cout<<endl;//end of data elements
                        //line afterwards
                        cout<<"+"; for (int k = 0; k<colmuns; ++k) { for (int j = 0; j<width; ++j) cout<<"-"; cout<<"+"; } cout<<endl;
                    }
                    //bottom total
                    cout<<"|"<<setw(width)<<"Total"<<"|";
                    for (int i = 0; i<dcol; ++i) cout<<setw(width)<<ctots[i]<<"|"; 
                    /*total of total*/ cout<<setw(width)<<ttot<<"|"; cout<<endl;
                    // line at the end
                    cout<<"+"; for (int k = 0; k<colmuns; ++k) { for (int j = 0; j<width; ++j) cout<<"-"; cout<<"+"; } cout<<endl;
                    break;
                }
            case 3:
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
            case 4:
                break;

            case 5:
                return 0;

            default:
                cout << "Invalid option. Please choose a valid option." << endl;
                break;
        }
    }
}
