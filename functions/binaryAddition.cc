#include <iostream>
using namespace std;
int reverse(int ans)
{
    int b=0;
    int rev;

    while(ans>0)
    {
        b=ans%10;
        rev=rev*10+b;
        ans/=10;
    }
    return rev;
}
int binaryAddition(int a,int b)
{
  int ans=0;
  int carry=0;
  while(a>0 &&b>0)
  {
    
    if(a%2==1 && b%2==1)
    {
        ans=ans*10+carry;
        carry=1;
    }
    else if((a%2==1 && b%2==0) || (a%2==0 && b%2==1))
    {
        if(carry==1)
        {
        ans=ans*10+0;
            carry=1;
        }
        else
        {
        ans=ans*10+1;
            carry=0;
        }
    }
    else if(a%2==0 && b%2==0)
    {
        ans=ans*10+carry;
        // carry=0;
    }
    a/=10;
    b/=10;
    while(a>0)
    {
        if(carry==1)
        {
        if(a%2==1)
        {
            ans=ans*10+0;
            carry=1;
        }
        else{
            ans=ans*10+1;
            carry=0;
        }
        }
        else{
            ans=ans*10+(a%2);  
            // carry=0;
        }
        a/=10;
    }
    while(b>0)
    {
        if(carry==1)
        {
        if(b%2==1)
        {
            ans=ans*10+0;
            carry=1;
        }
        else{
            ans=ans*10+1;
            carry=0;
        }
        }
        else{
            ans=ans*10+(b%2);  
            carry=0;
        }
        b/=10;
    }
  }
  return reverse(ans);
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<binaryAddition(a,b);
    return 0;
}