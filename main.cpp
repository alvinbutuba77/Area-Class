//using class to find area of rectangle
#include <iostream>
using namespace std;

class area
{
private:
    int len, wid, ans;

public:
    void input();
    void calculate();
    void output();

}; //end class

//member function definitions
void area::input()
{
    cout << "enter length: ";
    cin >> len;

    cout <<"enter width: ";
    cin >> wid;

}

void area::calculate()
{
    ans = len * wid;

}

void area::output()
{
    cout << "\n The area is: " << ans;
}

int main()
{
   area a;//object

   a.input();
   a.calculate();
   a.output();

}//end main
