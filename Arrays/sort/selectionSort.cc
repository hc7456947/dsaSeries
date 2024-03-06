#include <iostream>
using namespace std;
void selectionSort(int arr[],int n)
{
    int k;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
        if(arr[j]<arr[i])
        {
            k=arr[j];
            arr[j]=arr[i];
            arr[i]=k;
        }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    return 0;
}