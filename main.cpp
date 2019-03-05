/*************************************************************************************************************
CIS 22B
Lab 3: This program is a trivia game about state capitals. It creates an array using the Question class. It
       asks the user each trivia question with multiple choice answers numbered 1-4. The user picks an answer
       by entering a number. The program tells them if they were correct each time and reports the total at
       after all questions are answered.
Author: Vincent Nguyen
Date: 2/8/19
*************************************************************************************************************/
#include <iostream>
#include "Question.h"

using namespace std;

/*************************************************************************************************************
The main function creates the array of objects for each question, displays the questions, takes in answers
from the user, displays correct answers, and reports the number of correct answers at the end.
The variable "input" holds the user's answer for each question.
*************************************************************************************************************/
int main()
{
    unsigned short int input;
    int correctCount = 0;

    Question triviaQuestion[10] = {Question("What is the capital of Delaware?", "Harrisburg", "Atlanta", "Dover", "Richmond", 3),
                                   Question("What is the capital of Michigan?", "Lansing", "Jackson", "Little Rock", "Harrisburg", 1),
                                   Question("What is the capital of North Carolina?", "Montpelier", "Frankfort", "Richmond", "Raleigh",4),
                                   Question("What is the capital of Nevada?", "Phoenix", "Carson City", "Salt Lake City", "Topeka", 2),
                                   Question("What is the capital of New Hampshire?", "Providence", "Concord", "Montpelier", "Jackson", 2),
                                   Question("What is the capital of Virginia?", "Richmond", "Nashville", "Raleigh", "Trenton", 1),
                                   Question("What is the capital of Alabama?", "Austin", "Lansing", "Montgomery", "Madison", 3),
                                   Question("What is the capital of Florida?", "Hartford", "Frankfort", "Springfield", "Tallahassee", 4),
                                   Question("What is the capital of Maine?", "Frankfort", "Little Rock", "Austin", "Augusta", 4),
                                   Question("What is the capital of California?", "Providence", "New York City", "Sacramento", "China", 3) };

    cout << "Welcome to the Capital Trivia Game! You will be quizzed on the capitals of 10 states! \nPlease only type the number to enter your answer. Here is the first question:\n\n";

    for(int i = 0; i < 10; i++)
    {
        cout << triviaQuestion[i].getQuestion() << endl;
        cout << "1. " << triviaQuestion[i].getAnswer1() << endl;
        cout << "2. " << triviaQuestion[i].getAnswer2() << endl;
        cout << "3. " << triviaQuestion[i].getAnswer3() << endl;
        cout << "4. " << triviaQuestion[i].getAnswer4() << endl;

        cout << "Enter a number: ";
        cin >> input;
        while (input != 1 && input!= 2 && input!= 3 && input!= 4)
        {
            cout << "Please enter 1,2,3, or 4." << endl;
            cout << "Enter a number: ";
            cin >> input;
        }

        if (input == triviaQuestion[i].getCorrectAnswer())
        {
            cout << "Correct!\n\n";
            correctCount++;
        }

        else
        {
            cout << "Wrong, the correct answer is ";
            switch (triviaQuestion[i].getCorrectAnswer())
            {
                case 1:
                    cout << triviaQuestion[i].getAnswer1()<< ".\n\n";
                    break;
                case 2:
                    cout << triviaQuestion[i].getAnswer2()<< ".\n\n";
                    break;
                case 3:
                    cout << triviaQuestion[i].getAnswer3()<< ".\n\n";
                    break;
                case 4:
                    cout << triviaQuestion[i].getAnswer4() << ".\n\n";
                    break;
            }
        }

    }

    cout << "You've completed all the questions. You got " << correctCount << " out of 10 questions correct!\n";
}

/**Sample output:
    Welcome to the Capital Trivia Game! You will be quizzed on the capitals of 10 states!
Please only type the number to enter your answer. Here is the first question:

What is the capital of Delaware?
1. Harrisburg
2. Atlanta
3. Dover
4. Richmond
Enter a number: 4
Wrong, the correct answer is Dover.

What is the capital of Michigan?
1. Lansing
2. Jackson
3. Little Rock
4. Harrisburg
Enter a number: 1
Correct!

What is the capital of North Carolina?
1. Montpelier
2. Frankfort
3. Richmond
4. Raleigh
Enter a number: 3
Wrong, the correct answer is Raleigh.

What is the capital of Nevada?
1. Phoenix
2. Carson City
3. Salt Lake City
4. Topeka
Enter a number: 3
Wrong, the correct answer is Carson City.

What is the capital of New Hampshire?
1. Providence
2. Concord
3. Montpelier
4. Jackson
Enter a number: 2
Correct!

What is the capital of Virginia?
1. Richmond
2. Nashville
3. Raleigh
4. Trenton
Enter a number: 4
Wrong, the correct answer is Richmond.

What is the capital of Alabama?
1. Austin
2. Lansing
3. Montgomery
4. Madison
Enter a number: 1
Wrong, the correct answer is Montgomery.

What is the capital of Florida?
1. Hartford
2. Frankfort
3. Springfield
4. Tallahassee
Enter a number: 3
Wrong, the correct answer is Tallahassee.

What is the capital of Maine?
1. Frankfort
2. Little Rock
3. Austin
4. Augusta
Enter a number: 4
Correct!

What is the capital of California?
1. Providence
2. New York City
3. Sacramento
4. China
Enter a number: 4
Wrong, the correct answer is Sacramento.

You've completed all the questions. You got 3 out of 10 questions correct!

Process returned 0 (0x0)   execution time : 9.452 s
Press any key to continue.
***/
