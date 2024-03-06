#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int ele){
     int l=0;
     int r=n;
     while(l<r)
     {
     int mid=l+(r-1)/2;
       if(ele==arr[mid])
       {
        return mid;
       }
       else if(ele<arr[mid])
       {
        r=mid-1;
       }
       else if(ele>arr[mid])
       {
        l=mid+1;
       }
     }
}
int main() {
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the array in assending order: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    cout<<"The index of the element is: "<<binarySearch(arr,n,ele);
    return 0;
}