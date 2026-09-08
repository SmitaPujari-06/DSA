#include<iostream>
using namespace std;

void pat(int n){
    for(int i=1; i<=n; i++){
        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }

        //charecters
        int breakpoint =(2*i+1)/2;
        char ch='A';
        for(int j=1; j<=(2*i)-1; j++){
            cout<<ch;
            //ch++;
            if(j<=breakpoint) ch++;
            else ch--;
        }

        //space
        for(int j=1; j<=n-i; j++){
            cout<<" ";
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