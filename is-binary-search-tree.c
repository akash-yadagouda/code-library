/*
struct Node {
   int data;
   Node* left;
   Node* right;
}
*/

#include <limits.h>

bool checkBST(Node* root) {
	bool left = (root->left) ?
		(root->data > root->left->data) && checkBST(root->left, 0, root->data) :
		true;
	bool right = (root->right) ?
		(root->data < root->right->data) && checkBST(root->right, root->data, INT_MAX) :
		true;
	return left && right;      
}

bool checkBST(Node* root, int min, int max) {
	bool left = (root->left) ?
		(root->data > root->left->data) && checkBST(root->left, min, root->data) :
		true;
	bool right = (root->right) ?
		(root->data < root->right->data) && checkBST(root->right, root->data, max) :
		true;
	return (root->data > min && root->data < max) && left && right;
}
