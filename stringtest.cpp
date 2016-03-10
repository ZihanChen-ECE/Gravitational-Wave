#include <iostream>
#include <string>
#include <sstream>
#include "filename.h"
using namespace std;

int main()
{
	string *name;
	name = create_filename();
	for(int i=0;i<33;i++)
	{
		cout<<name[i]<<endl;
	}
	return 0;
}

