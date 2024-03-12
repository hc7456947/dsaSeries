#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"The 2D Array is:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    int k;
    cout<<"Enter the element to search: ";
    cin>>k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==k)
            {
                cout<<"The row is: "<<i<<" and the column is : "<<j;
                break;
            }
        }
    }
    return 0;
}