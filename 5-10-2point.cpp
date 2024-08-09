//文件2，类的实现，Point.cpp
#include "5-10-1point.h"
#include <iostream>

using namespace std;

int Point::count = 0;//使用类名初始化静态数据成员

Point::Point(const Point &p) : x(p.x), y(p.y) {
    count++;
}

void Point::showCount() {
    cout << " Object count = "<< count << endl;
}