#include<iostream>
using namespace std;
int main()
{
    int num,r=0;
    cout<<"enter number";
    cin>>num;
    while (num>0)
    {
        r= num%10;
        num= num/10;
        cout<<r;
    }
    
    
}