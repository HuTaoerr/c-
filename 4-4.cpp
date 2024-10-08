#include <iostream>
#include <cmath>

using namespace std;

class Point
{
private:
    int x,y;
public:
    Point(int xx = 0, int yy = 0){
        x = xx;
        y = yy;
    };
    Point(Point &P);
    int getX(){return x;}
    int getY(){return y;}

};

Point::Point(Point &p)
{   
    x = p.x;
    y = p.y;
    cout << "calling the copy of point" << endl;
}

// Point::~Point()s
// {
// }

class Line
{
private:
    Point p1, p2; // Point类的对象p1,p2
    double len;
public:
    Line(Point xp1, Point xp2);
    Line(Line &l);
    double getLen(){return len;}
};

// 组合类的构造函数
Line::Line(Point xp1, Point xp2):p1(xp1),p2(xp2){
    cout << "Calling constructor of Line" << endl;
    double x = static_cast<double>(p1.getX() - p2.getX());
    double y = static_cast<double>(p1.getY() - p2.getY());
    len = sqrt(x*x + y*y);
}
Line::Line(Line &l):p1(l.p1), p2(l.p2){
    cout << "calling the copy construtor of line" << endl;
    len = l.len;
}

// 主函数
int main(){
    Point myp1(1,1), myp2(4,5); // 建立Point类的对象
    Line line(myp1,myp2); // 建立linelei对象
    Line line2(line);
    cout << "The length of the line is:";
    cout << line.getLen() << endl;
    cout << "The length of the line2 is:";
    cout << line2.getLen() << endl;
    return 0;
}

