#include <iostream>
#include <string>

using namepsace std; 

struct BinaryTree
{
    node Head;
};
struct node{
    struct node* c_right;
    struct node* c_left;
    struct node* parent;
    int data;
};

void Add(node*& current, int val)
{
    while (current.c_left != nullptr && current.c_right != nullptr)
    {
    if(current.data >= head.data)
        current = head.c_right;
    else if(current.data <= head.data)
        current = head.c_left;
    break;
    }
    
    // node* newnode = new node;
    // newnode->data=val;
}

void Delete()
{

}

void Menu()
{
    cout <<"Options"<<endl;
    cout << "1: Add" << endl;
    cout << "2: Delete" << endl;
    cout << "3: Show full tree." << endl;
    int selection = 0;
    cin >> selection;
    selector(selection);
}
void selector(int x)
{
    switch (x)
    {
    case 1:
        break;
    case 2:
    case 3:
    
    default:
        break;
    }
}
int main()
{
    Menu();
    node* head = nullptr;
    node* current = nullptr;
    
    
    return 0;

}