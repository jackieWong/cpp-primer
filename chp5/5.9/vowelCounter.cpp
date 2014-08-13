#include <iostream>
using namespace std;

void printResult(int aC, int eC, int iC, int oC, int uC)
{
	cout << "a:" << aC << endl;
	cout << "e:" << eC << endl;
	cout << "i:" << iC << endl;
	cout << "o:" << oC << endl;
	cout << "u:" << uC << endl;
}
int main()
{
	int aCount;
	int eCount;
	int iCount;
	int oCount;
	int uCount;
	
	char ch;

	while (cin >> ch) {
		if (ch == 'a')
			aCount ++;	
		if (ch == 'e')
			eCount ++;
		if (ch == 'i')
			iCount ++;
		if (ch == 'o')
			oCount ++;	
		if (ch == 'u')
			uCount ++;
	}

	printResult(aCount, eCount, iCount, oCount, uCount);

	return 0;
}
