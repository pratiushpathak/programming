#include<iostream>
using namespace std;
int main()
{
    // this question is connected to common factor
    //we are counting common factor and if common factor is 2its prime
   int num,count=0;;
   cin>>num;
   for (int i = 1; i <= num; i++)
   {
    if(num%i==0)
    {
     count++;
    }
   }
   if (count==2)
   {
    cout<<"prime number";
   }
   else
   {
    cout<<"not prime";
   }
   
    
}