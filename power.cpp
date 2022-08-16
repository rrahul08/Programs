#include<iostream>
using namespace std;
int pow(int a,int b)
{
  int power=1;
  if(b==0)
    return 1;
  for(int i=1;i<=b;i++)
  {
    power=power*a;
  }
  return power;
}
int main()
{
  pow(4,5);
    return 0;
}
