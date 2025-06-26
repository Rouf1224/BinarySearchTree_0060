#include <iostream>
using namespace std;

class Node{
    public :
  int info;
  Node *leftchild;
  Node *rightchild; 

  // Constructor for the node class
  Node()
  {
    leftchild = nullptr; 
    rightchild = nullptr;
  }
};

class BinaryTree
{
    public :
    Node *ROOT;

    BinaryTree()
    {
        ROOT = nullptr; // initializing ROOT to null
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai : ";
        cin >> x;

        // Step 1: Allocate memory for the new node
        Node *newNode = new Node();

        // Step 2: Assign value to the data field of new node
        newNode->info =x;
        
        // Step 3: Make the left and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // Step 4: Locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        // Step 5: If parent isNULL (Tree is empty)
        if (parent == nullptr)
        {
            // 5a: Mark the new node as ROOT
            ROOT = newNode;
            // 5b: Exit
            return;
        }

        // Step 6: If the valjue in the data field of new node is less than that of parent
        if(x < parent->info)
        {
            
        }
    }
}

