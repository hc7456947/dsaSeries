#include <iostream>
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
    int j = 0;
    int rb = 0;
    while (j < n)
    {
        bool flag=true;
        for(int i=0;i<j;i++)
        {

            if(a[i]>a[j])
            {
                flag=false;
                break;
            }
        }
        if (a[j] > a[j+1]  && flag==true)
        {
            rb += 1;
        }
        
        j++;
    }
    cout <<"The number of breaking days is : "<< rb;
    return 0;
}