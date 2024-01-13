// Design answer sheet for 10 questions and print test score
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char answerKey[10] = {'A', 'B', 'C', 'D', 'A', 'B', 'C', 'D', 'A', 'B'};
    char answer[10];
    int score = 0;

    cout << " Use only capital letters for your answers!!" << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cout << " Enter your answer for question " << i + 1 << " : ";
        cin >> answer[i];
    }

    for (size_t i = 0; i < 10; i++)
    {
        if (answer[i] == answerKey[i])
        {
            score++;
        }
    }

    cout << " Your total score is: " << score;
}