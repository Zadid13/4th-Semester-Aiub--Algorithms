

#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n)
{

    bool isUnsorted;
    do
    {
        isUnsorted=false;
        for(int i =0; i<(n-1); i++)
        {

            if(arr[i]>arr[i+1])
            {
                isUnsorted=true;
                for(i=0; i<(n-1); i++)
                {
                    if(arr[i]>arr[i+1])
                    {
                        swap(arr[i],arr[i+1]);
                    }
                }
            }
        }

    }
    while(isUnsorted);

}


void showArray(int arr[],int size)
{


    for(int i=0; i<size; i++)
        cout<<" "<<arr[i];
}

int main()
{

    int arr[]= {4,3,6,8,7,9,1,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr,n);
    cout<<"The sorted array: "<<endl;
    showArray(arr,n);




    return 0;
}
