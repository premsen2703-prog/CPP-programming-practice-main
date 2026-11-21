#include<iostream>
using namespace std;
bool isEven(int n){
    if ((n & 1) == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n=15;
    if(isEven(n)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}