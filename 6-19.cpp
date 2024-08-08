#include <iostream>
#include <cassert>

using namespace std;

class Point{
public:
    Point():x(0),y(0){
        cout << "Default Constructor called." << endl;
    }


    Point(int x, int y):x(x),y(y){
        cout << "Constructor called." << endl;
    }
    ~Point(){
        cout << "Destructor called" << endl;
    }

    int getX()const{
        return x;
    }
    int getY()const{
        return y;
    }
    void move(int newX, int newY){
        x = newX;
        y = newY;
    }

private:
    int x,y;
};



class ArrayOfPoints
{
private:
    int size;       //数组大小
    Point *points;  //指向动态数组首地址
public:
    ArrayOfPoints(int size):size(size){
        points = new Point[size];
    }
    
    ~ArrayOfPoints(){
        cout << "Deleting..." << endl;
        delete[] points;
    }

    Point &element(int index){              //  这里要用引用，否则返回的是一个无名对象的值，不是我们之前生成的points的地址
        assert(index >= 0 && index < size);
        return points[index];
    }

};

int main(){
    int count = 2;
    ArrayOfPoints mainpoints(count); // 创建数组对象 先去调用构造函数ArrayOfPoints(int size)，再去调用Point类中的默认构造函数
    mainpoints.element(0).move(4,5);
    mainpoints.element(1).move(2,9);
    return 0;
}


