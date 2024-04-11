#include <iostream>
#include<string>
using namespace std;
class A{
    public:
    virtual void abc()=0;
    void display()
    {
        string name="Himanshu";
        int age=22;
        cout<<name<<" "<<age<<" ";
    }
};
class B:public A{
    public:
    void abc(){
        string surname="Rajput ";
        cout<<surname<<" ";
    }
};
int main() {
    B b;
    b.abc();
    b.display();
    return 0;
}