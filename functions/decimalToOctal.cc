#include <iostream>
using namespace std;
void decimalToOctal(int n)
{
    int ans;
    int i=0;
    int arr[32];
    while(n>0)
    {
        ans=n%8;
        arr[i]=ans;
        i++;
        n/=8;
    }
    for(int j=i-1;j>=0;j--)
    {
        cout<<arr[j]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    decimalToOctal(n);
    return 0;
}