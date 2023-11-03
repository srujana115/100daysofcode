//stack is lifo (last in first out)
//Stack does have index
#include <iostream>
#include <stack>

using namespace std;

void expalinstack() {
    // Create a stack of integers
    stack<int> st;

    // Push elements onto the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(3);
    st.push(5);

    // Access and print the top element of the stack
    cout << "Top Element: " << st.top() << endl;

    // Pop the top element from the stack
    st.pop();

    // Access and print the new top element of the stack
    cout << "New Top Element: " << st.top() << endl;

    // Get the size of the stack
    cout << "Stack Size: " << st.size() << endl;

    // Check if the stack is empty
    cout << "Is the Stack Empty? " << (st.empty() ? "Yes" : "No") << endl;
}

int main() {
    expalinstack(); // Call the function from main
    return 0;
}
