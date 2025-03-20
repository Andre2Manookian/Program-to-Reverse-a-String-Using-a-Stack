#include <iostream>
#include <stack>

using namespace std;


//Read a string from the user, push each character onto a stack<char>, and then pop them to print the reversed string.


int main() {
    
    string input;
    cout << "Enter a string: ";
    cin >> input;

    stack<char> charStack;

    
    for (char ch : input) {
        charStack.push(ch);
    }

   
    cout << "Reversed string: ";
    while (!charStack.empty()) {
        cout << charStack.top();
        charStack.pop();
    }

    cout << endl;
    return 0;
}
