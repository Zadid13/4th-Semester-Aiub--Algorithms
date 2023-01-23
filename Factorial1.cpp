#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    long long factorial= 1.0;

    cout<<"Enter a positive integer: ";
    cin>>n;

    if(n<0)
    {
        cout<<"Factorial of a negative number doesn't exist ";
    }
    else
    {

        for(int i=1; i<=n; i++)
        {
            factorial=factorial*i;
        }
        cout<<"Factorial of "<<n<< " is "<<factorial;

    }



    return 0;
}
