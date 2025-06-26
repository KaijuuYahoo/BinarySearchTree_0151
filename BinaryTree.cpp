#include <iostream>
using namespace std;
class Node{
    public :
        int info;
        Node *leftchild;
        Node *rightchild;

        //constructor for the node class
        Node(){
            leftchild = nullptr; //Initialize Left child to null
            rightchild = nullptr; //Initialize Right child to null
        }
};

class BinaryTree{
    public:
        Node *ROOT;

        BinaryTree(){
            ROOT = nullptr; // Initializing ROOT to NULL
        }
        void search(int element, Node *&parent, Node *&currentNode){
            
        }
};
