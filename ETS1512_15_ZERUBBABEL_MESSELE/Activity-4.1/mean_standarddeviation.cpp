
#include <iostream>
#include <cmath>

int main(){
    int n{0}; //number of items
    double number{0.0}, //new item
            nvariance{0.0}, // number of items times variance
            nmean{0.0}; // number of items times mean

    std::cout<<"Enter the list of numbers. Press ^D when done!\n";
    while(std::cin>>number){
        n++;
        nmean += number;
        nvariance += (n==1 ? 0.0 : n*pow((nmean/n)-number, 2.0)/(n-1));
    }

    std::cout << "Mean: " << (n==0 ? 0.0 : nmean/n) << "\n";
    std::cout << "Standard Deviation: " << (n==0 ? 0.0 : sqrt(nvariance/n))<< "\n";

    return 0;
}
