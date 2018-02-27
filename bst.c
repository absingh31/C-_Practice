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

void insert(struct Node **root, int data)
{
	if(*root == NULL)
	{
		*root = GetNewNode(data);
		return;
	} 
	struct Node *temp;
	temp = *root;

	if(data < (temp->data))
	{
		insert(&temp->left, data);
	}
	else
	{
		insert(&temp->right, data);
	}
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

void inorder(struct Node *root)
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

	printf("%d\t", root->data);
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

void printGivenLevel(struct Node *root, int level)
{
	if(root == NULL)
		return;

	if(level == 1)
		printf("%d\n", root->data);
	else if(level > 1)
	{
		printGivenLevel(root->left, level-1);
		printGivenLevel(root->right, level-1);
	}
}

void levelorder(struct Node *root)
{
	int h = height(root);

	for(int i=0; i<=h; i++)
	{
		printGivenLevel(root, i);
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
			struct Node *new_node = root->right;
			free(root);
			return new_node; 
		}
		else
		{
			struct Node *new_node = root->left;
			free(root);
			return new_node;
		}

		struct Node *new_node = minValueNode(root->right);
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

/*RANDOM QUESTIONS FUNCTIONS*/
// PRINT NUMBERS BETWEEN THE GIVEN RANGE
void printrange(struct Node *root, int start, int end)
{
	if(root == NULL)
		return;

	if(start<(root->data))
		printrange(root->left, start, end);

	if(start<(root->data) && end>(root->data))
		printf("%d\n", root->data);

	if(end>(root->data))
		printrange(root->right, start, end);
}

void controller(struct Node **root)
{
	printf("\nWelcome to Binary Search Tree Demonstration\n");
	printf("**********MENU**********\n");
	printf("\n1. Press 1 to insert data into binary tree\n2. Press 2 to search data\n3. Press 3 for inorder traversal\n4. Press 4 for preorder traversal\n5. Press 5 for postorder traversal\n6. Press 6 for levelorder traversal\n7. Press 7 to know the height\n8. Press 8 to print data in given level\n9. Press 9 to print the maximum value in tree\n10.press 10 to print minimum value in tree\n11.Press 11 to number of leaf nodes\n12.Press 12 to delete a node with given value\n13.Press 13 to exit\n");
	while(1)
	{
		int x;
		printf("\nEnter your choice: ");
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
					struct Node *sear = search(*root, to_sear);
					if(sear->data == to_sear)
						printf("Match found\n");
					break;
			case 3: inorder(*root);
					break;
			case 4: preorder(*root);
					break;
			case 5: postorder(*root);
					break;
			case 6: levelorder(*root);
					break;
			case 7: printf("Height of the tree is ");
					int h;
					h = height(*root);
					printf("%d\n", h);
					break;
			case 8: printf("Enter the level number whose value you have to print\n");
					int lev;
					scanf("%d", &lev);
					printGivenLevel(*root, lev);
					break;
			case 9: printf("Maximum value in the tree is \n");
					struct Node *max;
					max = maxValueNode(*root);
					printf("%d\n", max->data);
					break;
			case 10:printf("Minimum value in the tree is \n");
					struct Node *min;
					min = minValueNode(*root);
					printf("%d\n", min->data);
					break;
			case 11:printf("Number of leaf nodes are \n");
					int count = countleaf(*root);
					printf("%d\n", count);
					break;
			case 12:printf("Enter the data to be deleted\n");
					int val;
					scanf("%d", val);
					struct Node *temp = *root;
					temp = delete(*root, val);
					break;
			case 13: exit(0);
			case 14: printf("Enter both the numbers\n");
					 int s,e;
					 scanf("%d\n%d", &s,&e);
					 printrange(*root, s, e);
					 break;
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