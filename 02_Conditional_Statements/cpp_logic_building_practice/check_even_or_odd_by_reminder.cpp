#include<iostream>
using namespace std;
bool isEven(int n){
    int rem = n % 2; 
    if(rem == 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    int n=15;
    if(isEven(n)){
        cout << "true" << endl;
    }
    else{
        cout << "false" << endl;
    }
    return 0;
}
