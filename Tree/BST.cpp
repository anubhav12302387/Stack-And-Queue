#include<iostream>
using namespace std; 

struct Node { //Ek node bnana hai h isme
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int Value) { // create node function
    Node* newNode = new Node;
    newNode->data = Value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int data){ //insert node function
    if(root == nullptr) {
        return createNode(data);
    }

    if(data < root->data) {
        root->left = insert(root->left, data);
    }else{
        root-> right = insert(root->right, data);
    }
    return root;
}

void inorderTraversal(Node* root){
    if(root == nullptr){
        return;
    }
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

void preorderTraversal(Node* root){
    if(root==nullptr){
        return;
    }

    cout << root->data << " ";
    preorderTraversal(root->left);
    preorderTraversal(root->right);

}

void postorderTraversal(Node* root){
    if(root == nullptr){
        return;
    }
    
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    cout << root->data << " ";
}


int main(){
    Node* root = nullptr;


    // Insert nodes into binanry treee

    root = insert(root, 10);
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 6);
    root = insert(root, 88);
    root = insert(root, 25);
    root = insert(root, 40);
    root = insert(root, 66);

    cout << "Inorder Traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "Preorder Traversal: ";
    preorderTraversal(root);
    cout << endl; 

    cout << "postorder Traversal: ";
    postorderTraversal(root);
    cout << endl;
    return 0;
}

// Learn the code