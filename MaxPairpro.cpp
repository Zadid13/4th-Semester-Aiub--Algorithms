#include <bits/stdc++.h>
using namespace std;

void maxPpro(int arr[],int n)
{

    if(n<2)
    {

        cout<<"No pair exits at hand"<<endl;
        return;
    }

    int a= arr[0],b=arr[1];



    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++)
            if(arr[i]*arr[j]>a*b)
                a=arr[i],b=arr[j];
    cout<<"Max   Product Pair is: {"<<a<<","<<b<<"}";

}



int main()
{

    int arr[]= {4,3,6,8,7,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxPpro(arr,n);

    return 0;
}

