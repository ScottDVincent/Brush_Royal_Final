/** 
* @file LinkedList.h
* 
* @author Adam Brush
* @date 2012-09-23
* 
* @note This file is (c) 2012. It is licensed under the
* CC BY 3.0 licenses (http://creativecommons.org/licenses/by/3.0/),
* which means you are free to use, share, and remix it as long as you
* give attribution. Commercial uses are allowed.
* 
*/


struct Node{
	int data;
	Node* next;
	Node* prev;
	Node(int x, Node* n, Node* p) : data(x), next(n), prev(p){}
	/** SV: This line: Node(int x, Node* n, Node* p) : data(x), next(n), prev(p){}
	is causing some major weird things to happen. See my word doc review to see the debugging hints.
	*/
};

class LinkedList {
	private:
		Node *head_;
		int num_items_;
	public:
		LinkedList();
		void addNode(int info);
		int getData(int index);
		void cycle();
		void reverse();
};
