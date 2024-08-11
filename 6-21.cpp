// #include <iostream>

// using namespace std;
// // 子义自己写的，有进步
// class ChangFang
// {
// private:
//     int x, y;
//     int sq;
// public:
//     ChangFang(int x, int y){
//         this->x = x;
//         this->y = y;
//         sq = x * y;
//     };

//     ~ChangFang(){};

//     int getX(){return x;}
//     int getY(){return y;}
//     int getsq(){return sq;}

// };

// // ChangFang::ChangFang(int x, int y):x(x),y(y){
// //     sq = x * y;
// // }



// int main(){
//     ChangFang A1(5,4);
//     cout << "长方形的长: " << A1.getX() << endl;
//     cout << "长方形的宽: " << A1.getY() << endl;
//     cout << "长方形的面积: " << A1.getsq() << endl;
    
    
//     return 0;
// }




// #include <iostream>
// using namespace std;

// class A
// {
//     int x,y;
// public:

//      A()
//      {
//          cout << "Default constructor called!";
//      }

//      A(int a,int b)
//      {
//          x = a;  // Initializing
//          y = b;
//          cout << "Parameterized constructor called!\n";
//      }

//      void print()
//      {
//          cout << x << " " << y << "\n";
//      }

// };

// int main()
// {
//    // Sample Code to show default constructor
//       A obj(10,20); // making a object of class A   -- >Implicit
//       obj.print();

//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     char c[5]={'h','e','l','l','o'};
//     cout << c << endl;
//     getline(cin,c);
//     return 0;
// }

#include <iostream>
#include <string>

using namespace std;

int main(){
  for (int i = 0; i < 2; i++){
    string city, state;
    getline(cin, city,',');
    getline(cin, state);
    cout << "City:" << city <<  "State:" << state << endl;
    }
  return 0;
}

