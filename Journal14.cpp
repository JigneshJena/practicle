
#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

class InfixToPrefix {
    private:
        string infix;
        string prefix;
        stack<char> s;

    public:
        void getInput();
        int precedence(char);
        void convert();
        void display();
};

void InfixToPrefix::getInput() {
    cout << "Enter infix expression: ";
    cin >> infix;
}

int InfixToPrefix::precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

void InfixToPrefix::convert() {
    reverse(infix.begin(), infix.end());
    for (char &ch : infix) {
        if (ch == '(') ch = ')';
        else if (ch == ')') ch = '(';
    }

    for (char &ch : infix) {
        if (isalnum(ch)) {
            prefix += ch;
        } else if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                prefix += s.top();
                s.pop();
            }
            s.pop(); // Remove '(' from stack
        } else {
            while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                prefix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while (!s.empty()) {
        prefix += s.top();
        s.pop();
    }

    reverse(prefix.begin(), prefix.end());
}

void InfixToPrefix::display() {
    cout << "Prefix expression: " << prefix << endl;
}

int main() {
    InfixToPrefix obj;
    obj.getInput();
    obj.convert();
    obj.display();
    return 0;
}