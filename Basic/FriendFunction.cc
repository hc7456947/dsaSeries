#include <iostream>
using namespace std;
class Friend{
    int a=10,b=20;
     friend void friendfunction(Friend);
};
void friendfunction(Friend f)
{
    int c;
    c=f.a+f.b;
    cout<<c;
}
int main() {
    Friend fr;
    friendfunction(fr);
    return 0;
}