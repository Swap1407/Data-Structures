#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
} *head,*tail = NULL;    //empty queue

class que
{
	public:
		void enque()
		{
			int n;
			node *tmp = new node;
			cin >> n ;
			
			tmp -> data = n;
			tmp -> next = NULL;
			
			if(head == NULL)
			{
				head = tmp;
				tail = tmp;
				cout << "First Node Created:" << endl;
			}
			else
			{
				tail -> next = tmp;
				tail = tail -> next;
				cout << "Node Created:" << endl;
			}
		}
		
		void deque()
		{
			node *tmp;
			if(head == NULL)
			{
				cout << "Linked list is Empty:" ;
			}
			else
			{
				tmp = head;
				cout << "Deleted element :" << head -> data << endl;
				head = head -> next;
				delete (tmp);
			}
		}
		
		void display()
		{
			node *tmp;
			tmp = head;
			if(head == NULL)
			{
				cout << "Queue is Empty:" ;
			}
			else
			{
				cout << "Elements of Queue:";
				while(tmp != NULL)
				{
					cout  << tmp -> data << "  ";
					tmp = tmp -> next;
				}
			}
		}
};


int main()
{
	que a;
	int choice,i;
	
	
		cout << endl;
		cout << "1. EnQueue" << endl << "2. deQueue" << endl << "3. Display" << endl << "4. Exit" << endl;
	
	while(1)
	{
		cout << endl;
		cout << "Enter your Choice";
		cin >> choice;
		
		switch(choice)
		{
			case 1: 
			cout << "Enter the Element:" << endl ;
			for(i = 0 ; i < 3 ; i++)
			{
				a.enque();
			}
			break;
			case 2: a.deque();
			break;
			case 3: a.display();
			break;
			default:
				exit(0);
		}
	}
	return 0;
}

