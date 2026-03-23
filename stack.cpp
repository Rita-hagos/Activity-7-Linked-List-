#include <iostream>
using namespace std;

//Part 1
struct Node
{ 
int data;
Node * next;
};

//Part 2
class Stack
{
private:
Node* top;

public:
   Stack();
   void push(int value);
   void pop();
   int peek();
   bool isEmpty();
   void display();
};

//Part 3
Stack:: Stack()
{
   top = nullptr
     }
//Part 4

void Stack::push(int value)
{
  Node* newNode = new Node;
  newNode->data = value;
  newNode->next = top;
  top = newNode;
}

//Part 5
void Stack::pop()
{
  if(isEmpty())
{
   cout <<"Stack Underflow." << endl;
return;
}
   Node* temp = top;
   top = top->next;
   delete temp;
}

//Part 6
int Stack:: peek()
{
  if (isEmpty())
{
   cout << "Stack is empty." << endl;
   return -1;
}
    return top ->data;
}

//Part 7
bool Stack::isEmpty()
{
  return top == nullptr;
}

//Part 8
void Stack::display()
{
  if(isEmpty())
{
   cout << "Stack is empty." << endl;
        return;
    }
Node* current = top;
cout << "Stack elements:" << endl;

while (current != nullptr)
{
   cout << current->data << endl;
current = current ->next;
}
  cout << endl;
}

//Part 9
int main()
{
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
   
    s.display();
    s.pop();
    cout << "Top element: " << s.peek() << endl << endl;
    s.display();

    s.pop();
    s.pop();
    s.pop();
    s.pop();   

    return 0;
}
