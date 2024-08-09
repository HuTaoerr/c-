#include <iostream>
using namespace std;


int compute(int a, int b, int(*fun)(int,int)){
    return fun(a,b);
}


int max(int a, int b){
    return ((a > b)?a:b);

}

int min(int a, int b){
    return((a < b)?a:b);

}

int sum(int a, int b){
    return a + b;
}



int main(){
    int a = 5;
    int b = 9;
    int res;

    res = compute(a,b,&max);
    cout << "Max :" << res << "\n";
    
    res = compute(a,b,&min);
    cout << "Min :" << res << "\n"; 
    
    res = compute(a,b,&sum);
    cout << "Sum :" << res << "\n";

    // res = max(a,b);
    // cout << "fkwehj : " << res << endl; //我很纳闷为啥不直接调这个呢？

    return 0;
}