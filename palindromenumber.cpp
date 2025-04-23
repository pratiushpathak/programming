#include<iostream>
using namespace std;
int main()
{
    int num,rem,rev=0,m;
    cout<<"enter number";
    cin>>num;
    m=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;

    }
    if (rev==m)
    {
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }

}