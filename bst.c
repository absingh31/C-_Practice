#include <stdio.h>
#include <stdlib.h>

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node* GetNewNode(int data)
{
	struct Node* newNode = (struct Node*)calloc(1, sizeof(struct Node));
	newNode->data = data;
	newNode->left = NULL;
	newNode->right = NULL;

	return newNode;
}

struct Node* insert(struct Node **root, int data)
{
	if(root == NULL)
	{
		root = GetNewNode(data);
		return root;
	} 

	if(data < (root->data))
	{
		root->left = insert(root->left, data);
	}
	else
	{
		root->right = insert(root->right, data);
	}
	return root;
}

struct Node* search(struct Node *root, int to_search)
{
	if(root == NULL || root->data == to_search)
		return root;

	if(root->data < to_search)
		return search(root->right, to_search);
	
	else
		return search(root->left, to_search);
}

void inorder(struct Node **root)
{
	if(root == NULL)
		return;

	inorder(root->left);
	printf("%d\t", root->data);
	inorder(root->right);
}

void preorder(struct Node *root)
{
	if(root == NULL)
		return;

	printf("%d\t", temp->data);
	preorder(root->left);
	preorder(root->right);
}

void postorder(struct Node *root)
{
	if(root == NULL)
		return;

	postorder(root->left);
	postorder(root->right);
	printf("%d\t", root->data);
}

int height(struct Node *root)
{
	if(root == NULL)
	{
		return 0;
	}

	else
	{
		int lheight = height(root->left);
		int rheight = height(root->right);
		
		if(lheight > rheight)
			return (lheight+1);
		else
			return (rheight+1);
	}
}

void printGivenLevel(struct Node **root, int level)
{
	if(*root == NULL)
		return;

	if(level < 1)
		{printf("OOPS! Level starts with 1\n"); return;}
	struct Node *temp;
	temp = *root;

	if(level == 1)
		printf("%d\n", temp->data);
	else if(level > 1)
	{
		printGivenLevel(&temp->left, level-1);
		printGivenLevel(&temp->right, level-1);
	}
}

void levelorder(struct Node **root)
{
	if(*root == NULL)
		return;

	struct Node *temp;
	temp = *root;

	int h = height(&temp);

	for(int i=0; i<h; i++)
	{
		printf("%d\t", temp->data);
		printGivenLevel(&temp, i);
	}
}

struct Node* minValueNode(struct Node *root)
{
	if(root == NULL)
	{
		printf("OOPS!! there doesnot exist a tree for me\n");
		return NULL;
	}
	struct Node *current = root;

	while(current->left != NULL)
	{
		current = current->left;
	}
	return current;
}

struct Node* maxValueNode(struct Node *root)
{
	if(root == NULL)
	{
		printf("OOPS!! there doesnot exist a tree for me\n");
		return NULL;
	}

	struct Node *current = root;

	while(current->right != NULL)
	{
		current = current->right;
	}
	return current;
}

struct Node* delete(struct Node *root, int to_delete)
{
	if(root == NULL)
		return root;

	if(to_delete < root->data)
	{
		root->left = delete(root->left, to_delete);
	}
	else if(to_delete > root->data)
	{
		root->right = delete(root->right, to_delete);
	}
	else
	{
		if(root->left == NULL)
		{
			struct Node *new_node;
			new_node = root->left;
			free(root);
			return new_node; 
		}
		else
		{
			struct Node *new_node;
			new_node = root->right;
			free(root);
			return new_node;
		}

		struct Node *new_node = minValueNode(&temp->right);
		root->data = new_node->data;
		root->right = delete(root->right, new_node->data);
	}
	return root;
}

int countleaf(struct Node *root)
{
	if(root == NULL)
		return 0;

	if(root->left == NULL && root->right == NULL)
		return 1;

	else
		return countleaf(root->left) + countleaf(root->right);
}

void controller(struct Node **root)
{
	printf("Welcome to Binary Search Tree Demonstration\n");
	while(1)
	{
		printf("**********MENU**********\n");
		printf("\n\t Press 1 to insert data into binary tree\n\t Press 2 to search data\n\t Press 3 for inorder traversal\n\t Press 4 for preorder traversal\n\t Press 5 for postorder traversal\n\t Press 6 for levelorder traversal\n\t Press 7 to know the height\n\t Press 8 to print data in given level\n\t Press 9 to print the maximum value in tree\n\t press 10 to print minimum value in tree\n\t Press 11 to number of leaf nodes\n\t Press 12 to delete a node with given value\n\t Press 13 to exit\n");
		int x;
		scanf("%d", &x);
		switch(x)
		{
			case 1: printf("Enter the value to insert into tree\n");
					int to_insrt;
					scanf("%d", &to_insrt);
					insert(root, to_insrt);
					break;
			case 2: printf("Enter value to be searched in binary tree\n");
					int to_sear;
					scanf("%d", &to_sear);
					search(root, to_sear);
					break;
			case 3: inorder(root);
					break;
			case 4: preorder(root);
					break;
			case 5: postorder(root);
					break;
			case 6: levelorder(root);
					break;
			case 7: printf("Height of the tree is ");
					int h;
					h = height(root);
					printf("%d\n", h);
					break;
			case 8: printf("Enter the level number whose value you have to print\n");
					int lev;
					scanf("%d", &lev);
					printGivenLevel(root, lev);
					break;
			case 9: printf("Maximum value in the tree is \n");
					struct Node *max;
					max = maxValueNode(root);
					printf("%d\n", max->data);
					break;
			case 10:printf("Minimum value in the tree is \n");
					struct Node *min;
					min = minValueNode(root);
					printf("%d\n", min->data);
					break;
			case 11:printf("Number of leaf nodes are \n");
					int count = countleaf(root);
					printf("%d\n", count);
					break;
			case 12:printf("Enter the data to be deleted\n");
					int val;
					scanf("%d", val);
					delete(root, val);
					break;
			case 13: exit(0);
			default: printf("OOPS!! you entered a wrong choice\n");
		}	
	}
}

int main()
{
	struct Node *root = NULL;
	controller(&root);
	return 0;
}