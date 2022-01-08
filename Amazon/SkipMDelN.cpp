include <bits/stdc++.h>
using namespace std;
class Node 
{ 
    public:
    int data; 
    Node *next; 
}; 
void push(Node ** head, int new_data) 
{ 
    Node* new_node = new Node();
    new_node->data = new_data; 
    new_node->next = (*head); 
    (*head) = new_node; 
} 
void printList(Node *head) 
{ 
    Node *temp = head; 
    while (temp != NULL) 
    { 
        cout<<temp->data<<" "; 
        temp = temp->next; 
    } 
    cout<<endl; 
} 
void skipMdeleteN(Node *head, int m, int n) 
{ 
    Node *curr = head, *t; 
    int count; 
    while (curr) 
    {
        for (count = 1; count < m && 
                curr!= NULL; count++) 
            curr = curr->next; 
        if (curr == NULL) 
            return; 
        t = curr->next; 
        for (count = 1; count<=n && t!= NULL; count++) 
        { 
            Node *temp = t; 
            t = t->next; 
            delete(temp); 
        } 
        curr->next = t; 
        curr = t; 
    } 
} 
int main() 
{ 
    Node* head = NULL; 
    int m=2, n=3; 
    push(&head, 10); 
    push(&head, 9); 
    push(&head, 8); 
    push(&head, 7); 
    push(&head, 6); 
    push(&head, 5); 
    push(&head, 4); 
    push(&head, 3); 
    push(&head, 2); 
    push(&head, 1); 

    cout << "M = " << m<< " N = " << n << "\nGiven Linked list is :\n"; 
    printList(head); 

    skipMdeleteN(head, m, n); 

    cout<<"\nLinked list after deletion is :\n"; 
    printList(head); 

    return 0; 
} 
