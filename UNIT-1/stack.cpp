#include <iostream>

using namespace std;

struct node{
int data;
struct node* next;
};

void pop(node* &top)
{
if(top==NULL)
return;

node* temp=top;
top=top->next;
delete temp;
}

void push(node* &top,int key)
{
node* temp=new node;
temp->data=key;
temp->next=NULL;

if(top==NULL)
{
top=temp;
return;
}

temp->next=top;
top=temp;
}

void print(node* &top)
{
node* temp=top;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}

int main()
{
node* top=NULL;
push(top,3);
push(top,4);
push(top,5);
push(top,6);
push(top,7);

pop(top);
pop(top);
pop(top);

print(top);

return 0;
}