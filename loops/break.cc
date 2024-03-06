#include <iostream>
using namespace std;
int main() {
    int amt;
    cin>>amt;
    for(int date=1;date<31;date++)
    {
        if(date%2==0)
        {
            continue;
        }
            cout<<"Can go out."<<date;
       if(amt<100){
        break;
       }
    }
    return 0;
}