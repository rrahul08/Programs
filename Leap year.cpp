#include<iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter a year:";
  cin>>n;
  
  if(n%4==0)
  {
      if(n%100==0)
      {
          if(n%400==0)
          {
              cout<<"Leap year";
          }else{cout<<"Not a leap year";
      }
  }
  cout<<"Leap year";
  else{
      cout<<"Not a leap year";
  }
  return 0;
}
