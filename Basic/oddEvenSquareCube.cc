#include <iostream>
using namespace std;
int main() {
    int m,n;
    cin>>m>>n;
    int size=(n-m)+1;
    int arr[size];
    int k=0;
    for(int i=m;i<=n;i++)
    {
      arr[k]=i;
      k++;
    }
    for(int i=0;i<size;i++)
    {

        cout<<arr[i]<<" ";
    }
cout<<endl;
    for(int i=0;i<size;i++)
    {
        if(i==0)
        {
            cout<<(arr[0]*arr[0])<<" ";
        }
        else if(i==1)
        {
            cout<<(arr[1]*arr[1]*arr[1])<<" ";
        }
        else if(i%2==0)
        {
            cout<<(arr[i]*arr[i])<<" ";
        }
        else{
            cout<<(arr[i]*arr[i]*arr[i])<<" ";
        }
    }

    return 0;
}