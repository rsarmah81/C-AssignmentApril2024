/* Sample  C++ source code to demonstrate   operations on Doubly Linked List*/
#include <new>
#include <iostream>
using namespace std;
/* Doublly Linked list implementation   */
class doubleLinkList;
class Node
{
private:
int & data;
Node* next;
Node* prev;
friend class doubleLInkList;
public:
   Node(int num = 0) : data(num) 
     { 
        prev = NULL; 
        next = NULL;
     }
 virtual ~node() { }
};

class doubleLinkList {
public:
doubleLinkList() { };
virtual ~ doubleLinkList() { }
void deleteNode(Node** head, Node* del);
void addBegin(Node** head, int newdata);
void printList(Node* node);
void deleteNode(Node** head, Node* del);
};
/*Method to delete a node from the List.*/
void deleteNode(Node** head, Node* del)
{
if (*head == NULL || del == NULL)
return;
/* If head node is the node to be deleted */
if (*head == del)
*head = del->next;
/* Change next only if node to be
deleted is NOT the last node */
if (del->next != NULL)
del->next->prev = del->prev;
/* Change prev only if node to be
deleted is NOT the first node */
if (del->prev != NULL)
del->prev->next = del->next;
/* Finally, free the memory occupied by del*/
free(del);
return;
}
/* Mehod to  insert a node at the beginning of the list*/
void addBegin(Node** head, int newdata)
{
/* create newnode */
int i =0;
Node* newnode = new Node(i);
/* put in the data */
newnode->data = newdata;
/* link the new node's next to head
and previous as NULL */
newnode->next = (*head);
newnode->prev = NULL;
/* link the head node's prev to new node */
if ((*head) != NULL)
(*head)->prev = newnode;
/* changing head */
(*head) = newnode;
}
/* Method to print nodes in the linked list. */
void printList(Node* node)
{
while (node != NULL)
{
cout << node->data << " ";
node = node->next;
}
}
void traverse(Node *node)
{
while(node != NULL)
{
cout << node->data << " ";
node = node->next;
}
}
/* Method to reverse traverse List */
void revTraverse(Node **head)
{
Node* tail = *head;
    while (tail->next != NULL)
   {
        tail = tail->next;
    }
}
int main()
{
/* Start with the empty list */
Node* head = NULL;
doubleLinkList dList = NULL;
/*  Example list   elements 10<->20<->30<->40  */
int val = 40;
dList .addBegin(&head, val);
val = 30;
dList .addBegin(&head, val);
val = 20;
dList .addBegin(&head, val);
val = 10;
dList .addBegin(&head, val);
cout << "Original Linked list ";
dList .printList(head);
/* delete nodes from the linked list */
dList .deleteNode(&head, head); /*delete first node*/
dList .deleteNode(&head, head->next); /*delete middle node*/
dList .deleteNode(&head, head->next); /*delete last node*/
cout << "\nModified Linked list ";
dList .printList(head);
return 0;
}
