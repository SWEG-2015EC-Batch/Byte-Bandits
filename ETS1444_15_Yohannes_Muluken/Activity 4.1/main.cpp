// calculating mean and standard deviation
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n, sum = 0, sumOfSquares = 0;
    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        sum += num;
        sumOfSquares += (num * num);
    }

    /* standard deviation can be calculated by taking the deviation of 
        square of mean from average of squared sum of each numbers 
    */ 
    double mean = sum / n;
    double standardDeviation = sqrt((sumOfSquares / n) - (mean * mean));

    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << standardDeviation << endl;

    return 0;
}
