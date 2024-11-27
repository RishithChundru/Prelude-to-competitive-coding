#include <iostream>
#include <stack>
#include <string>

bool isValidParentheses(const std::string& s) {
    std::stack<char> stack;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            stack.push(ch); // Push opening brackets onto the stack
        } else {
            if (stack.empty()) return false; // No matching opening bracket
            
            char top = stack.top();
            stack.pop();

            // Check if the top element matches the current closing bracket
            if ((ch == ')' && top != '(') ||
                (ch == '}' && top != '{') ||
                (ch == ']' && top != '[')) {
                return false;
            }
        }
    }
    
    // If stack is empty, all parentheses are matched
    return stack.empty();
}

int main() {
    std::string input;
    std::cout << "Enter a string of parentheses: ";
    std::cin >> input;

    if (isValidParentheses(input)) {
        std::cout << "The parentheses are valid.\n";
    } else {
        std::cout << "The parentheses are not valid.\n";
    }

    return 0;
}
