#include <iostream>

using namespace std;


void move(char src, char dest){
    cout << src << " --> " << dest << endl;

}

void hanoi(int n, char src, char medium, char dest){
    if (n == 1)
    {
        move(src, dest);
    }
    else{
        hanoi(n - 1, src, dest, medium);
        move(src, dest);
        hanoi(n - 1, medium, src, dest);
    }
}

int main(){
    int n = 3;
    char src = 'A';
    char medium = 'B';
    char dest = 'C';
    // cout << "shu ru:" << endl;
    // cin >> n;
    hanoi(n, src, medium, dest);
    return 0;
}




// #include <iostream>

// // 移动盘子的函数
// void moveDisk(char fromPole, char toPole) {
//     std::cout << "Move disk from " << fromPole << " to " << toPole << std::endl;
// }

// // 汉诺塔递归函数
// void hanoi(int n, char fromPole, char toPole, char auxPole) {
//     if (n == 1) {
//         moveDisk(fromPole, toPole);
//         return;
//     }
//     hanoi(n - 1, fromPole, auxPole, toPole);
//     moveDisk(fromPole, toPole);
//     hanoi(n - 1,  toPole, fromPole,auxPole);
// }

// int main() {
//     int numDisks = 3;  // 要移动的盘子数量，您可以根据需要修改
//     char source = 'A';
//     char destination = 'C';
//     char auxiliary = 'B';

//     hanoi(numDisks, source, destination, auxiliary);

//     return 0;
// }