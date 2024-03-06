#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int min1=INT_MAX;
    int max1=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min1)
        {
            min1=arr[i];
        }
        if(arr[i]>max1)
        {
            max1=arr[i];
        }
    }
    cout<<"maximum element is: "<<max1;
    cout<<endl;
    cout<<"minimum element is: "<<min1;
    return 0;
}