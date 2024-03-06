#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    int key;
    cin>>key;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<i<<endl;
            break;
        }

    }
    
    return 0;
}