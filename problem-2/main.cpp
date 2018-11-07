#include <iostream>
#include "main.h"

using namespace std;

string getGrade(int score)
{
    string grade;

    if(score > 100 || score < 0) {
       grade = "not valid";
    } else if (score >= 85) {
        grade = "excellent";
    }
    else if(score >= 75) {
        grade ="very good";
    } else if(score >= 65) {
        grade = "good";
    } else if(score >=50) {
        grade = "pass";
    } else {
        grade = "fail";
    }

    return grade;
}