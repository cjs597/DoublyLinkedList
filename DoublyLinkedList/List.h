#pragma once
using namespace std;

class Node {
	friend class DoubleList;
private:
	Node * prev;
	int element;
	Node * next;
public:
	Node(Node * = 0, int = 0, Node * = 0);
};

class DoubleList {
private:
	Node * list_head;
	Node * list_tail;
public:
	DoubleList();
	void find_head();
	void find_tail();
	void insert_before_head(int);
	void insert_before_tail(int);
	void insert_after_head(int);
	void insert_after_tail(int);
	void replace_head(int);
	void replace_tail(int);
	void erase_head();
	void erase_tail();
	void next();
	void previous();
};