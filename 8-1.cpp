/**
 * @brief 复数类加减法运算重载为成员函数
 * 
 * 
 */

#include <iostream>
using namespace std;

class Complex{
private:
    double real; //复数实部
    double imag; //复数虚部

public:
    Complex(double r = 0.0, double i = 0.0):real(r),imag(i){}

    Complex operator+(const Complex &c) const; //运算符+重载成员函数

    Complex operator-(const Complex &c) const; //运算符-重载成员函数

    void display() const; //输出复数

};


Complex Complex::operator+(const Complex &c) const{
    return Complex(real + c.real, imag + c.imag);     //调用本类的构造函数，创建了一个临时无名对象作为返回值
}

Complex Complex::operator-(const Complex &c) const{
    return Complex(real - c.real, imag - c.imag);
}

void Complex::display() const{
    cout << "(" << real << "," << imag << ")" << endl;
}


int main(){
    Complex c1(5,4), c2(2,10), c3;
    cout << "c1 = "; c1.display();
    cout << "c2 = "; c2.display();
    c3 = c1 - c2;               //使用重载运算符完成复数减法
    cout << "c3 = c1 - c2 : ";c3.display();
    c3 = c1 + c2;
    cout << "c3 = c1 + c2 : ";c3.display();
    return 0;
}

/*
输出结果为：
c1 = (5,4)
c2 = (2,10)
c3 = c1 - c2 : (3,-6)
c3 = c1 + c2 : (7,14)
*/