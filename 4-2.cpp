#include <iostream>

using namespace std;

class MyClass {
public:
    MyClass() {  // 无参构造函数
        std::cout << "无参构造函数被调用" << std::endl;
    }

    MyClass(int value) {  // 有参构造函数
        data = value;
        std::cout << "有参构造函数被调用，初始化值: " << value << std::endl;
    }

private:
    int data;
};

int main() {
    MyClass obj1;  // 调用无参构造函数
    MyClass obj2(10);  // 调用有参构造函数
    return 0;
}