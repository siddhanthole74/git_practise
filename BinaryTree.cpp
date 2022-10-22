#include <bits/stdc++.h>
typedef long long ll ;
using namespace std ;
struct node{
int data;
struct node * left;
struct node * right;

};
struct node * create()
{
	cout<<"ENTER DATA"<<"\n";
		cout<<"ENTER POSITIVE NUMBER TO CREATE NODES\n";
	int x;
     cin>>x;

	if(x<0)
	{
		return NULL;
	}
	else
	{
          struct node * newnode;
			newnode=new node;
			newnode->data=x;
			cout<<"ENTER DATA PRESENT IN LEFT CHILD OF "<<x<<"\n";
			newnode->left=create();
			cout<<"ENTER DATA PRESENT IN RIGHT CHILD OF "<<x<<"\n";
			newnode->right=create();
			return newnode;
	}
	
}
void printPreorder(struct node* nod)
{
    if (nod == NULL)
        return;
    cout << nod->data << " ";
    printPreorder(nod->left);
    printPreorder(nod->right);
}
 
int main(){
struct node * root;
root=NULL;
root=create();
printPreorder(root);
delete root;
return 0;
}