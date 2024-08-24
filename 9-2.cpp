/**
 * 
 * @brief 函数模版实例
 */

#include <iostream>
using namespace std;

template <class T>
void outputArray(const T *array, int count){
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main(){
    const int A_COUNT = 8, B_COUNT = 8, C_COUNT = 20;
    int a[A_COUNT] = {1,2,3,4,5,6,7,8};
    double b[B_COUNT] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8};
    char c[C_COUNT] = "Welcome!";

    cout << "a: " << endl;
    outputArray(a,A_COUNT);

    cout << "b: " << endl;
    outputArray(b,B_COUNT);

    cout << "c: " << endl;
    outputArray(c,C_COUNT);
    return 0;
}
