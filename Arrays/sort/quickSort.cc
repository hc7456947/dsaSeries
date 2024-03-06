#include <iostream>
using namespace std;
int partition(int arr[],int l,int r)
{
  int i=l-1;
  int pivot=arr[r];
  for(int j=l;j<=r-1;j++)
  {
    if(arr[j]<pivot)
    {
        int temp;
        i++;
        temp=arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    } 
  }
  int tem;
  tem=arr[r];
  arr[r]=arr[i+1];
  arr[i+1]=tem;

return (i+1);
}
void quickSort(int arr[],int l,int r)
{
  if(l<r)
  {
    int pi=partition(arr,l,r);
    quickSort(arr,l,pi-1);
    quickSort(arr,pi+1,r);
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
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}