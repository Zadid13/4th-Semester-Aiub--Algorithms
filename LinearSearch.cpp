
#include <bits/stdc++.h>
using namespace std;


    int Linear(int arr[],int n, int x){

        for(int i=0;i<n;i++)
            if(arr[i]==x)
                return i;
        return -1;

    }

    int main(){

        int arr[]={5,2,6,2,7,9};
        int n=sizeof(arr)/sizeof(arr[0]);
        int x= 4;
        int index = Linear(arr,n,x);
        if(index==-1)
            cout<<"Sorry! The searched element is not in the list";
        else
            cout<<"Element found at position"<<index;



    return 0;
}
