#include <gtest.h>
#include "MyList.h"

int main(int argc, char **argv) {
	const int kListSize = 20;
	  int vals[kListSize];
	  for (int i = 0; i < kListSize; ++i)
		  vals[i] = kListSize-i;
	 // vals[0]=0;
	  //vals[1]=72;
	  CNode *head = CreateList(kListSize, vals);
	  print(head);
	  sort(&head);
	  print(head);
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
