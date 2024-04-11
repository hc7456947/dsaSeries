#include <iostream>
using namespace std;
class cp{
    public:
    int sum;
    cp(int x,int y)
    {
         sum=x+y;
    }
    void display()
    {
        cout<<sum;
    }
};
int main() {
    cp c(2,3);
    cp obj=c;
    c.display();

    cp b(6,7);
    b.display();
    return 0;
}