#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        // for(int j=0;j<n;j++)
        // {
        //     if(j<n-i)
        //     {
        //         cout<<" ";
        //     }
        //     else{
        //         cout<<"*";
        //     }
        // }
       for(int j=n;j>i;j--)
       {
        cout<<" ";
       }
       for(int k=0;k<=i;k++)
       {
        cout<<"*";
       }
        cout<<endl;
    }
    return 0;
}