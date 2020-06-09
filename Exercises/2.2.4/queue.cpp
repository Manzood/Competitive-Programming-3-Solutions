// implementing an efficient queue using a linked list 

#include<bits/stdc++.h>
using namespace std;
#define debug(x) cout<<#x<<" = "<<x<<endl;

struct Node {
	int val;
	Node *next;
	Node *prev;
	Node *head;
	Node *tail;
};
struct Node *Queue;

void init () {
	Queue= (struct Node *) malloc (sizeof(struct Node));
	Queue->next=NULL;
	Queue->prev=NULL;
	Queue->head=Queue;
	Queue->tail=Queue;
}

void push (int n) {
	if (Queue->head==Queue->tail) {
		Queue->head->val=n;
	}
	Queue->tail->next=(struct Node *) malloc (sizeof(struct Node));
	Queue->tail->next->val=n;
	Queue->tail->next->prev=Queue->tail;
	Queue->tail->next->head=Queue->tail->head;
	Queue->tail=Queue->tail->next;
	Queue->tail->next=NULL;
}

void pop() {
	Queue->head=Queue->head->next;
}

int front() {
	return Queue->head->val;
}

int back() {
	return Queue->tail->val;
}

void empty() {
	Queue->head=NULL;
	Queue->next=NULL;
	Queue->tail=NULL;
	Queue->prev=NULL;
}

int main() {
	init();
	push(3);
	push(4);
	debug(front());
	debug(back());
	push(5);
	debug(back());
	pop();
	debug(front());
	push(3);
	debug(front());
	debug(back());
	empty();
	debug(front());
}