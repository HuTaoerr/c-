#include <iostream>
#include <variant>

using namespace std;

int sumofsquare(int a, int b)
{
    cout << "this is int" << endl;
    return a * a + b * b;
}

double sumofsquare(double a, double b)
{
    cout << "this is double" << endl;
    return a * a - b * b;
}

int main()
{

    int m, n;
    cout << "Enter two num";
    cin >> m >> n;
    cout << "Their sum of square（m,n）" << sumofsquare(m, n) << endl;

    double x, y;
    cout << "Enter two num";
    cin >> x >> y;
    cout << "Their sum of square（x,y）" << sumofsquare(x, y) << endl;

    return 0;
}