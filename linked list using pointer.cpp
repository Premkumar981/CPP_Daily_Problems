#include<iostream>
using namespace std;

struct Node{
	int data;
	struct Node * next;
};
struct Node *head,*temp;
int main(){
	
	struct Node * one = new Node();
	struct Node * two = new Node();
	struct Node * three = new Node();
	
	head = one;
	one->next = two;
	two->next = three;
	three->next = NULL;
	
	one->data = 21;
	two->data = 33;
	three->data = 54;
	temp = head;
	
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	return 0;
}
