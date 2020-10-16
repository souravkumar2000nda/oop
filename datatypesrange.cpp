#include<iostream>
using namespace std;
int main()
{

    long long n;
    long long int sum=0,b=1;
    cout<< "enter no of bits "<<endl;
    cin>>n;
    n=n-1;
    while(n--)
    {

        b=b*2;
    }
    cout<<"the range is -"<<b<< " to "<<b-1;
}
