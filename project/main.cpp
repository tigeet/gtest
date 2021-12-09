#include<string>
#include"main.h"
using namespace std;
void Stack::push(char c) {
    Stack::stack[Stack::n++] = c;
}

char Stack::pop() {
    if (Stack::n)
        return Stack::stack[--Stack::n];
    else 
        return 0;
}

Stack::Stack(int x) {
    Stack::stack = new char[x];
}

int Stack::size() {
    return Stack::n;
}

void Stack::clear() {
    for (int i = 0; i < Stack::n; ++i) {
        Stack::stack[i] = 0;
    }
    n = 0;
}

bool brackets(Stack *stack, string s) {
    for (char c : s) {
        if (c == '(' || c == '[') {
            stack->push(c);
        } else if (c == ')') {
            if (stack->size() == 0 || stack->pop() != '(')
                return false;
        } else if (c == ']') {
            if (stack->size() == 0 || stack->pop() != '[')
                return false;
        }
    }
    return true;
}

// int brackets(Stack stack, string s) {
//     for (char c : s) {
//         if (c == '(' || c == '[') {
//             stack.push(c);
//         } else if (c == ')') {
//             if (stack.size() == 0 || stack.pop() != '(')
//                 return 0;
//         } else if (c == ']') {
//             if (stack.size() == 0 || stack.pop() != '[')
//                 return 0;
//         }
//     }
//     return 1;
// }