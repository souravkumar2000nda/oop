#include<iostream>
using namespace std;
class shape{
public:
   int area(int a)
   {
       return a*a;
   }
   int area(int a,int b)
   {
       return a*b;
   }


private:
    int a,b;
};

int main()
{
shape d;
cout<<d.area(20);
cout<<d.area(30,30);

return 0;
}
