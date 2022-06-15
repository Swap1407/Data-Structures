#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
} *top = NULL;          //empty stack

class stack
{
	public:
		int n;
	
	void push()
	{
		node *temp = new node;
		cout << "Enter the Element:" << endl;
		cin >> n;
		temp -> data = n;                  // element set to data of temp
		
		if(top == NULL)                 //if top is null, temp node will be top node and next field of temp will be null 
		{
			temp -> next = NULL;
			cout << "1st Node Created" << endl;
		}
		else                            //temp node will be top node and next field of temp will be initial top 
		{
			temp -> next = top;
			cout << "Node Created" << endl;
		}
		top = temp;
	}
	
	void pop()
	{
		if(top == NULL)
		{
			cout << "Stack is Empty" << endl;
		}
		
		else                            // set top of linked list to temp and set next node to top and delete the temp
		{
			node *temp = top;
			cout << "Deleted Element is: " << temp -> data << endl;
			top = temp -> next;
			delete(temp);
		}
	}
	
	void display()
	{
		if(top == NULL)
		{
			cout << "Stack is Empty:" << endl;
		}
		else                                  // set top of linked list to temp and increment temp untill temp becomes null
		{
			node *temp = top;
			cout << "Status of Stack is:" << endl;
			while(temp != NULL)
			{
				cout << temp -> data << " " ;
				temp = temp -> next;
			}
			cout << endl;
		}
	}
};

int main()
{
	stack a;
	a.push();
	a.push();
	a.push();
	a.display();
	a.pop();
	a.pop();
	a.pop();
	a.pop();
	a.display();
	
	return 0; 
}

 
