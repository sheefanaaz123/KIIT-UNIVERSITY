//WAP exhibiting memory leak and its remedial
#include <bits/stdc++.h>
using namespace std;

void MemoryLeak()
{
	int *ptr = new int(5);
	delete (ptr);
}

int main()
{
	MemoryLeak ();
		return 0;
}

