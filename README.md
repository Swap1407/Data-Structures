# Data-Structures
Explanation of data structures in C++ and JAVA
# 1) Linked List:
A linked list is a **linear data structure**, in which the elements are not stored at contiguous memory locations.

The consecutive elements are connected by pointers.

# The various types of linked lists are as follows:

**1)_Singly Linked List:_** It is the most basic linked list in which traversal is unidirectional i.e. from the head node to the last node.

**2)_Doubly Linked List:_** In this linked list, traversal can be done in both ways, and hence it requires an extra pointer.

**3)_Circular Linked List:_** This linked list is unidirectional but in this list, the last node points to the first i.e. the head node and hence it becomes circular in nature.

**4)_Circular Doubly Linked List:_** The circular doubly linked list is a combination of the doubly linked list and the circular linked list. It means that this linked list is bidirectional and contains two pointers and the last pointer points to the first pointer.

# Linked Lists are most commonly used for:
Linked Lists are mostly used because of their effective insertion and deletion (take less time complexity as compared to the array data structure). 

used to implement a **_stack, queues, and other abstract data structures_**.   

# Applications of Linked Lists:
It is used for the various representations of **_trees and graphs_**.

It is used in **_dynamic memory allocation_**( linked list of free blocks).

It is used for representing **_sparse matrices_**.

It is used for the **_manipulation of polynomials_**.

It is also used for performing **_arithmetic operations on long integers_**.

It is used for **_finding paths in networks_**.

# Applications of Linked Lists in real world: 
The list of songs in the music player are linked to the previous and next songs. 

In a web browser, previous and next web page URLs are linked through the previous and next buttons.

In image viewer, the previous and next images are linked with the help of the previous and next buttons.
Switching between two applications is carried out by using “alt+tab” in windows and “cmd+tab” in mac book. It requires the functionality of circular linked list.

In mobile phones, we save the contacts of the people. The newly entered contact details will be placed at the correct alphabetical order. This can be achieved by linked list to set contact at correct alphabetical position.

The modifications that we are made in the documents are actually created as nodes in doubly linked list. We can simply use the undo option by pressing Ctrl+Z to modify the contents. It is done by the functionality of linked list.

# Advantages of Linked Lists:
**_Insertion and deletion in linked lists are very efficient_**.

Linked list **_can be expanded in constant time_**.

For implementation of stacks and queues and for representation of trees and graphs.

Linked lists are used for dynamic memory allocation which means effective memory utilization hence, no memory wastage.

# Disadvantages of Linked Lists:

Use of pointers is more in linked lists hence, **_complex and requires more memory_**.

Searching an element is costly and requires O(n) time complexity.

Traversing is more time consuming and reverse traversing is not possible in singly linked lists.

**_Random access is not possible_** due to dynamic memory allocation.

# 2) Stack and Queue:

# Stack: 
Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

# Primary Stack Operations:

**_void push(int data):_** When this operation is performed, an element is inserted into the stack.

**_int pop():_**   When this operation is performed, an element is removed from the top of the stack and is returned.

# Auxiliary Stack Operations:

**_int top():_** This operation will return the last inserted element that is at the top without removing it.

**_int size():_** This operation will return the size of the stack i.e. the total number of elements present in the stack.

**_int isEmpty():_** This operation indicates whether the stack is empty or not.

_**int isFull():**_ This operation indicates whether the stack is full or not.

# Types of Stacks:

**_Register Stack:_** This type of stack is also a memory element present in the memory unit and can handle a small amount of data only. The height of the register stack is always limited as the size of the register stack is very small compared to the memory.

**_Memory Stack:_** This type of stack can handle a large amount of memory data. The height of the memory stack is flexible as it occupies a large amount of memory data. 


# Application of Stack Data Structure:

Stack is used for **_evaluating expression with operands and operations_**.

**_Matching tags in HTML and XML_**.

**_Undo function_** in any text editor.

**_Infix to Postfix_** conversion.

Stacks are used for **_backtracking and parenthesis matching_**.

