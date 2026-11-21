#include<iostream>
using namespace std;
int findSumOfNNaturalNumbers(int n){
    if(n==1){
        return 1;
    }
    return n+findSumOfNNaturalNumbers(n-1);
}
int main(){
    int n=3;
    cout<<"sum of "<<n<<" natural number is "<<findSumOfNNaturalNumbers(n)<<endl;
    
}