#include <iostream>
using namespace std;
void bubbleSort(int arr[],int n)
{
    int counter=1;
    while(n>counter)
    {
        int temp;
        for(int i=0;i<n-counter;i++)
        {
          if(arr[i]>arr[i+1])
          {
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
          }
        }
        
        counter++;
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