#include <iostream>
using namespace std;
class Default{
    public:
    Default()
    {
        int a=20;
        int b=40;
        cout<<a+b;
    }
};
int main() {
    Default d;
    return 0;
}