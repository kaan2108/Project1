#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <iomanip>


using namespace std;

int main()
{
	
	int randArray[100];
	for (int i = 0; i < 100; i++)
		randArray[i] = rand() % 2147483647;


	

	for (int i = 0; i < 100; i++) 
		if (randArray[i] % 2 = 0)
			
			cout << "Integer " << i + 1 << " = " << randArray[i] << " is even." << endl;

		else 

		cout << "Integer " << i + 1 << " = " << randArray[i] << " is odd." << endl;
	
	return 0;
}
//cout << "Integer " << i + 1 << " = " << randArray[i] << " is even." << endl;



