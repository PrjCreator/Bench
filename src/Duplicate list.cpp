#include "stdafx.h"
#include "List.h"


int main()
{
	List list;
	list.addValue(100);
	list.addValue(20);
	list.addValue(600);
	list.addValue(70);
	list.addValue(1);

	list.showFromStart();
	list.showFromEnd();
	system("pause");

    return 0;
}

