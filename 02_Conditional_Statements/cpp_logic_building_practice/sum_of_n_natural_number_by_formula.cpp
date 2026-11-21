#include<iostream>
using namespace std;
int findSumOfNNaturalNumbers(int n){
   return n*(n+1)/2;
}
int main(){
    int n=3;
    cout<<"sum of "<<n<<" natural number is "<<findSumOfNNaturalNumbers(n)<<endl;
    
}