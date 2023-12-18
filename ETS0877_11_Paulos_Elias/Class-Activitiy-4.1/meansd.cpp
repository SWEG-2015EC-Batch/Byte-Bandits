#include <iostream>
#include <cmath>

int main(){
    int n{0}; //number of items
    double number{0.0}, //new item
            nvariance{0.0}, // number of numbers times variance
            nmean{0.0}; // number of numbers times mean

    std::cout<<"Enter the list of numbers. Press ^D when done!" << std::endl;
    while(std::cin>>number){
        n++;
        nmean += number;
        nvariance += (n==1 ? 0.0 : n*pow((nmean/n)-number, 2.0)/(n-1));
        //nvariance += 2*pow((n==0 ? 0.0 : nmean/n)-number, 2.0);
        //std::cout << "n: " << n << "\nmean: " << nmean/n << "\nsd: " << sqrt(nvariance/n) << "\n";
    }

    std::cout << "Mean: " << (n==0 ? 0.0 : nmean/n) << std::endl;
    std::cout << "Standard Deviation: " << (n==0 ? 0.0 : sqrt(nvariance/n))<< std::endl;

    return 0;
}
