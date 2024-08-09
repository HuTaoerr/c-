#include <iostream>

using namespace std;


void other(){
    static int a = 2;
    static int b;
    a += 1;
    cout << "第一次a:" << a << endl;
}



int main(){
    static int a;
    other();
    cout << "第一次a:" << a << endl;
    return 0;
}