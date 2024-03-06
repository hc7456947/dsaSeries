#include <iostream>
using namespace std;
int main() {
    int amt;
    cout<<"Enter the amount:";
    cin>>amt;
    if(amt>5000){
        cout<<"N";
    }
    else if(amt>2000){
        cout<<"R";
    }
    else{
        cout<<"friends";
    }
    return 0;
}