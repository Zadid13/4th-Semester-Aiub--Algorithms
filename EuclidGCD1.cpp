#include <bits/stdc++.h>
using namespace std;

int myGCD(int x, int y){

    if(y == 0)
        return x;
    return myGCD(y,x%y);

}

int main(){

int x,y;

cout<<"Enter x: ";
cin>>x;

cout<<"Enter y: ";
cin>>y;

cout<<"GCD is: "<<myGCD(x,y)<<endl;

return 0;
}
