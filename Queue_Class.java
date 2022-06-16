package linearDataStructure;
import java.util.LinkedList;
import java.util.Queue;

public class Queue_Class {

	public static void main(String[] args)
	{
		Queue<Integer> q = new LinkedList<>();
		q.add(2);
		q.add(7);
		q.add(26);
		q.add(5);

		System.out.println("Elements of queue "+ q);

		// To remove the head of queue.
		System.out.println("removed element: "+ q.remove());

		System.out.println(q);

		// To view the head of queue
		System.out.println("head of queue: "+ q.peek());

		/* Rest all methods of collection interface like size and contains
		 can be used with this implementation.*/
		System.out.println("Size of queue: "+ q.size());
	}
}
