#include <iostream>
using namespace std;
int main() {
    int r;
    cin>>r;
    for(int i=0;i<r;i++)
    {
            for(int j=r-i;j>0;j--)
            {
                cout<<"*"<<" ";
            }
            cout<<endl;
    }
    return 0;
}