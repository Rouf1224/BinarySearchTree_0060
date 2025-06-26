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
    }
}

