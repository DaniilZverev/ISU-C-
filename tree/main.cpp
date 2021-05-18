#include <iostream>
#include <cstdlib>

using namespace std;

typedef struct _treeNode {
	int data = 0;
	struct _treeNode *left=NULL, *right=NULL, *parent=NULL;
} treeNode;

treeNode* new_treeNode(int data) {
	treeNode* newNode = (treeNode*)malloc(sizeof(treeNode));
	newNode->data = data;
	return newNode;
}

void insert(treeNode* tNode, treeNode* nNode) {
	if (nNode->data <= tNode->data) {
		if (tNode->left) insert(tNode->left, nNode);	
		else {
			nNode->parent = tNode;
			tNode->left = nNode;
		}
	}
	else if (nNode->data > tNode->data) {
		if (tNode->right) insert(tNode->right, nNode);
		else {
			nNode->parent = tNode;
			tNode->right = nNode;
		}
	}
}

treeNode* seek(treeNode* tNode, int data) {
	if (tNode->data == data) return tNode;
	if (data <= tNode->data) {
		if (tNode->left) return seek(tNode->left, data);	
	}
	else if (data > tNode->data) {
		if (tNode->right) return seek(tNode->right, data);
	}
	else return NULL;
}

treeNode* find_max(treeNode* tNode) {
	if (tNode->right) find_max(tNode->right);
	else return tNode->right;
}

void remove(treeNode* tNode, int data) {
	if (data > tNode->data) remove(tNode->right, data);
	if (data < tNode->data) remove(tNode->left, data);
	if (data == tNode->data) {
		if (tNode->right && tNode->left) {
			treeNode* localMaxNode = find_max(tNode->left);
			tNode->data = localMaxNode->data;
			localMaxNode->parent->right = NULL;
			free(localMaxNode);
		} else if (tNode->left) {
			if (tNode == tNode->parent->left) {
            	tNode->parent->left = tNode->left;
        	} else {
            	tNode->parent->right = tNode->left;
        	}
			free(tNode);
		} else if (tNode->right) {
			if (tNode == tNode->parent->right) {
            	tNode->parent->right = tNode->right;
        	} else {
            	tNode->parent->left = tNode->right;
        	}
			free(tNode);
		} else {
			if (tNode->parent->right == tNode) tNode->parent->right = NULL;
			else tNode->parent->left = NULL;
			free(tNode);
		}
	} 
}

void display_tree(treeNode* node) {
	if (node) {
		display_tree(node->left);
		cout << node->data << ' ';
		display_tree(node->right);
	}
}

int main(void) {

	int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

	treeNode* tree = new_treeNode(0);

	for (int i = 0; i < sizeof(arr)/sizeof(int); i++) {
		insert(tree, new_treeNode(arr[i]));
	}
	display_tree(tree); cout << endl;

	treeNode* hay = seek(tree, 14);
	if (hay) cout << hay->data << endl;

	
}
