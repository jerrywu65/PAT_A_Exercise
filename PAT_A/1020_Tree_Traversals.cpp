/*#include <cstdio>
#include <iostream>
#include <queue>
using namespace std;

const int maxn = 31;
int post[maxn];
int in[maxn];
struct node
{
	int data;
	node* lchild;
	node* rchild;
};
node* create(int postL, int postR, int inL, int inR) {
	if (postL>postR)
	{
		return NULL;
	}
	node* root = new node;
	root->data = post[postR];
	int k;
	for ( k = inL; k <= inR; k++)
	{
		if (in[k] == post[postR]) {
			break;
		}
	}
	int numleft = k - inL;
	root->lchild = create(postL, postL + numleft - 1, inL, k - 1);
	root->rchild = create(postL + numleft, postR - 1, k + 1, inR);

	return root;
}
void layerorder(node* root) {
	queue<node*> q;
	q.push(root);
	while (!q.empty())
	{
		node* now = q.front();
		q.pop();
		printf("%d", now->data);
		if (now->lchild!=NULL)
		{
			q.push(now->lchild);
		}
		if (now->rchild!=NULL)
		{
			q.push(now->rchild);
		}
		if (now->lchild != NULL|| now->rchild != NULL|| !q.empty())
		{
			printf(" ");
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> post[i];
	}
	for (int i = 0; i < n; i++)
	{
		cin >> in[i];
	}
	node* root = create(0, n - 1, 0, n - 1);
	layerorder(root);

	return 0;
}*/