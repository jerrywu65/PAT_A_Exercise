/*#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

const int maxn = 1010;
struct Node
{
	int data;
	Node* lchild, * rchild;
};

void insert(Node* &root, int x) {
	if (root==NULL)
	{
		root = new Node;
		root->data = x;
		root->lchild = root->rchild = NULL;
		return;
	}
	else if (x<root->data)
	{
		insert(root->lchild, x);
	}
	else
	{
		insert(root->rchild, x);
	}
}
void preorder(Node* root, vector<int>& vi) {
	if (root==NULL)
	{
		return;
	}
	vi.push_back(root->data);
	preorder(root->lchild, vi);
	preorder(root->rchild, vi);
}

void preorderMirror(Node* root, vector<int>& vi) {
	if (root == NULL)
	{
		return;
	}
	vi.push_back(root->data);
	preorderMirror(root->rchild, vi);
	preorderMirror(root->lchild, vi);
}

void postorder(Node* root, vector<int>& vi) {
	if (root==NULL)
	{
		return;
	}
	postorder(root->lchild, vi);
	postorder(root->rchild, vi);
	vi.push_back(root->data);
}
void postorderMirror(Node* root, vector<int>& vi) {
	if (root==NULL)
	{
		return;
	}
	postorderMirror(root->rchild, vi);
	postorderMirror(root->lchild, vi);
	vi.push_back(root->data);
}
vector<int> origin, pre, preM, post, postM;
int main() {
	int n,data;
	cin >> n;
	Node* root = NULL;
	for (int i = 0; i < n; i++)
	{
		cin >> data;
		origin.push_back(data);
		insert(root, data);
	}
	preorder(root, pre);
	preorderMirror(root, preM);
	postorder(root, post);
	postorderMirror(root, postM);
	if (origin==pre)
	{
		cout << "YES" << endl;
		for (int i = 0; i < post.size(); i++)
		{
			printf("%d", post[i]);
			if (i<post.size()-1)
			{
				printf(" ");
			}
		}
	}
	else if (origin==preM)
	{
		cout << "YES" << endl;
		for (int i = 0; i < postM.size(); i++)
		{
			printf("%d", postM[i]);
			if (i<postM.size()-1)
			{
				printf(" ");
			}
		}
	}
	else
	{
		cout << "NO" << endl;
	}
	return 0;
}*/