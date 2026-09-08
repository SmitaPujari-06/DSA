#include<iostream>
using namespace std;

void pat(int n){
    for(int i=1; i<=n; i++){
            //stars
            for(int j=1 ; j<=n-i+1; j++){
                cout<<"*";
            }

            //space
            for(int j=0; j<2*(i-1); j++){
                cout<<" ";
            }

            //stars
            for(int j=1 ; j<=n-i+1; j++){
                cout<<"*";
            }
            cout<<endl;
        }

    }

void pat2(int n){
    for(int i=1; i<=n; i++){
        //stars
        for(int j=1; j<=i; j++){
            cout<<"*";
        }

        //space
        for(int j=1; j<= 2*(n-i);j++){
            cout<<" ";
        }

        //stars
        for(int j=1; j<=i; j++){
            cout<<"*";
    }
    cout<<endl;
}

}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    pat(n);
    pat2(n);
    return 0;
}