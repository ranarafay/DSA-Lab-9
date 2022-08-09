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
public:
    node *head;
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
void Stack ::Display()
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

void initializeStack(Stack &obj)
{
    cout << "How many value you want to enter: " << endl;
    int cnt;
    cin >> cnt;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter " << i + 1 << " value: ";
        int val;
        cin >> val;

        obj.Push(val);
    }

    node *current = obj.head; 
    node *index = NULL;
    int temp;

    if (obj.head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            // Node index will point to node next to current
            index = current->next;

            while (index != NULL)
            {
                // If current node's data is greater than index's node data, swap the data between them
                if (current->data > index->data)
                {
                    temp = current->data;
                    current->data = index->data;
                    index->data = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}
int main()
{
    Stack s;
    initializeStack(s);
    s.Display();
    return 0;
}
