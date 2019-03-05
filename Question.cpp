/*************************************************************************************************************
CIS 22B
Lab 3: This program is a trivia game about state capitals. It creates an array using the Question class. It
       asks the user each trivia question with multiple choice answers numbered 1-4. The user picks an answer
       by entering a number. The program tells them if they were correct each time and reports the total at
       after all questions are answered.
Author: Vincent Nguyen
Date: 2/8/19
*************************************************************************************************************/

/*************************************************************************************************************
Question.cpp contains the implementation of each member of Question.h
*************************************************************************************************************/
#include "Question.h"

Question::Question(string x, string ans1, string ans2, string ans3,
                 string ans4, unsigned short int correct)
                 {
                     question = x;
                     answer1 = ans1;
                     answer2 = ans2;
                     answer3 = ans3;
                     answer4 = ans4;
                     correctAnswer = correct;
                 }

void Question::setQuestion(string x)
{
    question = x;
}

void Question::setAnswer1(string ans)
{
    answer1 = ans;
}

void Question::setAnswer2(string ans)
{
    answer2 = ans;
}

void Question::setAnswer3(string ans)
{
    answer3 = ans;
}

void Question::setAnswer4(string ans)
{
    answer4 = ans;
}

void Question::setCorrect(unsigned short int correct)
{
    correctAnswer = correct;
}

string Question::getQuestion()
{
    return question;
}

string Question::getAnswer1()
{
    return answer1;
}

string Question::getAnswer2()
{
    return answer2;
}

string Question::getAnswer3()
{
    return answer3;
}

string Question::getAnswer4()
{
    return answer4;
}

unsigned short int Question::getCorrectAnswer()
{
    return correctAnswer;
}



