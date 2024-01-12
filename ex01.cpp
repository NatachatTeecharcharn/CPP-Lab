/*
ID: 66011078
Name: Natachat Teecharcharn
Lab No: 5
Question No: 1
Date: 12th January 2024
*/

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<int> studentId;
    vector<int> studentScore;
    vector<string> studentGrade;
    int id;
    int score;
    string grade;

    while (true)
    {
        cout << "Enter student Id (end with 0 or negative): ";
        cin >> id;
        if (id <= 0)
            break;
        studentId.push_back(id);

        cout << "Enter student score: ";
        cin >> score;
        studentScore.push_back(score);

        if (score >= 90) grade = "A";
        if (score >= 85) grade = "B";
        if (score >= 80) grade = "B+";
        if (score >= 75) grade = "C";
        if (score >= 70) grade = "C+";
        if (score >= 65) grade = "D";
        if (score >= 60) grade = "D+";
        else grade = "F";
        studentGrade.push_back(grade);
    }

    if (studentId.size() > 0)
    {
        cout << "Student ID\tStudent Score\tStudent Grade" << endl;
        for (int i = 0; i < studentId.size(); i++)
            cout << studentId[i] << "\t\t" << studentScore[i] << "\t\t" << studentGrade[i] << endl;
    }

    return 0;
}
