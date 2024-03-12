#include <iostream>
#include<climits>
#include<string>
using namespace std;
int main() {
    string str;
    getline(cin,str);
    int freq[26];
    for(int i=0;i<26;i++)
    {
      freq[i]=0;
    }
    for(int i=0;i<str.size();i++)
    {
        freq[str[i]-'a']++;
    }
    int maxF=0;
    char maxChar='a';
    for(int i=0;i<26;i++)
    {
      if(freq[i]>maxF)
      {
        maxF=freq[i];
        maxChar='a'+i;
      }
    }
    cout<<maxChar<<" "<<maxF;
    return 0;
}