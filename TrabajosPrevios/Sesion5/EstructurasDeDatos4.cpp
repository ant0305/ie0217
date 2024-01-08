//Recorrido de arbol
#include <iostream>

/*
El codigo implementa un arbol y hace un recorrido inorden, preorden
y postorden tambien muestra los valores de los nodos
*/


using namespace std;

struct Node {
    int data;
    struct Node *left, *right;
    Node(int data) {
     this->data = data;
     left = right = NULL;
    }
};


//Recorrido pre-orden
void preorderTraversal(struct Node* node) {
     if (node == NULL)
      return;
    cout << node->data << "->";
    preorderTraversal(node->left);
    preorderTraversal(node->right);
}


//Recorrido post-orden
void postorderTraversal(struct Node* node) {
  if (node == NULL)
    return;
    postorderTraversal(node->left);
    postorderTraversal(node->right);
    cout << node->data << "->";


}
//Recorrido en orden
void inorderTraversal(struct Node* node) {
    if (node == NULL)
     return;

    inorderTraversal(node->left);
    cout << node->data << "->";
    inorderTraversal(node->right);
}

int main() {
struct Node* root = new Node(1); 
root->left = new Node(12); 
root->right = new Node(9); 
root->left->left = new Node(5); 
root->left->right = new Node(6);

cout << "Inorder traversal "; 
inorderTraversal(root);

cout << "\nPreorder traversal "; 
preorderTraversal(root);

cout << "\nPostorder traversal "; 
postorderTraversal(root);
return 0;
}