#include <iostream>
#include<string>
using namespace std;
void decimalToHexadecimal(int n)
{
  char ans;
  string hex;
  int rem;
  while(n>0)
  {
    rem=n%16;
    if(rem>=0 && rem<10)
    {
        ans=rem+'0';
    }
    else{
        ans=rem-10+'A';
    }
    hex=ans+hex;
    n/=16;
  }
  cout<<hex;
}
int main() {
    int n;
    cin>>n;
    decimalToHexadecimal(n);
    return 0;
}