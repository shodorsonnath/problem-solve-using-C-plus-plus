#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(5)<<"MEDIA = "<<((a*3.5+b*7.5)/(3.5+7.5))<<endl;
    return 0;
}
