/**
 * 
 * @brief 求绝对值函数的模版
 */

#include <iostream>
using namespace std;

template<typename T>
T abs(T x){
    return x < 0? -x:x;
}

int main(){
    int n = -5;
    double d = -5.5;
    cout << abs(n) << endl;
    cout << abs(d) << endl;

    return 0;
}