{\rtf1\ansi\ansicpg1252\cocoartf2638
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;\red64\green68\blue76;\red255\green255\blue255;\red64\green68\blue76;
}
{\*\expandedcolortbl;;\cssrgb\c31765\c33725\c36863;\cssrgb\c100000\c100000\c100000;\cssrgb\c31765\c33725\c36863;
}
\margl1440\margr1440\vieww28300\viewh17700\viewkind0
\deftab720
\pard\pardeftab720\sa520\partightenfactor0

\f0\fs32 \cf2 \cb3 \expnd0\expndtw0\kerning0
\outl0\strokewidth0 \strokec2 /* Sample  C++ source code to demonstrate   operations on Doubly Linked List*/\
#include <new>\
#include <iostream>\
using namespace std;\
/* Doublly Linked list implementation   */\
class doubleLinkList;\
class Node\
\{\
private:\
int & data;\
Node* next;\
Node* prev;\
friend class doubleLInkList;\
public:\
   Node(int num = 0) : data(num) \
     \{ \
        prev = NULL; \
        next = NULL;\
     \}\
 virtual ~node() \{ \}\
\};\
\
class doubleLinkList \{\
public:\
\pard\pardeftab720\sa520\partightenfactor0
\cf4 \cb3 \outl0\strokewidth0 doubleLinkList() \{ \};\
virtual ~ doubleLinkList() \{ \}\cf2 \cb3 \outl0\strokewidth0 \strokec2 \
\cf4 \cb3 \outl0\strokewidth0 void deleteNode(Node** head, Node* del);\
void addBegin(Node** head, int newdata);\
void printList(Node* node);\
void deleteNode(Node** head, Node* del);\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 \cb3 \outl0\strokewidth0 \strokec2 \};\
/*Method to delete a node from the List.*/\
void deleteNode(Node** head, Node* del)\
\{\
if (*head == NULL || del == NULL)\
return;\
/* If head node is the node to be deleted */\
if (*head == del)\
*head = del->next;\
/* Change next only if node to be\
deleted is NOT the last node */\
if (del->next != NULL)\
del->next->prev = del->prev;\
/* Change prev only if node to be\
deleted is NOT the first node */\
if (del->prev != NULL)\
del->prev->next = del->next;\
/* Finally, free the memory occupied by del*/\
free(del);\
return;\
\}\
/* Mehod to  insert a node at the beginning of the list*/\
void addBegin(Node** head, int newdata)\
\{\
/* create newnode */\
int i =0;\
Node* newnode = new Node(i);\
/* put in the data */\
newnode->data = newdata;\
/* link the new node's next to head\
and previous as NULL */\
newnode->next = (*head);\
newnode->prev = NULL;\
/* link the head node's prev to new node */\
if ((*head) != NULL)\
(*head)->prev = newnode;\
/* changing head */\
(*head) = newnode;\
\}\
/* Method to print nodes in the linked list. */\
void printList(Node* node)\
\{\
while (node != NULL)\
\{\
cout << node->data << " ";\
node = node->next;\
\}\
\}\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 \cb3 \strokec2 void traverse(Node *node)\
\{\
while(node != NULL)\
\{\
cout << node->data << " ";\
node = node->next;\
\}\
\}\
/* Method to reverse traverse List */\
void revTraverse(Node **head)\
\{\
Node* tail = *head;\
\'a0\'a0\'a0\'a0while (tail->next != NULL)\
   \{\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0tail = tail->next;\
\'a0\'a0\'a0\'a0\}\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 \cb3 \strokec2 \}\
int main()\
\{\
/* Start with the empty list */\
Node* head = NULL;\
\pard\pardeftab720\sa520\partightenfactor0
\cf4 \cb3 \outl0\strokewidth0 doubleLinkList dList = NULL;\cf2 \cb3 \outl0\strokewidth0 \strokec2 \
\pard\pardeftab720\sa520\partightenfactor0
\cf2 /*  Example list   elements 10<->20<->30<->40  */\
int val = 40;\
\pard\pardeftab720\sa520\partightenfactor0
\cf4 \cb3 \outl0\strokewidth0 dList .\cf2 \cb3 \outl0\strokewidth0 \strokec2 addBegin(&head, val);\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 val = 30;\
\pard\pardeftab720\sa520\partightenfactor0
\cf4 \cb3 \outl0\strokewidth0 dList .\cf2 \cb3 \outl0\strokewidth0 \strokec2 addBegin(&head, val);\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 val = 20;\
\pard\pardeftab720\sa520\partightenfactor0
\cf4 \cb3 \outl0\strokewidth0 dList .\cf2 \cb3 \outl0\strokewidth0 \strokec2 addBegin(&head, val);\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 val = 10;\
\pard\pardeftab720\sa520\partightenfactor0
\cf4 \cb3 \outl0\strokewidth0 dList .\cf2 \cb3 \outl0\strokewidth0 \strokec2 addBegin(&head, val);\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 cout << "Original Linked list ";\
\pard\pardeftab720\sa520\partightenfactor0
\cf4 \cb3 \outl0\strokewidth0 dList .\cf2 \cb3 \outl0\strokewidth0 \strokec2 printList(head);\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 /* delete nodes from the linked list */\
\pard\pardeftab720\sa520\partightenfactor0
\cf4 \cb3 \outl0\strokewidth0 dList .\cf2 \cb3 \outl0\strokewidth0 \strokec2 deleteNode(&head, head); /*delete first node*/\
\cf4 \cb3 \outl0\strokewidth0 dList .\cf2 \cb3 \outl0\strokewidth0 \strokec2 deleteNode(&head, head->next); /*delete middle node*/\
\cf4 \cb3 \outl0\strokewidth0 dList .\cf2 \cb3 \outl0\strokewidth0 \strokec2 deleteNode(&head, head->next); /*delete last node*/\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 cout << "\\nModified Linked list ";\
\pard\pardeftab720\sa520\partightenfactor0
\cf4 \cb3 \outl0\strokewidth0 dList .\cf2 \cb3 \outl0\strokewidth0 \strokec2 printList(head);\
\pard\pardeftab720\sa520\partightenfactor0
\cf2 return 0;\
\}\
}