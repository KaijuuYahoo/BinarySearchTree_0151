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
            currentNode = ROOT;
            parent = nullptr;
            while ((currentNode != NULL)&&(currentNode->info !=element))
            {
                //This function searches the currentNode of the specified Node as well as the current Node its Parent
                parent = currentNode;
                if (element < currentNode->info)
                {
                    currentNode = currentNode->leftchild;
                }else{
                    currentNode = currentNode->rightchild;
                }
            }
        }

        void insert(){
            int x;
            cout << "Masukkan Nilai : " ;
            cin >> x;

            //step 1: Allocate memory for the new code
            Node *newNode = new Node;

            //step 2: Assign value to the data field of new node
            newNode -> info = x;

            //step 3: Make the left and right child of the new node point to NULL
            newNode->leftchild = nullptr;
            newNode->rightchild = nullptr;
        }
};
