#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(int argc, char* argv[])
{
	vector<string> vec {"Tokyo","SanFrancisco","SilliconValley","London"};
	for (auto &i: vec)
	{
		cout << i << " ";
	}
	cout << endl;
	return 0;
}
