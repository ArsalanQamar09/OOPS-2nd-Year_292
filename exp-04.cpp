#include <iostream>
using namespace std;
inline int square(int n)
{
    return n * n; }
inline int add(int a, int b)
{
    return a + b;
}
int subtract(int a, int b = 10)
{
    return a - b;
}
int multiply(int a, int b)
{
    return a * b;
}

float multiply(double a, double b)
{
    return a * b;
}

int main()
{
    cout<<"square:" << square(5) << endl;
    cout << "Addition: " << add(10, 5) << endl;
    cout << "Subtraction: " << subtract(20) << endl;
    cout << "Integer Multiplication: " << multiply(5, 4) << endl;
    cout << "decimal Multiplication: " << multiply(3.5, 4.0) << endl;

    return 0;
}