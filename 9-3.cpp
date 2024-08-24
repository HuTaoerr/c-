/**
 * 
 * @brief 类模版实例
 */

#include <iostream>
#include <cstdlib>

using namespace std;

struct Student
{
    int id;
    float gpa;
};

template <class T>
class Store{
private:
    T item;
    bool haveValue;
public:
    friend T;                       //将参数类型T声明为友元类
    Store();                    
    T &getElem();                   //提取数据函数
    void putElem(const T &x);       //存放数据函数
};


template <class T>
Store<T>::Store():haveValue(false)
{

}

template <class T>
T &Store<T>::getElem()
{
    if (!haveValue)
    {
        cout << "No item present!" << endl;
        exit(1);
    }
    return item;
    // TODO: insert return statement here
}

template <class T>
void Store<T>::putElem(const T &x)
{
    item = x;
    haveValue = true;
}



int main(){
    using IntStore = Store<int>;
    IntStore s1,s2;
    s1.putElem(99);
    s2.putElem(-10);
    cout << s1.getElem() << " " << s2.getElem() << endl;

    Student g = {768, 100};
    Store<Student> s3;
    s3.putElem(g);
    cout << "id = " << s3.getElem().id << endl;

    Store<double> d;
    cout << d.getElem() << endl;
    //d未执行初始化，执行d.getEle时导致程序终止


    return 0;
}


