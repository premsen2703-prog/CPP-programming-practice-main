#include<iostream>
using namespace std;
void sumOfNNaturalNumbers(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"sum of "<<n<<" natural number is "<<sum<<endl;
}
int main(){
    int n=3;
    sumOfNNaturalNumbers(n);
}