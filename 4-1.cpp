#include <iostream>

using namespace std;

class Clock // 时钟类的定义
{
private:
    int hour,minute,second;

public: // 外部接口，公有成员函数
    Clock(int newH, int newM, int newS); // 构造函数
    Clock();// 默认构造函数
    void setTime(int newH = 0, int newM = 0, int newS = 0);
    void showTime();  
};
Clock::Clock():hour(0), minute(0), second(0){}//默认构造函数
// Clock:: Clock(int newH, int newM, int newS):hour(newH),minute(newM),second(newS);

Clock::Clock(int newH,int newM,int newS){
    hour = newH;
    minute = newM;
    second = newS;
}

// 时钟类成员函数的具体实现
void Clock::setTime(int newH, int newM, int newS){
    hour = newH;
    minute = newM;
    second = newS;
}

// void Clock::showTime(){
//     cout << hour << ":" << minute << ":" << second << endl;

// }

inline void Clock::showTime(){
    cout << hour << ":" << minute << ":" << second << endl; 
}

int main(){
    Clock c(6,40,0);// 自动调用构造函数
    Clock c2;
    // myClock.setTime(8,30,30);
    c.showTime();
    return 0;
}