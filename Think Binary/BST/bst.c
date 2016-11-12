#include<stdio.h>
//create tree structure
struct binaryTree
{
	int info;
	struct tree *left;
	struct tree *right;
	struct tree *parent;
};

//rename the tree structure
typedef struct binaryTree treeNode;

//create new tree node
treeNode *createNewNode(int val=0, treeNode *left=NULL, treeNode *right=NULL, treeNode *parent=NULL)
{
	treeNode *newNode=(treeNode *)malloc(sizeof(treeNode));
	newNode->info=val;
	newNode->left=left;
	newNode->right=right;
	newNode->parent=parent;
	return newNode;
}

//insert node in the bst
insertBST(treeNode *rootRef, int val)
{
	if(rootRef==NULL)
	{
		*rootRef=createNewNode(val,NULL,NULL,NULL,NULL);
		return;
	}
	if(val < (*rootRef->info)
	{
		if((*rootRef)->left==NULL)
		{
			(*rootRef)->left=createNewNode(data,NULL,NULL,*rootRef);
		}
		else
		insertBST(&((*rootRef)->left),data);
	}
}

//print inorder
printInorder(treeNode *root)
{
	if(root==NULL)
	return;
	//Inorder - left root right
	printInorder(root->left);
	printf("%d",root->info);
	printInorder(root->right);
}

int main()
{
	treeNode *root = NULL;
	insertBST(&root,6);
	insertBST(&root,4);
	insertBST(&root,9);
	insertBST(&root,5);
	printInorder(root);
	return 0;
}
