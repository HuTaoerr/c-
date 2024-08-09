// 计算π的值
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a = 16.0 * atan(1/5.0);
    double b = 4.0 * atan(1/239.0);
    cout << "PI =" << a -b << endl;
    return 0;
}