#include <iostream>
#include<string>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    // convert to Uppercase
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i]-=32;
        }
    }
     cout<<str<<endl;

for(int i=0;i<str.length();i++)
{
    if(str[i]>='A' && str[i]<='Z')
    {
        str[i]+=32;
    }
}
cout<<str;
    return 0;
}