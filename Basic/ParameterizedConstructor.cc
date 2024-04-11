#include <iostream>
using namespace std;
class parameter{
    int a=7;
    public:
    parameter(int b,int c){
      int sum=a+b+c;
      cout<<sum;
    }
};
int main() {
    parameter(4,6);
    return 0;
}