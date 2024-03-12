#include <iostream>
#include<string>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    for(int i=0;i<str.size();i++)
    {
        for(int j=i+1;j<str.length();j++)
        {
              if(str[j]>str[i]){
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
              }
        }
    }
     int num=stoi(str);
    cout<<num;
    cout<<endl;
    cout<<str.length();
    cout<<endl;
    cout<<str.size();
    cout<<endl;   
    return 0;
}