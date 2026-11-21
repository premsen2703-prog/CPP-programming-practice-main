#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,string>p1;
    p1.first=1;
    p1.second="hello";
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,string>p2(2,"world");
    cout<<p2.first<<" "<<p2.second<<endl;

    // vector<pair<int,string>>arr={};
    // cout<<"enter the size of an array: ";
    // int n;
    // cin>>n;
    // cout<<"enter the elements of an array: ";
    // for(int i=0;i<n;i++){
    //     int x;
    //     string y;
    //     cin>>x>>y;
    //     arr.push_back({x,y});
    // }
    // cout<<"the elements of an array are: "<<endl;
    // cout<<"index"<<" "<<"first_element"<<" "<<"second_element"<<endl;
    // for(int i=0;i<arr.size();i++){
    //     cout<<i<<"  "<<arr[i].first<<"   "<<arr[i].second<<endl;
    // }
    // how to do operations on pair 
    pair<int,string>p3=p1; // copy constructor
    cout<<p3.first<<" "<<p3.second<<endl;
    pair<int,string>p4=p1; // copy assignment operator
    cout<<p4.first<<" "<<p4.second<<endl;
    pair<int,string>p5=make_pair(3,"cpp"); // make_pair function
    cout<<p5.first<<" "<<p5.second<<endl;
    pair<int,string>p6=move(p1); // move constructor
    cout<<p6.first<<" "<<p6.second<<endl;
    pair<int,string>p7=move(p2); // move assignment operator
    cout<<p7.first<<" "<<p7.second<<endl;
    // this is continue after word.

    
    // for(int i=0;i<arr.size();i++){
    //     cout<<arr[i].first<<" "<<arr[i].second<<endl;
    // }


    return 0;
}
