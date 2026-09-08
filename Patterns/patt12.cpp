#include<iostream>
using namespace std;

void pat(int n){
    for(int i=1; i<=n; i++){
        //numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //space
        for(int j=0; j<=2*(n-i-1); j++){
            cout<<" ";
        }
        //numbers
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    pat(n);
    return 0;
}