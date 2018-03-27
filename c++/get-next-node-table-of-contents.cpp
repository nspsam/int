/** 

Table of Contents / Chapter tree
1
1.1
1.1.1
1.1.2
1.2
1.2.1
2
3

(or)

            1
        /   |   \
     1.1    1.2  1.3
     / \      \
1.1.1  1.1.2  1.2.1   

Given: node.getParent(), node.getNextSibling(), node.getFirstChild()
Implement: getNextNode(node) - Print next bullet in printed order

Examples:
1.1     -> 1.1.1
1.1.1   -> 1.1.2
1.2.1.1 -> 2

**/

class Solution {
  Node* getNextNode(Node* node) {
    if(nullptr == node)
      return nullptr;
    
    if(node->getFirstChild())
      return node->getFirstChild();
	  
    while(nullptr == node->getNextSibling() && node->getParent())
      node = node->getParent();
	  
    return  node->getNextSibling();
  }
};