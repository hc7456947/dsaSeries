#include <iostream>
using namespace std;

void selectionSort(int arr[],int n)
{
    int temp;
    for(int j=0;j<n;j++)
    {
   for(int i=j+1;i<n;i++)
   {
    if(arr[i]<arr[j])
    {
         temp=arr[j];
         arr[j]=arr[i];
         arr[i]=temp;
    }
   }
   }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
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