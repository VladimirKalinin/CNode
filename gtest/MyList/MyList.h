#ifndef GTEST_MYLIST_MYLIST_H
#define GTEST_MYLIST_MYLIST_H

#include "CNode.h"

CNode* CreateList(int count, const int* vals);
void print(CNode *r);
void sort(CNode **a);
void Del(struct CNode** first);
#endif  // GTEST_MYLIST_MYLIST_H
