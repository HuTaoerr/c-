#include <iostream>

using namespace std;

//Point类的定义
class Point{
public:
    Point(int xx=0, int yy=0){x = xx; y = yy;}//构造函数，内联
    Point(const Point &p);//复制构造函数
    void setX(int xx){x=xx;}
    void setY(int yy){y=yy;}
    int getX() const{return x;}
    int getY() const{return y;}
private:
int x,y; // 私有数据
};

Point::Point(const Point &p){  //复制构造函数的实现
    x = p.x;
    y = p.y;
    cout << "Calling the copy constructor" << endl;
}

// 形参为Point类对象
void fun1(Point p){
    cout << p.getX() << endl;
}

//返回值为Point类对象
Point fun2(){
    Point a(1,2);
    return a;
}

int main(){
    Point a(4,5);
    Point b(a); // 用a初始化b
    cout << b.getX() << endl;
    fun1(b); //对象b作为fun1的实参
    b = fun2(); // 函数的返回值是类的对象
    cout << b.getX() << endl;
    return 0;
}




