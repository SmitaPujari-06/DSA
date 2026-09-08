#include<iostream>
using namespace std;

void pat(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++ ){
            char ch = 'A'+i-1;
            cout<< ch;
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