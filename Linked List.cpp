#include<iostream>
using namespace std;

struct node{
	int data;
	node *next;
}*head,*tail = NULL;

class linked_list{
	public:
	void createnode(){
		int n;
		node *temp = new node;
		cout << "Enter the Element:" << endl;
		cin >> n;
		
		temp -> data = n;
		temp -> next = NULL;
		
		if(head == NULL){
				head = temp;
				tail = temp;
				cout << "First Node Created..." << endl;
			}
			else{
				tail -> next = temp;
				tail = tail -> next;
				cout << "Node Created..." << endl;
			}
	}
	
	void insert_start(){
		int n;
		node *temp = new node;
		cout << "Enter the Element :" << endl;
		cin >> n;
		
		temp -> data = n;
		temp -> next = head;
		head = temp;
		cout << "Node Inserted at start succesfully..." << endl;
	}
	
	void insert_end(){
		int n;
		node *temp = new node;
		cout << "Enter the Element:" << endl;
		cin >> n;
		
		temp -> data = n;
		temp -> next = NULL;
		tail = head;
		
		while(tail -> next != NULL){
			tail = tail -> next;
		}
		tail -> next = temp;
		cout << "Node Inserted at end succesfully..." << endl;
	}
	
	void insert_any(){
		int n,loc;
		node *temp = new node;
		node *current;
		current = head;
		cout << "Enter the element" << endl;
		cin >> n;
		cout << "Enter the position to which it is supposed to be added..." << endl;
		cin >> loc;
		
		for(int i = 0; i < loc; i++){
			current = current -> next;
		}
		temp -> data = n;
		temp -> next = current -> next;
		current -> next = temp;
		cout << "Node Inserted at position:" << loc << endl;
	}
	
	void del_start(){
		node *temp;
		temp = head;
		head = head -> next;
		cout << "Deleted number is: " << temp -> data << endl;
		delete (temp);
		cout << "Element at start deleted succefully..." << endl;
	}
	
	void del_end(){
		node *temp,*tail;
		temp = head;
		
		while(temp -> next != NULL){
			tail = temp;
			temp = temp -> next;
		}
		tail -> next = NULL;
		cout << "Deleted number is: " << temp -> data << endl;
		delete(temp);
	}
	
	void del_any(){
		node *temp , *current;
		current = head;
		int loc;
		cout << "Enter position to which deleted..." << endl;
		cin >> loc;
		
		for(int i; i < loc; i++){
			temp = current;
			current = current -> next;
		}
		temp -> next = current -> next;
		cout << "Deleted Element is:" << current -> data << endl;
		delete(temp);
	}
	
	void display(){
		node *temp;
			temp = head;
			if(head == NULL){
				cout << "List is Empty:" << endl;
			}
			else{
				cout << "Elements of List:" << endl;
				while(temp != NULL){
					cout  << temp -> data << "  ";
					temp = temp -> next;
				}
				cout << endl;
			}
	}
};

int main(){
	linked_list a;
	int choice,i;
	
		cout << endl;
		cout << "1. Create Node" << endl << "2. Insert Node at Start" << endl << "3. Insert Node at End" << endl << "4. Insert node at particular Position" << endl << "5. Delete Node at Start" << endl << "6. Delete Node at End:" << endl << "7. Delete Node at particular Position" << endl << "8. Display" << endl << "9. Exit" << endl;
		
	while(1){	
	    cout << "Enter your Choice";
		cin >> choice;
		
		switch(choice){
			case 1: a.createnode();
			break;
			case 2: a.insert_start();
			break;
			case 3: a.insert_end();
			break;
			case 4: a.insert_any();
			break;
			case 5: a.del_start();
			break;
			case 6: a.del_end();
			break;
			case 7: a.del_any();
			break;
			case 8: a.display();
			break;
			default:
				exit(0);
		}
	}
	return 0;
}
