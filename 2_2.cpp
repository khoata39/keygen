#include <iostream>
#include <string>
#include <cstddef>

using namespace std;

size_t checkValid(string name)
{
	size_t found = string::npos;

	// check length
	if (name.size() < 4)
	{
		cout << "Firstname have to be min. 4 chars" << endl;
		return found;
	}

	// check format
	char check[] = { 'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U' };

	for (size_t i = 0; i < 10; i++)
	{
		found = name.find_first_of(check[i]);
		if (found != string::npos)
		{
			return i;
		}
	}
	cout << "Firstname is not a real firstname " << endl
		<< "Choose a right one" << endl;
	return found;
}

void generateKey(string firstname)
{
	size_t found = checkValid(firstname);
	if (found == string::npos)
		return;

	int option = static_cast<int>(found);
	unsigned int result = firstname.size();
	switch (option)
	{
	case 0:
	case 1:
		result = result * 74545 + 6708960;
		break;
	case 2:
	case 3:
		result = result * 18303 + 237952;
		break;
	case 4:
	case 5:
		result = result * 95683 + 2966204;
		break;
	case 6:
	case 7:
		result = result * 95683 + 2966204;
		break;
	case 8:
	case 9:
		result = result * 23454 + 2087495;
		break;
	}
	cout << "SerialNr: " << result << endl;
	return;
}

int main()
{
	while (1)
	{
		string firstname;
		cout << "Firstname: ";
		cin >> firstname;

		generateKey(firstname);
		cout << endl;
	}
	system("pause");
	return 0;
}