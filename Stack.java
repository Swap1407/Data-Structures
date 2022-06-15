package linearDataStructure;

public class Stack {
	Node top;
	void Push(int value) {
		Node n = new Node();
		n.data = value;
		if(top == null) {       //if top is null, temp node will be top node and next field of temp will be null
			n.next = null;
			System.out.println("First Number Added: "+value);
		}
		else {                  //temp node will be top node and next field of temp will be initial top
			n.next = top;
			System.out.println("Number Added: "+value);
		}
		top = n;
	}
	
	void Pop() {
		Node temp = top;
		if(top == null) {
			System.out.println("Stack is Empty");
		}
		else {                   //temp node will be top of stack and next node of temp will be top and delete the temp
			System.out.println("Deleted number is :"+temp.data);
			top = temp.next;
		}
	}
	
	void Display() {
		System.out.println("Stack Elements are: ");
		Node temp=top;
		while(temp!=null){
			System.out.println(temp.data);
			temp=temp.next;
		}
	}
	
	public static void main(String args[]) {
		Stack stk = new Stack();
		stk.Push(5);
		stk.Push(6);
		stk.Push(7);
		stk.Display();
		stk.Pop();
		stk.Display();
		stk.Push(10);
		stk.Display();
	}
}
