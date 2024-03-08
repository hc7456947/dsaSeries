#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   const int N=100;
   int a[N];
   for(int i=0;i<N;i++)
   {
       a[i]=-1;
   }
   int minidx=INT_MAX;
   for(int i=0;i<n;i++)
   {
    if(a[arr[i]]!=-1)
    {
        minidx=min(a[arr[i]],minidx);
    }
    else{
        a[arr[i]]=i;
    }
   }
   if(minidx==INT_MAX)
   {
    cout<<-1;
   }
   else{
       cout<<minidx+1;
   }
    return 0;
}