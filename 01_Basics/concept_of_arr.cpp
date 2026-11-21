#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"enter the elements of an array: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    cout<<"the elements of an array are: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

