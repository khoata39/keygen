#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username;
	int code;

	cout << "Welcome to Synok's KeyGenME #1" << endl;
	while (1)
	{
		cout << "\nReg name. > ";
		cin >> username;

		cout << "Reg code. > ";
		code = username.length() * 4;
		cout << code << endl;
	}
	system("pause");
	return 0;
}