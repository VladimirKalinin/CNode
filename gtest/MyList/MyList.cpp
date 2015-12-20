#include "CNode.h"
#include "MyList.h"
#include "iostream"

using namespace std;
CNode* CreateList(int count, const int* vals) {
  if (count <= 0) return 0;
  CNode *head = new CNode;
  head->val = vals[0];
  CNode *prev = head;
  for (int i = 1; i < count; ++i) {
    CNode *node = new CNode;
    node->val = vals[i];
    prev->next = node;
    prev = node;
  }
  prev->next = 0;
  return head;
}

void print(CNode *r) {
  while (r != 0) {
    cout << r->val << ' ';
    r = r->next;
  }
  cout << endl;
}

void Del(struct CNode** first)
{
	try{


	if (*first!=0)
	{
		struct CNode* curr=*first;
		while (curr->next != 0)
		{
			
			if (curr->val != (curr->next)->val)
				curr=curr->next;
			else
			{
				struct CNode* tmp;
				tmp=curr->next;
				curr->next=(curr->next)->next;
				delete tmp;
			}
			
		}

	}
	}
	 catch(...){
	  std::cout <<"error"<< std::endl;
  }
}

void sort(CNode **a)
{
	CNode *curr=*a, *tmp1, *tmp2, *tmp3;
	if (curr->next==0)
		return;

	if (curr->next->next==0)
		if (curr->val > curr->next->val)
		{
			*a=curr->next;
			curr->next->next=curr;
			curr->next=0;
		}



	int fl=0;
	while (fl==0) 
	{ 
	fl=1;
	curr=*a;
	if (curr->val > curr->next->val)
		{
			fl=0;
			tmp1=*a;					//first elem
			tmp2=curr->next;			//second elem
			tmp3=curr->next->next;		//elem after switched elements
			tmp2->next=tmp1;
			tmp1->next=tmp3;
			*a=tmp2;
		}
	
    while (curr->next->next!=0)
    {
        if (curr->next->val > curr->next->next->val)
        {
            fl=0;
            tmp1=curr->next;              //first elem
            tmp2=curr->next->next;        //second elem
            tmp3=curr->next->next->next;  //elem after switched elements
            tmp2->next=tmp1;
            tmp1->next=tmp3;
            curr->next=tmp2;
        }
    curr=curr->next;
    }
}
}