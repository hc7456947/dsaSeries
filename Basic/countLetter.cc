#include <iostream>
#include<string>
using namespace std;
int main() {
    string str="Himanshu Chauhan";
    int count=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='a')
        {
            count+=1;
        }
    }
    cout<<count;
    return 0;
}