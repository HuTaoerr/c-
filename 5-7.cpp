#include <iostream>

using namespace std;


class A
{
    friend class B;

private:
    int x;
public:
    void display(){
        cout << "display" << x << endl;
    }
};

class B
{
private:
    A a;

public:
   void set(int i);
   void display();
};

void B::set(int i){
    a.x = i;
}

void B::display(){
    a.display();
}


