#include <iostream>
using namespace std;

int solveMeFirst(int a, int b)
{
    int total;
    total = a + b;
    return total;
}

int main()
{
    int num1, num2;
    int sum;
    cin >> num1 >> num2;
    sum = solveMeFirst(num1, num2);
    cout << sum;
    
    return 0;
}
