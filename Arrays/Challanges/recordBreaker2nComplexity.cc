#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if(n==1)
    {
        cout<<1;
        return 0;
    }
    else{
    int j = 0;
    int rb = 0;
    int mx=a[0];
    while (j < n)
    {
        if(a[j]>mx){
            mx=a[j];
        }
        
        if (a[j] > a[j+1]  && a[j]>=mx)
        {
            rb += 1;
        }
        
        j++;
    }
    cout <<"The number of breaking days is : "<< rb;
    return 0;
    }
}