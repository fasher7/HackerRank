#include <iostream>
using namespace std;

int gradingStudent(int grade)
{
    if (grade < 38)
    {
        return grade;
    }

    int check = grade / 5;
    int round = (check+1) * 5;

    if ((round - grade) < 3)
    {
        return round;
    }
    else
        return grade;
}

int main()
{
    int students;
    int grade;
    cin >> students;
    for (int i = 0; i < students; ++i)
    {
        cin >> grade;
        cout << gradingStudent(grade);
        cout << endl;
    }

    return 0;
}