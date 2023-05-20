#include <iostream>
#include <string>
using namespace std;

bool leapCheck1(int year)
{
    if (year % 4 == 0)
    {
        return true;
    }
    return false;
}

bool leapCheck2(int year)
{
    if (year % 4 == 0 && year % 100 != 0)
    {
        return true;
    }
    else if (year % 4 == 0 && year % 100 == 0)
    {
        if (year % 400 == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    return false;
}

void dayPrinter(int year, bool leap)
{
    int sum = 0;
    
    if (year == 1918)
    {
        sum = 31 + 15 + 31 + 30 + 31 + 30 + 31 + 31;
        sum = 256 - sum;
        cout << to_string(sum) << ".09." << to_string(year);
    }
    else
    {
        if (leap == true)
        {
            sum = 31 + 29 + 31 + 30 + 31 + 30 + 31 + 31;
            sum = 256 - sum;
            cout << to_string(sum) << ".09." << to_string(year);
        }
        else
        {
            sum = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            sum = 256 - sum;
            cout << to_string(sum) << ".09." << to_string(year);
        }
    }
}

void theYear(int year)
{
    bool leap;

    if (year >= 1700 && year <= 1918)
    {
        leap = leapCheck1(year);
    }
    else
    {
        leap = leapCheck2(year);
    }

    dayPrinter(year, leap);
}

int main()
{
    int year;
    cin >> year;

    theYear(year);

    return 0;
}