#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    bool check=true;
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime number.";
            check=false;
            break;
        }
        
    }if(check==true){
            cout<<"Prime Number.";
    }
    return 0;
}