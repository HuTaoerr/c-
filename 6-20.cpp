#include <iostream>
#include <vector>

using namespace std;

//计算数组arr中元素的平均值
// double average(const vector<double> &arr){
//     double sum = 0;
//     for (unsigned i = 0; i < arr.size(); i++)
//     {
//         sum += arr[i];
//     }
//     return sum/arr.size();

// }


int main(){
    // unsigned n;
    // n = 2;

    // vector<double>arr(n); // 穿创建数组对象
    // cout << "Please input " << n << "real numbers: " << endl;
    // for (unsigned i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "Average = " << average(arr) << endl;


    // vector<int> v = {1,32,4,7};
    // for (auto i = v.begin(); i != v.end(); ++i)
    // {
    //     cout << *i << endl;
        
    // }
    // cout << v[1] << endl;



    int a[5] = {1, 2, 3, 4, 5};
    vector<int> v1(a, a+5);

    for (auto i = v1.begin(); i != v1.end(); ++i)
    {
        cout << *i << endl;
        
    }


    return 0;
}