Stacks are used for **_conversion of one arithmetic notation_** to another arithmetic notation.

Stacks are useful for **_function calls_**, storing the **_activation records and deleting them_** after returning from the function. It is very useful in processing the function calls.

Stacks help in **_reversing_** any set of data or strings.

# Application of Stack in real life:

CD/DVD stand.

Stack of books in a book shop.

Undo and Redo mechanism in text editors.

The history of a web browser is stored in the form of a stack.

Call logs, E-mails, and Google photos in any gallery are also stored in form of a stack.

YouTube downloads and Notifications are also shown in LIFO format(the latest appears first ).

# Advantages of Stack:

Stack helps in managing data that follows the **_LIFO_** technique.

Stacks are be used for **_systematic Memory Management_**.

It is used in many virtual machines like **_JVM_**.

When a function is called, the local variables and other function parameters are stored in the stack and automatically destroyed once returned from the function. Hence, efficient function management.

Stacks are more **_secure and reliable_** as they do not get corrupted easily.

Stack allows **_control over memory allocation and deallocation_**.

Stack **_cleans up the objects_** automatically.

# Disadvantages of Stack: 

Stack memory is of **_limited size_**.

The total of size of the stack must be defined before.

If too many objects are created then it can **_lead to stack overflow_**.

Random accessing is not possible in stack.

If the **_stack falls outside the memory it can lead to abnormal termination_**.

# Queue:
A Queue is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO). 

# Primary Queue Operations:

**_void enqueue(float value):_** When this operation is performed, an element is inserted in the queue at the end i.e. at the rear end.

**_int dequeue():_**   When this operation is performed, an element is removed from the front end and is returned.

# Auxiliary Queue Operations:

**_int front():_** This operation will return the element at the front without removing it.

**_int rear():_** This operation will return the element at the rear without removing it.

**_int isEmpty():_** This operation indicates whether the queue is empty or not.

**_int size():_** This operation will return the size of the queue i.e. the total number of elements.

# Types of Queues:

**_Simple Queue:_** Simple queue also known as a linear queue is the most basic version of a queue. Here, insertion of an element i.e. the Enqueue operation takes place at the rear end and removal of an element i.e. the Dequeue operation takes place at the front end.

**_Circular Queue:_**  In a circular queue, the element of the queue act as a circular ring. The working of a circular queue is similar to the linear queue except for the fact that the last element is connected to the first element. Its advantage is that the memory is utilized in a better way. This is because if there is an empty space i.e. if no element is present at a certain position in the queue, then an element can be easily added at that position.

**_Priority Queue:_** This queue is a special type of queue. Its specialty is that it arranges the elements in a queue based on some priority. The priority can be something where the element with the highest value has the priority so it creates a queue with decreasing order of values. The priority can also be such that the element with the lowest value gets the highest priority so in turn it creates a queue with increasing order of values.

**_Dequeue:_** Dequeue is also known as Double Ended Queue. As the name suggests double ended, it means that an element can be inserted or removed from both the ends of the queue unlike the other queues in which it can be done only from one end. Because of this property it may not obey the First In First Out property. 

# Implementation of Queue:

**_Sequential allocation:_** A queue can be implemented using an array. It can organize a limited number of elements.

**_Linked list allocation:_**  A queue can be implemented using a linked list. It can organize an unlimited number of elements.

# Applications of Queue:

**_Multi programming:_** Multi programming means when multiple programs are running in the main memory. It is essential to organize these multiple programs and these multiple programs are organized as queues. 

**_Network:_** In a network, a queue is used in devices such as a router or a switch. another application of a queue is a mail queue which is a directory that stores data and controls files for mail messages.

**_Job Scheduling:_** The computer has a task to execute a particular number of jobs that are scheduled to be executed one after another. These jobs are assigned to the processor one by one which is organized using a queue.

**_Shared resources:_** Queues are used as waiting lists for a single shared resource.

# Real-time application of Queue:

ATM Booth Line

Ticket Counter Line

Key press sequence on the keyboard

