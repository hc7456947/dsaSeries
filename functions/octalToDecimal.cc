#include <iostream>
using namespace std;
int octalToDecimal(int n)
{
    int ans=0;
    int y=1;
    while(n>0)
    {
        int x=n%10;
      ans+=y*x;
      y*=8;
      n/=10;
    }
    return ans;
}
int main() {
    int n;
    cin>>n;
    cout<<octalToDecimal(n);
    return 0;
}