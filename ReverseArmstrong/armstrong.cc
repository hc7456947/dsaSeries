#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int check=n;
    int sum=0;
    while(n>0)
    {
        int rem=n%10;
        sum=sum+(rem*rem*rem);
        n/=10;
       
    }
    if(check==sum)
    {
        cout<<"It is an armstrong number.";
    }
    else{
        cout<<"Not an armstrong number.";
    }
    return 0;
}