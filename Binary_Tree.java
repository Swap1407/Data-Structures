package trees;

public class Binary_Tree {
	public void insert(Node_tree node,int data) {
		if(data<node.data) {
			if(node.left != null) {
				insert(node.left,data);
			}
			else {
				System.out.println("Left Node Inserted: "+data+" to left of node: "+node.data);
				node.left = new Node_tree(data);
			}
		}
		else if(data>node.data) {
			if(node.right != null) {
				insert(node.right,data);
			}
			else {
				System.out.println("Right Node Inserted: "+data +" to right of node: "+node.data);
				node.right = new Node_tree(data);
			}
		}
	}
	
	public void preorder(Node_tree node) {
		if(node != null) {
			System.out.print(node.data+" ");
			preorder(node.left);
			preorder(node.right);
		}
	}
  
	public void postorder(Node_tree node) {
		if(node != null) {
			postorder(node.left);
			postorder(node.right);
			System.out.print(node.data+" ");
		}
	}
   
	public void inorder(Node_tree node) {
		if(node != null) {
			inorder(node.left);
			System.out.print(node.data+" ");
			inorder(node.right);
		}
	}
	
	
	public static void main(String[] args) {
		Binary_Tree BT = new Binary_Tree();
		Node_tree root = new Node_tree(50);
		BT.insert(root,25);
		BT.insert(root,47);
		BT.insert(root,22);
		BT.insert(root,66);
		BT.insert(root,100);
		BT.insert(root,15);
		BT.insert(root,56);
		BT.insert(root,89);
		BT.insert(root,10);
		BT.insert(root,0);
		BT.preorder(root);
		System.out.println(" :Preorder: ");
		BT.postorder(root);
		System.out.println(" :Postorder: ");
		BT.inorder(root);
		System.out.println(" :inorder: ");
		
	}

}
