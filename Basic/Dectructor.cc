#include <iostream>
using namespace std;
class Destructor
{
    public:
  ~Destructor()
    {
        cout<<"This is destructor.\n";
    }
    Destructor(){
    cout<<"This is constructor.\n";
    }
  
};
int main() {
    Destructor d;
    return 0;
}