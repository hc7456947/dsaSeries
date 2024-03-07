#include <iostream>
#include<climits>
using namespace std;
int main() {
    int arr[10]={2,3,4,5,6,2,3,4,4,9};
    
    int ans=2;
    int pd=arr[1]-arr[0];
    int curr=2;
    for(int j=2;j<10;j++)
    {
        if(arr[j]-arr[j-1]==pd)
        {
             curr+=1;
        }
        else{
            curr=2;
            pd=arr[j]-arr[j-1];
        }
        ans=max(ans,curr);
    }
    cout<<ans;
    return 0;
}