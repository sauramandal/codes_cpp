#include <iostteam>
using namespace std;
typedef struct node {
	int priority;
	struct node *next;
}node;
node *insert(node *head,int data) {
	node *t=new node();
	t->priority=data;
	t->next=NULL;
	node *p=head;
	if(head==NULL){
		head=t;
		return head;
	}
	else {
		while(p->next!=NULL)
			p=p->next;
		p->next=t;
		return head;
	}
}
node *del(node *head,int x) {
	if(head==NULL)
		return head;
	node *p=head,*q=head;
	if(p->priority==x){
		p=p->next;
		head=p;
	}
	else {
	while(p->next!=NULL) {
		q=p;
		p=p->next;
		if(p->priority==x){
			q->next=p->next;
			break;
		}
	}
	}
}
int main() {
	int t;
	cin>>t;
	while(t--) {
		node *head=NULL;
		int n,k,data;
		cin>>n>>k;
		for(int i=0;i<n;i++){
			cin>>data;
			head=insert(head,data);
		}
		int count=(n-k);
		node *p=head; node *q=head->next;
		while(p->next!=NULL&&q->next!=NULL && count--) {
		       if(p->priority<q->priority) {
			       head=del(head,p);
			       
		       }
		       else {
			       p=p->next;
			       q=p->next;

		       }
		}	       
	}
	return 0;
}
