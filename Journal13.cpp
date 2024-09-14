#include <iostream>
#include <stack>
#include <string>
using namespace std;

class InfixToPostfix {
    private:
        string infix;
        string postfix;
        stack<char> s;

    public:
        void getInput();
        int precedence(char);
        void convert();
        void display();
};

void InfixToPostfix::getInput() {
    cout << "Enter infix expression: ";
    cin >> infix;
}

int InfixToPostfix::precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

void InfixToPostfix::convert() {
    for (char &ch : infix) {
        if (isalnum(ch)) {
            postfix += ch;
        } else if (ch == '(') {
            s.push(ch);
        } else if (ch == ')') {
            while (!s.empty() && s.top() != '(') {
                postfix += s.top();
                s.pop();
            }
            s.pop(); // Remove '(' from stack
        } else {
            while (!s.empty() && precedence(s.top()) >= precedence(ch)) {
                postfix += s.top();
                s.pop();
            }
            s.push(ch);
        }
    }
    while (!s.empty()) {
        postfix += s.top();
        s.pop();
    }
}

void InfixToPostfix::display() {
    cout << "Postfix expression: " << postfix << endl;
}

int main() {
    InfixToPostfix obj;
    obj.getInput();
    obj.convert();
    obj.display();
    return 0;
}