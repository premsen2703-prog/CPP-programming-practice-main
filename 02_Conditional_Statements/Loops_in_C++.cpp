#include <iostream>
using namespace std;

int main() {
  
  	for (int i = 0; i < 5; i++) {
    	cout << "Hello World\n";
    }
    return 0;
}

//o/p-
Hello World
Hello World
Hello World
Hello World
Hello World

//Different Types of Loops
//1.for Loop
for (initialization; condition; updation) { 
     // body of for loop
}
//EX-
#include <iostream>
using namespace std;

int main() {
  
  	// For loop that starts with i = 1 and ends
  	// when i is greater than 5.
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    return 0;
}
//o/p-
1 2 3 4 5 


//2.while Loop
while (condition) {
    // Body of the loop
    // update expression
}
//EX-
#include <iostream>
using namespace std;

int main() {
  
  	// Initialization
  	int i = 1;
  
  	// while loop that starts with i = 1 and ends
  	// when i is greater than 5.
    while (i <= 5) {
        cout << i << " ";
      
      	// Updation
      	i++;
    }
    return 0;
}
//o/p-
1 2 3 4 5 

//3.do while Loop
do {
    // Body of the loop
    // Update expression
} while (condition);

//EX-
#include <iostream>
using namespace std;

int main() {
  
  	// Initialization
  	int i = 1;
  
  	// while loop that starts with i = 1 and ends
  	// when i is greater than 5.
     do {
        cout << i << " ";
      
      	// Updation
      	i++;
    }while (i <= 5);

    return 0;
}
//o/p-
1 2 3 4 5 

//4.For Each Loop
#include <iostream>
#include <vector>
using namespace std;

int main() {
  
  int arr[] = {1, 2, 3, 4, 5};
    
    // By value
    cout << "Iterating by value" << endl;
    for(auto it : arr){
        cout << it <<" ";
    }
    cout<< endl;
    
    // By reference
    cout << "Iterating with reference" << endl;
    for(auto &it : arr){
        cout << it << " ";
    }
    cout<<endl;
    return 0;
}
//op-
Iterating by value
1 2 3 4 5 
Iterating with reference
1 2 3 4 5 

//5.Infinite Loops
#include <iostream>
using namespace std;

int main() {

    // This is an infinite for loop as the condition
    // expression is blank
    for (;;) {
        cout << "This loop will run forever.\n";
    }
	return 0;
}
//o/p-
This loop will run forever.
This loop will run forever.
...................

//6.Nesting of Loops
#include <iostream>
using namespace std;

int main() {
    
    for (int i = 0; i < 3; i++) {
        
        // Outer loop runs 3 times
        for (int j = 0; j < 2; j++) {
            
            // Inner loop runs 2 times for each
            // outer loop iteration
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}
//o/p-
i = 0, j = 0
i = 0, j = 1
i = 1, j = 0
i = 1, j = 1
i = 2, j = 0
i = 2, j = 1


//7.Loop Control Statements
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        
        // Terminating before reaching i = 4
        if (i == 2) break;
        cout << "Hi" << endl; 
    }
    return 0;
}
//o/p-
Hi
Hi
Hi

//8.Skip a Particular Iteration
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; i++) {
        
        // Skipping when i equals 2
        if (i == 2) continue;
        cout << "Hi" << endl; 
    }
    return 0;
}
//o/p-
Hi
Hi
Hi
Hi
