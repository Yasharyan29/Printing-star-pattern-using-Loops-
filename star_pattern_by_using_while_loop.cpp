#include<iostream>                                          
using namespace std;

int main(){
    int i,n,j;
    cout<<"enter the value: ";
    cin>>n; 
    i = 1;
    while(i<=n){ 
        j = 1; 
        while(j<=i){ 
            cout<<"*"; 
            j = j+1; 
        }
        i = i+1; 
        cout<<endl;
    }
    return 0;
}
