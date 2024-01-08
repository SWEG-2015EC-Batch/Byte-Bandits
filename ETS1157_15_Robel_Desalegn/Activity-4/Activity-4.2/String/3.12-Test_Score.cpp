/* This program marks the answers of a students from an answer sheet
and prints out the test score along with the marked answer */
// by Robeil

#include <iostream>

int main()
{

    char answers[10] = {'B', 'C', 'B', 'B', 'D', 'A', 'D', 'C', 'A', 'D'};
    char studentAnswers[10];

    std::cout << "Enter your answers (A/B/C/D): ";

    for (int i = 0; i < 10; i++)
    {
        std::cin >> studentAnswers[i];
        studentAnswers[i] = toupper(studentAnswers[i]);
    }

    int score = 0;
    for (int i = 0; i < 10; i++)
    {
        if (answers[i] ==studentAnswers[i])
        {
            score++;
        }
    }

    // Print results
    std::cout << "Your score is: " << score << "/10" << std::endl;

    std::cout << "Your answers: ";
    for (int i = 0; i < 10; i++)
    {
        std::cout << studentAnswers[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}