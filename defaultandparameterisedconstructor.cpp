#include<iostream>
#include<string>
using namespace std;
class Gradebook
{
private:
    int year;
    string coursename;

public:

    Gradebook(string cs="cse",int y=10)
    {
       year=y;
       coursename=cs;
    }




    int getyear()
    {
        return year;
    }


    string getcoursename()
    {
        return coursename;
    }
};
int main()
{

 Gradebook gb;
 cout<< gb.getyear()<< " ### "<< gb.getcoursename()<<endl;
 cout<< "parameterised constructor "<<endl;
 Gradebook gb1("mechanical",4);
 cout<<gb1.getyear()<<" ### "<<gb1.getcoursename()<<endl;

}



