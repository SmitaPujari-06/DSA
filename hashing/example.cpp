//Given an array of n integers, and q queries, find and print how many times each queried number occurs in the array.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; //no. of elements in the array
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    //precomputation
    int hash[13]={0}; //max no. of elements we will be counting for is 12
    for(int i=0; i<n; i++){
        hash[arr[i]]+=1;
    }

    int q; // no. of elements we will be counting for
    cin>>q;
    for(int i=q; i>0; i--){
        
        int num; //actual number we need the counts for
        cin>>num;
        //fetch
        cout<<hash[num]<<endl;
    }
    return 0;
}