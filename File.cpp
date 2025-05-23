#include <iostream>
using namespace std;

//node class representing a single node in the linked list
class Node
{
    public:
    int data;
    Node *next;

    Node()
    {
next = NULL
    }
};

// Stack class
class stack
{
    private:
    Node *top; // Pointer to the top node of the stack

    public:
    stack()
    {
        top = NULL; // Intialize the stack with a null top pointer
    }

    //push operation: Isert an element onto the top of the stack
    int push(int value)
    {
        Node *newNode = new Node(); // 1. Allocate memory for the new mode
        newNode->data = value; // 2. Assign value
        newNode->next= top; // 3. Set the next pointer of the node to
        top = newNode; // 4. Update the top pointer to the new node
        cout << "Push Value: " << value << endl;
        return value;
    }

    //pop operation: remove the topmost element from the stack
    void pop()
    {
        if(isEmpty())
        {
            cout << "Stack is empty." << endl;
        }

        Node *temp = top; // Create a temporary pointer to the top node
        top = top->next; // Update the top pointer to the next node
        cout << "Popped value: " << top->data << endl;
        delete temp;
    }

    //peek/Top operation: retrieve the value of the topmost element without remo
    void peek()
    {
        if (top == NULL)
        {
            cout << "List is empty." << endl;
        }
        else
        {
       Node *current = top;
       while (current != NULL)
{
    cout << current->data << " "<< endl;
    current = current->next;
}
cout << endl;

        } //return the value of the top node
    }

    //IsEmpty operation: Check if the stack is empty
    bool isEmpty()
    {
        return top == NUll; // Return true if the top pointer is NULL, Indicating
    }
};

int main()
{
    Stack stack;

    int choice = 0;
    int value;

    while (choice !=4)
    {
        cout << "1. Push\n";
        cout << "2. pop\n";
        cout << "3. peek\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
    }
}