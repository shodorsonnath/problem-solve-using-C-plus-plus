#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float num1,num2;
    cout<<"Enter two number: ";
    cin>>num1>>num2; //Input command
    cout<<showpoint; //Output format
    cout<<fixed; //Output format
    cout<<setprecision(2); //Output format
    float sum=num1+num2;
    cout<<"Sum: "<<sum<<endl;
    float sub=num1-num2;
    cout<<"Sub: "<<sub<<endl;
    float mul=num1*num2;
    cout<<"Multiplication: "<<mul<<endl;
    float div=num1/num2;
    cout<<"Division: "<<div;

}
