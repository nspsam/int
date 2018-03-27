/** 

Table of Contents
1
1.1
1.1.1
1.1.2
1.2
1.2.1
1.2.1.1
2
3

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
	  
	  while(!node->getNextSibling() && node->getParent())
		  node = node->getParent();
	  
	  return  node->getNextSibling();
  }
};