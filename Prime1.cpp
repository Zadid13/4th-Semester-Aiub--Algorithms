#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cout<<"Enter a number: "<<endl;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        if(n%2==0)
        {
            cout<<"Not Prime"<<endl;
        }
        else
        {
            cout<<"Prime"<<endl;
        }
    }




    return 0;
}
