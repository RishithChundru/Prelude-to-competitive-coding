#include <iostream>

using namespace std;

struct node{
int data;
struct node* next;
};

void reverseaqueue(node* &front, node* &rear){
    if(front==NULL){
        return;
    }
    node* temp1=NULL;
    node* temp2=front;
    node* temp3=front->next;
    front=rear;
    rear=temp2;
    while(temp2!=NULL){ 
        temp3=temp2->next;
        temp2->next=temp1;
        temp1=temp2;
        temp2=temp3;
    }
}
void reverse_print(node* &front){
    node *temp=front;
    if(temp==NULL){
        return;
    }
    reverse_print(temp->next);
    cout<<temp->data<<" ";
}
void dequeue(node* &front,node* &rear)
{
if(front==NULL)
return;

node* temp= front;
front=front->next;
delete temp;
}

void enqueue(node* &front,node* &rear,int key)
{
node *temp=new node;
temp->data=key;
temp->next=NULL;

if(front==NULL)
{
front=rear=temp;
return;
}

rear->next=temp;
rear=rear->next;
}

void print(node* front)
{
node* temp=front;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}

int main()
{
node *front=NULL,*rear=NULL;
enqueue(front,rear,2);
enqueue(front,rear,3);
enqueue(front,rear,4);
enqueue(front,rear,5);
enqueue(front,rear,6);
enqueue(front,rear,7);

// dequeue(front,rear);
// dequeue(front,rear);
// dequeue(front,rear);
reverse_print(front);
cout<<endl;
reverseaqueue(front,rear);
print(front);
return 0;
}