package com.linkedlist;

public class llist {
	Node head;
	
	//insert node at the start of list
	void insertfirst(int d){
		Node n=new Node();
		n.data=d;
		
		//if list is empty set new node as head node
		if(head==null){
			head=n;
			n.next=null;
		}
		
		//else store address of head in new node and set new node as head
		else{
			n.next=head;
			head=n;
		}
	}
	
	void insertlast(int d){
		Node n=new Node();
		
		n.data=d;
		n.next=null;
		
		//iterate till last node of list
		Node temp=head;
		while(temp.next!=null){
			temp=temp.next;
		}
		//set new node as a last node of list
		temp.next=n;
	}
	
	void insertAt(int p,int d){
		Node n=new Node();
		n.data=d;
		
		//calc size of list
		Node temp=head;
		int l=0;
		while(temp!=null){
			temp=temp.next;
			l++;
		}
		
		//if position given is valid
		if(p<l){	
			temp=head;
			Node prev=null;
			//iterate till reach at given position
			while(p-->0){
				prev=temp;
				temp=temp.next;
			}
			//insert node at position
			prev.next=n;
			n.next=temp;
		}
		
		//position given is not valid
		else {
			System.out.println("Invalid Position Entered...");
		}
	}
	
	void deletefirst() {
		//if list is empty 
		if(head==null) {
			System.out.println("List is Empty...");
			return;
		}
		//set head as next node in the list
		Node temp = head;
		temp = temp.next;
		head = temp;
	}
	
	void deleteAt(int d){
		//if list is empty
		if(head==null) {
			System.out.println("List is Empty...");
			return;
		}
		
		Node temp =head, prev = null;
		//if data is found at head
		if(head != null && head.data == d) {
			head = head.next;
			return;
		}
		
		//iterate through list to find data
		int flag=0;
		while(temp!=null){   
			//when data found
			if(temp.data==d){
				//set the address of next to next node in prev node
				prev.next=temp.next;
				flag=1;
			}
			prev=temp;
			temp=temp.next;
		}
		//if key is not present in list
		if(flag==0) {
			System.out.println("key not present in list...");
		}
	}
	
	void deletelast() {
		Node temp = head;
		if(head==null) {
			System.out.println("List is Empty...");
			return;
		}
		

        if (head.next == null) {
        	head = null;
            return;
        }
 
        // Find the second last node
        while (temp.next.next != null) {
        	temp = temp.next;
        }
        // Change next of second last
        temp.next = null;
	}
	
	
	void print(){
		Node temp=head;
		while(temp!=null){
			System.out.println(temp.data);
			temp=temp.next;
		}
	}
	
	public static void main(String []args){
		llist l=new llist();
		l.insertfirst(2);
		l.insertfirst(3);
		l.insertfirst(6);
		l.insertfirst(4);
		l.insertfirst(121);
		l.insertlast(9);
		l.insertAt(1, 10);
		l.deletefirst();
		l.deletelast();
		l.deleteAt(3);
		l.print();
	}
}