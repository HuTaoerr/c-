#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter a postive integer:";
    cin >> n;
    cout << "Number" << n << endl << "Factors";
    for(int k = 1; k <= n; k++)
    {   
        if (n % k == 0)
        {
            cout << k << " ";
        }
    }
    cout << endl;
    return 0;
    
}