CPU task scheduling

Waiting time of each customer at call centers.

# Advantages of Queue:

A **_large amount of data can be managed efficiently_** with ease.

Operations such as insertion and deletion can be performed with ease as it follows the first in first out rule.

Queues are useful when a particular service is used by multiple consumers.

Queues are fast in speed for data inter-process communication.

Queues can be used in the implementation of other data structures.

# Disadvantages of Queue:

The operations such as insertion and deletion of elements from the middle are time consuming.

Limited Space.

In a classical queue, a new element can only be inserted when the existing elements are deleted from the queue.

Searching an element takes O(N) time.

Maximum size of a queue must be defined prior.

# 3) Binary Tree:
A tree whose elements have at most 2 children is called a binary tree. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.

# Terms of tree:

Root: The root of a tree is the top most node of the tree that has no parent node. There is only one root node in every tree.

Edge: Edge acts as a link between the parent node and the child node.

Leaf: A node that has no child is known as the leaf node. It is the last node of the tree. There can be multiple leaf nodes in a tree.

Depth: Depth of the node is the distance from the root node to that particular node.

Height: The height of the node is the distance from that node to the deepest node of the tree.

Height of tree: Height of the tree is the maximum height of any node.

# Types of Binary Trees. 

1) **Full Binary Tree:-** A Binary Tree is a full binary tree if every node has 0 or 2 children. The following are the examples of a full binary tree. We can also say a full binary tree is a binary tree in which all nodes except leaf nodes have two children. 
A full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children. It is also known as a proper binary tree.

               18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40

             18
           /    \   
         15     20    
        /  \       
      40    50   
    /   \
   30   50

               18
            /     \  
          40       30  
                   /  \
                 100   40


2) **Complete Binary Tree:-** A Binary Tree is a Complete Binary Tree if all the levels are completely filled except possibly the last level and the last level has all keys as left as possible.
A complete binary tree is just like a full binary tree, but with two major differences:
Every level must be completely filled
All the leaf elements must lean towards the left.
The last leaf element might not have a right sibling i.e. a complete binary tree doesn’t have to be a full binary tree.

               18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40


               18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40
     /  \   /
    8   7  9 
Practical example of Complete Binary Tree is Binary Heap. 

3)**Perfect Binary Tree:-**
A Binary tree is a Perfect Binary Tree in which all the internal nodes have two children and all leaf nodes are at the same level. 
The following are the examples of Perfect Binary Trees. 
A perfect binary tree is a type of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.

               18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40


               18
           /       \  
         15         30  
In a Perfect Binary Tree, the number of leaf nodes is the number of internal nodes plus 1   

 **L = I + 1** Where **L = Number of leaf nodes, I = Number of internal nodes.**

A Perfect Binary Tree of height h (where the height of the binary tree is the number of edges in the longest path from the root node to any leaf node in the tree, height of root node is 0) has **2^(h+1) – 1** node. 

An example of a Perfect binary tree is ancestors in the family. Keep a person at root, parents as children, parents of parents as their children. 

4) **Balanced Binary Tree:-**
A binary tree is balanced if the height of the tree is O(Log n) where n is the number of nodes. For Example, the AVL tree maintains O(Log n) height by making sure that the difference between the heights of the left and right subtrees is at most 
1. Red-Black trees maintain O(Log n) height by making sure that the number of Black nodes on every root to leaf paths is the same and there are no adjacent red nodes. Balanced Binary Search trees are performance-wise good as they provide O(log n) time for search, insert and delete. 

It is a type of binary tree in which the difference between the height of the left and the right subtree for each node is either 0 or 1.

A degenerate (or pathological) tree:-

A Tree where every internal node has one child. Such trees are performance-wise same as linked list. 

A degenerate or pathological tree is the tree having a single child either left or right.

      10
      /
    20
     \
     30
      \
      40     

5) **Skewed Binary Tree:-**
A skewed binary tree is a pathological/degenerate tree in which the tree is either dominated by the left nodes or the right nodes. Thus, there are two types of skewed binary tree: left-skewed binary tree and right-skewed binary tree.

