// Parenthesis Check
// string s="()[]{}";
#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        } else {
            if (st.empty()) return false;
            
            if ((c == ')' && st.top() == '(') || 
                (c == ']' && st.top() == '[') || 
                (c == '}' && st.top() == '{')) {
                st.pop();
            } else {
                return false;
            }
        }
    }
    
    return st.empty();
}

int main() {
    string s = "(}";
    if (isValid(s)) {
        cout << "Valid Parentheses" << endl;
    } else {
        cout << "Invalid Parentheses" << endl;
    }
    return 0;
}