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
}

