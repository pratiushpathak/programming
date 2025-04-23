#include<iostream>
using namespace std;
int main()
{
    int num,r=0,arm=0,m;
    cout<<"enter number";
    cin>>num;
     m=num;

    while (num>0)
    {
        r=num%10;
        num=num/10;
        arm=arm+r*r*r;
       
        
    }
   
    if (arm==m)
    {
        cout<<"armstrong";
    }
    else
    {
        cout<<"not armstrong";
    }
    
    

}