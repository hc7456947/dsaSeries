#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int temp,counter;
    for(int k=n-1;k>0;k--)
    {
   for(int i=0;i<k;i++)
   {
    if(arr[i]>arr[i+1])
    {
        temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
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
    bubbleSort(arr,n);
    return 0;
}