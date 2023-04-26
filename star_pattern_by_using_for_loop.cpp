#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n; //3 
    for(int i=1; i<=n ;i=i+1){ 
        for(int j=1; j<=i ; j=j+1){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}