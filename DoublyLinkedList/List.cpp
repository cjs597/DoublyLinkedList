#include <iostream>
#include "LIst.h"
using namespace std;

Node::Node(Node * n1, int e, Node * n2) : prev(n1), element(e), next(n2) {}

DoubleList::DoubleList() :list_head(0), list_tail(0) {}

void DoubleList::find_head() // 출력
{}
void DoubleList::find_tail() // 출력
{}
void DoubleList::insert_before_head(int e)
{}
void DoubleList::insert_before_tail(int e)
{}
void DoubleList::insert_after_head(int e)
{}
void DoubleList::insert_after_tail(int e)
{}
void DoubleList::replace_head(int e)
{}
void DoubleList::replace_tail(int e)
{}
void DoubleList::erase_head()
{}
void DoubleList::erase_tail()
{}
void DoubleList::next() // 출력
{}
void DoubleList::previous() // 출력
{}

DoubleList lst1;

void input()
{
	int num = -1;
	while (num != 0)
	{
		cin >> num;

		switch (num)
		{
		case 1:
			lst1.find_head();
			break;
		case 2:
			lst1.find_tail();
			break;
		case 3:
			int e;
			cin >> e;
			lst1.insert_before_head(e);
			break;
		case 4:
			int e;
			cin >> e;
			lst1.insert_after_tail(e);
			break;
		case 5:
			int e;
			cin >> e;
			lst1.insert_after_head(e);
			break;
		case 6:
			int e;
			cin >> e;
			lst1.insert_after_tail(e);
			break;
		case 7:
			int e;
			cin >> e;
			lst1.replace_head(e);
			break;
		case 8:
			int e;
			cin >> e;
			lst1.replace_tail(e);
			break;
		case 9:
			lst1.erase_head();
			break;
		case 10:
			lst1.erase_tail();
			break;
		case 11:
			lst1.next();
			break;
		case 12:
			lst1.previous();
			break;
		}
	}
}
int main()
{
	int first;
	cin >> first;
	lst1.insert_after_head(first);
	input();
	return 0;
}