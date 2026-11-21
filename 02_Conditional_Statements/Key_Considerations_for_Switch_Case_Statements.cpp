//1. Constant Expression: A switch expression must evaluate to a constant value. This can include constants or arithmetic operations.
#include<bits/stdc++.h>
using namespace std;
int main(){
    const int x = 10;
    const int y = 5;
    switch(x+y)
    {
        case 15:
            cout<<"Result is 15."<<endl;
            break;
        case 20:
            cout<<"Result is 20."<<endl;
            break;
        default:
            cout<<"No match found."<<endl;
    }
    return 0;
}

//2. Limited to Certain Types: Switch statements are mainly designed for int, char, or string values depending on the language.
#include<bits/stdc++.h>
using namespace std;
int main(){
    char grade = 'A';
    switch (grade)
    {
        case 'A':
            cout<<"Excellent!"<<endl;
            break;
        case 'B':
            cout<<"Good!"<<endl;
            break;
        default:
            cout<<"Not specified."<<endl;
    }
    return 0;
}
