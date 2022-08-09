#include <iostream>
using namespace std;

// class node for implementing the Linked List
class node
{
public:
    int data;
    node *next;
};
// Implementing stack through Linked List
class Stack
{
private:
    node *head;

public:
    // default constructor
    Stack()
    {
        head = NULL;
    }

    // functions
    void Push(int);
    void Pop();
    int Peek();
    bool isEmpty();
    void Display();
};
// function declaration for class stack
void Stack ::Push(int n)
{
    node *temp = new node();
    temp->data = n;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}
void Stack ::Pop()
{

    if (head == NULL)
    {
        cout << "Stack Underflow!" << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}
int Stack ::Peek()
{
    if (head == NULL)
    {
        cout << "Stack Underflow!" << endl;
        return 0;
    }
    // first element in the stack
    return head->data;
}
bool Stack ::isEmpty()
{
    node *t = head;
    if (t == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Stack:: Display()
{
    node *t = head;
    cout << "Stack: ";
    while (t != NULL)
    {
        cout << t->data << " ";
        t = t->next;
    }
    cout << "\n";
}
int main()
{
    Stack s;
    s.Push(1);
    s.isEmpty();
    s.Pop();
    return 0;
}
