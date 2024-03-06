#include <iostream>
using namespace std;

void decimalToBinary(int n) {  
   int arr[32];
   int ans;
   int i=0;
   while(n>0)
   {
     ans=n%2;
    arr[i]=ans;
    i++;
    n/=2;
   }
   for(int j=i-1;j>=0;j--)
   {
    cout<<arr[j]<<" ";
   }
}

int main() {
    int n;
    cin >> n;
    decimalToBinary(n);
    return 0;
}
