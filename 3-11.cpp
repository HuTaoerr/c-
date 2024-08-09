#include <iostream>

using namespace std;


int main(){
    int x, y;
    cout << "please enter two integer :" << endl;
    cin >> x >> y;

    int k;
    k = x;
    x = y;
    y = k;
    cout << x << "," << y << endl;
    return 0;
}







