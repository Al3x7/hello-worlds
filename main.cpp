#include <iostream>
using namespace std;
int main()
{
	
	int n = 0;
	cout << "Insert an integer: ";
	cin >> n;
	for (int i = 1; i<=n;i++) 
	{
		for (int j = 1; j <= i; j++)
		{
			cout << j;
		}
		cout << "\n";
	}
	return 0;
}
