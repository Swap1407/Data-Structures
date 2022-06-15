package linearDataStructure;
import java.util.*;
public class Stack_Class {
	public static void main(String[] args) {
		
		Stack<Integer> stack = new Stack<Integer>();  
        // Use push() to add elements into the Stack
        stack.push(6);
        stack.push(4);
        stack.push(20);
        stack.push(8);
        stack.push(5);
  
        // Displaying the Stack
        System.out.println("Initial Stack: " + stack);
  
        // Fetching the element at the head of the Stack
        System.out.println("The element at the top of the"+ " stack is: " + stack.peek());
  
        // Displaying the Stack after the Operation
        System.out.println("Final Stack: " + stack);
        
        System.out.println("Popped element: "+ stack.pop());
        
        // Displaying the Stack after pop operation
        System.out.println("Stack after pop operation "+ stack);
        
        //check stack is empty
        System.out.println(stack.empty());
        
       //check element is present or not
        System.out.println(stack.contains(20));
	}

}
