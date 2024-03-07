#include <iostream>
using namespace std;
int maxTillI(int arr[],int n,int i)
{
  int mx=arr[0];
  for(int j=0;j<=i;j++)
  {
    if(arr[j]>mx)
    {
        mx=arr[j];
    }
  }
  return mx;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    int i;
    cin>>i;
    cout<<maxTillI(arr,n,i);
    return 0;
}