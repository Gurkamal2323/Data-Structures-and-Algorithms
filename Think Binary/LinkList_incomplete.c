#include<iostream>
using namespace std;

/**
 * Structure for linked list node
 */
 struct list_node {
 	int data;
 	struct list_node* next;
 };
 typedef struct list_node node;


/**
 * function to create a new link list node
 * @param  data [data for the new node]
 * @param  next [link for the next node the new node will point to]
 * @return      [address of the newly created node]
 */
 node* createNewNode(int data, node* next);


/**
 * Use this function to create a random list - each list node data will be of range 0 to length-1
 * @param  length 	[the number of list nodes to create]
 * @return newHead  [pointer to the head of the newly created list]
 */
 node* initializeRandomList(int length);

/**
 * Print all elements of the linked list seperated by spaces
 * @param p [pointer to the head of the list to be printed]
 */
 void print(node* p);

/**
 * Returns the length of a singly liked list
 * @param  head [pointer to start of the link list]
 * @return len  [length of the link list]
 */
 int length(node* head);

/**
 * Add a node to the front
 * @param headRef [pointer to  a pointer to start of the link list]
 * @param data [Data value of the new node to be added]
 */
 void addFront(node** headRef, int data);

/**
 * Add a node to the end of a link list
 * @param headRef [pointer to  a pointer to start of the link list]
 * @param data [Data value of the new node to be added]
 */
 void addEnd(node** headRef, int data) {
 	if(*headRef==NULL) {
 		*headRef = createNewNode(data, NULL);
 		return;
 	}

 	node* p = *headRef;
 	while(p->next!=NULL) {
 		p = p->next;
 	}
 	p->next = createNewNode(data, NULL);

 	return;
 }

/**
 * Auxilary function using the addEnd function to create the list
 * Use this function to create a random list - each list node data will be of range 0 to length-1
 * @param  length 	[the number of list nodes to create]
 * @return newHead  [pointer to the head of the newly created list]
 */
 node* initializeRandomListAux(int length);

/**
 * Remove the first node of the link list
 * @param headRef [pointer to  a pointer to start of the link list]
 */
 void removeFront(node** headRef);

/**
 * Remove the last node of the link list
 * @param headRef [pointer to  a pointer to start of the link list]
 */
 void removeEnd(node** headRef);

/**
 * Reverse a link list by modifying pointers
 * @param headRef [pointer to  a pointer to start of the link list]
 */
 void reverseList(node** headRef);

/**
 * Delete nodes of a linklist searching based on value passed using data parameter
 * @param head [pointer to start of the link list]
 * @param data [value to be searched and deleted]
 */
void deleteByValue(node* head, int data);

/**
 * Replace values of all nodes with value 'data' with the new value provided by newData parameter.
 * @param head    [pointer to start of the link list]
 * @param data    [value to be searched and replaced]
 * @param newData [new value to be updated]
 */
void replaceValue(node* head, int data, int newData);

int main() {

 	srand(321);
 	node* h1 = initializeRandomListAux(5);
 	print(h1);
	// node* h2 = initializeRandomList(10);
	// print(h2);
	// node* h3 = initializeRandomList(8);
	// print(h3);

 	addFront(&h1,1);
 	addEnd(&h1,5);
 	addFront(&h1,2);
 	print(h1);

 	removeEnd(&h1);
 	removeEnd(&h1);
 	removeFront(&h1);
 	removeFront(&h1);
	// removeFront(&h1);
	// removeFront(&h1);
	// removeFront(&h1);
	// removeEnd(&h1);
 	print(h1);

 	reverseList(&h1);
 	print(h1);
 	reverseList(&h1);
 	print(h1);

 	return 0;
}