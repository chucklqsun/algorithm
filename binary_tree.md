### Traveral Types
1. Pre-order Traversal
    * Pre-order traversal is to visit the root first. Then traverse the left subtree. Finally, traverse the right subtree.
2. In-order Traversal
    * In-order traversal is to traverse the left subtree first. Then visit the root. Finally, traverse the right subtree.
    * For a binary search tree, we can retrieve all the data in __sorted order__ using in-order traversal.
3. Post-order Traversal
    * Post-order traversal is to traverse the left subtree first. Then traverse the right subtree. Finally, visit the root.
    * Delete nodes in a tree, deletion process will be in post-order. 
    * Post-order is widely use in mathematical expression. It is easier to write a program to parse a post-order expression. If you handle this tree in postorder, you can easily handle the expression using a stack. Each time when you meet a operator, you can just pop 2 elements from the stack, calculate the result and push the result back into the stack.


