#include <iostream>
using namespace std;
int main() {
  int rows,col;
    cout<<"Enter the rows count: ";
    cin>>rows;
    cout<<"Enter the columns: ";
    cin>>col;
    for(int i=0;i<rows;i++)
    {
        for(int i=0;i<col;i++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}