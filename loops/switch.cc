#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter your choice:"<<endl;
    for(int i=1;i<=5;i++)
    {
        cout<<i<<endl;
    }
    cin>>n;
    switch(n){
        case 1:
        cout<<"You entered 1";
        break;
        case 2:
        cout<<"You entered 2";
        break;
        case 3:
        cout<<"You entered 3";
        break;
        case 4:
        cout<<"You entered 4";
        break;
        case 5:
        cout<<"You entered 5";
        break;
        default:
        cout<<"Invalid Input";
    }
    return 0;
}