# The properties of a binary tree: 

1) The **maximum number of nodes** at level **‘l’** of a binary tree is **2^l**. 
Here level is the number of nodes on the path from the root to the node (including root and node). Level of the root is 0. 
This can be proved by induction. 

For root, l = 0, number of nodes = 2^0 = 1 

Assume that the maximum number of nodes on level ‘l’ is 2^l 
Since in Binary tree every node has at most 2 children, next level would have twice nodes, i.e. 2 * 2^l 

2) The **Maximum number of nodes** in a binary tree of height **‘h’** is **2^h – 1**. 
Here the height of a tree is the maximum number of nodes on the root to leaf path. Height of a tree with a single node is considered as 1. 

This result can be derived from point 2 above. A tree has maximum nodes if all levels have maximum nodes. So maximum number of nodes in a binary tree of height h is **1 + 2 + 4 + .. + 2^h-1**. This is a simple geometric series with h terms and sum of this series is **2^h– 1**. 
In some books, the height of the root is considered as 0. In this convention, the above formula becomes **2^(h+1) – 1** 

3) In a Binary Tree with N nodes, **minimum possible height or the minimum number of levels** is **Log2(N+1)**.

There should be at least one element on each level, so the height cannot be more than N. A binary tree of height ‘h’ can have maximum 2h – 1 nodes (previous property). So the number of nodes will be less than or equal to this maximum value.

**N <=  2h - 1
2h >= N+1**
**h >= log2(N+1)**           (Taking log both sides)
**h >= | log2(N+1) |**       (h is an integer)
So the minimum height possible is | log2(N+1) |

4) A Binary Tree with **L leaves** has at least **| Log2L |+ 1   levels**. 
A Binary tree has the maximum number of leaves (and a minimum number of levels) when all levels are fully filled. Let all leaves be at level l, then below is true for the number of leaves L. 

**L   <=  2l-1**  [From Point 1]
**l =   | Log2L | + 1** 
where l is the minimum number of levels.

5) In Binary tree where every node has 0 or 2 children, the number of leaf nodes is always one more than nodes with two children.

**L = T + 1**
Where L = Number of leaf nodes
T = Number of internal nodes with two children
Proof:
No. of leaf nodes (L) i.e. total elements present at the bottom of tree = 
2h-1 (h is height of tree)
**No. of internal nodes = {total no. of nodes} - {leaf nodes} = 
{ 2h - 1 } - {2h-1} = 2h-1 (2-1) - 1 = 2h-1 - 1**
So , **L = 2h-1
     T = 2h-1 - 1**
Therefore **L = T + 1**
Hence proved

6) In a non empty binary tree, if n is the total number of nodes and e is the total number of edges, then e = n-1 

Every node in a binary tree has exactly one parent with the exception of root node. So if n is the total
number of nodes then n-1 nodes have exactly one parent. There is only one edge between any child and its
parent. So the total **number of edges is n-1**. 

# Basic Operation On Binary Tree:

Inserting an element.

Removing an element.

Searching for an element.

Traversing an element. There are three types of traversals in binary tree which will be discussed ahead.

# Auxiliary Operation On Binary Tree:

Finding the height of the tree

Find the level of the tree

Finding the size of the entire tree.

# Binary Tree Traversals:

**PreOrder Traversal:** Here, the traversal is : root – left child – right child. It means that the root node is traversed first then its left child and finally the right child.

**InOrder Traversal:** Here, the traversal is : left child – root – right child.  It means that the left child is traversed first then its root node and finally the right child.

**PostOrder Traversal:** Here, the traversal is : left child – right child – root.  It means that the left child is traversed first then the right child and finally its root node.

# Main applications of trees include: 
1. Manipulate hierarchical data. 
2. Make information easy to search (see tree traversal). 
3. Manipulate sorted lists of data. 
4. As a workflow for compositing digital images for visual effects. 
5. Router algorithms 
6. Form of a multi-stage decision-making (see business chess). 
