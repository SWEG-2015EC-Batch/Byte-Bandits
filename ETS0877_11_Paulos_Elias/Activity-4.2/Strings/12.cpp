#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string trial, ans {"ABCDABCDAB"};

    cout<<"Enter your answers: ";
    cin>>trial;

    int score = 0;
    for (int i = 0; i<10; ++i) {
        cout<<i+1<<" "<<trial[i]<<" ";
        if (toupper(trial[i]) == ans[i]) {
            cout<<"Correct!\n";
            ++score;
        }
        else
            cout<<"Incorrect! The correct answer: "<<ans[i]<<"\n";
    }
    cout<<"\nScore: "<<score;
    return 0;
}

