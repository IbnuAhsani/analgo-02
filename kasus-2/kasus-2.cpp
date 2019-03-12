#include <iostream>

using namespace std;

int main()
{
	// Pendeklarasian variable dan array tidak termasuk dalam algoritma
	int y = 10;
	int numArray[7] = {1, 3, 4, 8, 10, 13, 17};

	int i = 1;
	bool found = false;

	while (i <= (sizeof(numArray)/sizeof(*numArray)) && !found){
		if (numArray[i] == y){
			found = true;
		} else {
			i++;
		}
	}

	int idx;
	if (found == true){
		idx = i;
	} else {
		idx = 0;
	}

    return 0;
}