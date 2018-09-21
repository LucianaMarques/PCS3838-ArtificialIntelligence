#include <iostream>
using namespace std;

/* Conditions considered to answer:
1- Shepherd must always be on the boat
2 - Sheep can't be with lettuce alone in one side of the river
3 - Wolf can't be with sheep alone in one side of the river
*/

/* every node consists in the place of shepherd, sheep, wolf and lettuce. 
0 - left side of the river 1 - right side of the river */

struct node
{
	int shepherd = 0;
	int sheep = 0;
	int wolf = 0;
	int lettuce = 0;	
	node* next = null;
};

void create_new_node(node* n);

int main ()
{
	node* head = new node(); //everyone on the left side of the river	
	return 0;
}

void create_new_node(node* n)
{
	node* new_node = new node();
	if ((n->shepherd == 1) && (n->sheep == 1) && (n->wolf == 1) && (n->lettuce == 1))
	{
		cout << "(" << shepherd << sheep << wolf << lettuce << endl;
		cout << "Found desired state" << endl;
		return;	
	}

	/*It is mandatory that the shepherd enters the boat */
	if (shepherd == 0)
	{
		node->shepherard = 1;
	}	
	else
	{
		shepherd = 0;
	}
		
}

node* create_tree
