#include<iostream>
using namespace std;

void pat(int n){
    for(int i=0; i<n; i++){
        int start;
        if(i % 2 == 0) start =1;
        else start = 0;
        for(int j=0; j<=i; j++){
            cout<<start;
            start = 1-start; //to flip the start value -> we get alternate values
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