#include <iostream>
using namespace std;

void check(int a,int b,int c){
    int x=max(a,max(b,c));
    int y,z;
    if(x==a)
    {
        y=b;
        z=c;
    }
    else if(x==b)
    {
        y=c;
        z=a;
    }
    else if(x==c){
        y=a;
        z=b;
    }
    if((x*x)==((y*y)+(z*z))){
        cout<<"Pythagorian Triplet.";
    }
    else{
        cout<<"Not a pythagorian  triplet.";
    }
}
int main() {
    int a,b,c;
    cin>>a>>b>>c;
    check(a,b,c);
    return 0;
}