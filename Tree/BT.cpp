// #include <iostream>

// using namespace std;


// struct Node {
//     int data;
//     Node* left;
//     Node* right;

//     Node(int val) : data(val), left(nullptr), right(nullptr) {}
// };


// class BinaryTree { 
// public:
//     Node* root;

//     BinaryTree() : root(nullptr) {}


//     void insert(int val) {
//         root = insertRec(root, val);
//     }


//     Node* insertRec(Node* node, int val) {
//         if (node == nullptr) {
//             return new Node(val);
//         }

//         if (val < node->data) {
//             node->left = insertRec(node->left, val);
//         } else {
//             node->right = insertRec(node->right, val);
//         }
//         return node;
//     }


//     void inOrder() {
//         inOrderRec(root);
//         cout << endl;
//     }


//     void inOrderRec(Node* node) {
//         if (node != nullptr) {
//             inOrderRec(node->left);
//             cout << node->data << " ";
//             inOrderRec(node->right);
//         }
//     }


//     void preOrder() {
//         preOrderRec(root);
//         cout << endl;
//     }


//     void preOrderRec(Node* node) {
//         if (node != nullptr) {
//             cout << node->data << " ";
//             preOrderRec(node->left);
//             preOrderRec(node->right);
//         }
//     }


//     void postOrder() {
//         postOrderRec(root);
//         cout << endl;
//     }


//     void postOrderRec(Node* node) {
//         if (node != nullptr) {
//             postOrderRec(node->left);
//             postOrderRec(node->right);
//             cout << node->data << " ";
//         }
//     }
// };


// int main() {
//     BinaryTree tree;

  
//     tree.insert(5);
//     tree.insert(3);
//     tree.insert(8);
//     tree.insert(1);
//     tree.insert(4);
//     tree.insert(7);
//     tree.insert(9);


//     cout << "In-Order Traversal: ";
//     tree.inOrder();

//     cout << "Pre-Order Traversal: ";
//     tree.preOrder();

//     cout << "Post-Order Traversal: ";
//     tree.postOrder();

//     return 0;
// }




// static question


// #include<iostream>
// using namespace std;


// int main(){
    
//     return 0;
// }