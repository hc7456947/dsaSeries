#include <iostream>
using namespace std;
int fibb(int n)
{
    int a=0;int b=1;
    cout<<a<<" "<<b<<" ";
    int c;
    for(int i=2;i<n;i++)
    {
        
        c=a+b;
         cout<<c<<" ";
         a=b;
        b=c;

    }
}
int main() {
    int n;
    cin>>n;
    fibb(n);
    return 0;
}