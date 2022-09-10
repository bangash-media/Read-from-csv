#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;
int main() 
{
	int size=10;
	string name[size];
	int rollnum[size];
	float marks[size];
	char grade[size];
	
	string line;
	ifstream fin("test1.csv");
	int i=0;
	while(getline(fin,line))
	{
		string rand;
		istringstream iss(line);
		iss>>rollnum[i];
		getline(iss,rand,',');
		getline(iss,name[i],',');
		iss>>marks[i];
		getline (iss,rand,',');
		iss>>grade['i'];
		i++;
		
	}
	for (int i=0;i<size;i++)
	cout<<setw(10)<<name[i]<<setw(10)<<rollnum[i]
	<<setw(10)<<marks[i]<<setw(10)<<grade['i']<<endl;
	return 0;
}
