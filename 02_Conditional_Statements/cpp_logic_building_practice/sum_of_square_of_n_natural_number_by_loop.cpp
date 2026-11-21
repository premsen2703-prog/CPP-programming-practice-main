#include<iostream>
using namespace std;
int sumofSquareOfNNaturalNumbers(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i*i;
    }
    return sum;
}
int main(){
    int n=2;
    cout<<"sum of square of "<<n<<" natural number is "<<sumofSquareOfNNaturalNumbers(n)<<endl;

}