#include<iostream>
using namespace std;

void pat(int n){
    for(int i=0; i<=n; i++){
        char ch = 'A'+n-i;
        for(int j=1; j<=i; j++){
            cout<<ch;
            ch++;
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