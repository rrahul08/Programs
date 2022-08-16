#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char str[100];
int length,count=0;
cout<<"Enter a string:";
cin>>str;
length=strlen(str);
for(int i=0;i<length;i++)
{
    if(str[i]!=str[length-i-1])
    {
        count=1;
        break;
    }
}
if(count==0)
{
    cout<<"Palindrome";
    
}else{
    cout<<"Not a palindrome";
}
return 0;
}
