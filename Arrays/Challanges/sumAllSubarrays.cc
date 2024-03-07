#include <iostream>
using namespace std;
void sumSubarray(int arr[],int n)
{
    int total=0;
    for(int i=0;i<n;i++)
    {
    int sum=0;
        for(int j=i;j<n ;j++)
        {
            sum=sum+arr[j];
            cout<<sum<<" ";
            total+=sum;
        }
    }
    cout<<endl;
    cout<<total;
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sumSubarray(arr,n);
    return 0;
}