#include <iostream>

using namespace std;

class Point
{
private:
    int x,y;
    static int count; // 静态数据成员声明，用于记录点的个数
    
public:
    Point(int x=0, int y=0):x(x),y(y){ // 构造函数
        count++;
    }
    Point(Point &p){                   // 复制构造函数
        x = p.x;
        y = p.y;
        count++;
    }
    ~Point(){count--;}
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }
    static void showcount(){            // 静态函数成员
        cout << "Object count = " << count << endl;
    }
};

int Point::count = 0; // 静态数据成员定义和初始化，使用类名限定


int main(){
    Point::showcount();
    Point a(4,5);           // 定义对象a，其构造函数会使count+1
    cout << "Point a:" << a.getX() << ", " << a.getY() << endl;
    a.showcount(); // 输出对象个数

    Point b(a);
    cout << "point B:" << b.getX() << ", " << b.getY() <<endl;
    Point::showcount();
    return 0;

}










