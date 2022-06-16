package linearDataStructure;

public class Quueue {
	Node head=null,tail=null;
	private void enque(int i) {
		Node n = new Node();
		n.data = i;
		n.next = null;
		if(head == null) {
			head = n;
			tail = n;
			System.out.println("First node created");
		}
		else {
			tail.next = n;
			tail = tail.next;
			System.out.println("node created");
		}	
	}
	
	private void display() {
		Node temp = head;
		while(temp != null) {
			System.out.println(temp.data);
			temp = temp.next;
		}
	}
	
	
	private void deque() {
		System.out.println("Deleted element is:"+head.data);
		head = head.next;
	}
	
	public static void main(String[] args) {
		Quueue que = new Quueue();
		que.enque(5);
		que.enque(8);
		que.enque(2);
		que.enque(7);
		que.display();
		que.deque();
		que.display();
	}


	


	


	

}
