#include "Stack.cpp"

int main() {
	Stack<int> stack(5);
	stack.push(5);
	stack.push(1);
	stack.push(4);
	stack.push(9);
	stack.push(7);
	cout << stack.pop() << endl;
	cout << stack.pop() << endl;
}