#include<iostream>
#include<string>
using namespace std;
class Gradebook
{

public:
    void display(string coursename)
    {
        cout<< "the course name is "<< coursename<<endl;
    }
};
int main()
{

 Gradebook gb;
 string coursename;
 cout<< "enter course name "<<endl;
 getline(cin,coursename);
 gb.display(coursename);
}
