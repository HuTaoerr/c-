/**
 * @brief 单一继承时的构造函数举例
 * 
 * 
 */

#include <iostream>
using namespace std;

class B{
private:
    int b;

public:
    B();
    B(int i);
    ~B();
    void print() const;
};

B::B(){
    b = 0;
    cout << "B's default constructor called." << endl;
}

B::B(int i){
    b = i;
    cout << "B's constructor called." << endl;
}

B::~B(){
    cout << "B's destructor called" << endl;
}

void B::print() const{
    cout << b << endl;
}


class C: public B{
int c;

public:
    C();
    C(int i, int j);
    ~C();
    void print() const;

};

C::C(){
    c = 0;
    cout << "C's default constructor called." << endl;
}

C::C(int i, int j):B(i),c(j){
    cout << "C's constructor called." << endl;
}

C::~C(){
    cout << "C's destructor called." << endl;
}

void C::print() const{
    B::print();
    cout << c << endl;
}

int main(){
    C obj(5,6);
    obj.print();
    return 0;
}