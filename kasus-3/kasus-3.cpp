#include <iostream>

using namespace std;

int main()
{
	// Pendeklarasian array tidak termasuk algoritma
	int y = 10;
	int numArray[7] = {1, 3, 4, 8, 10, 13, 17};

	int i, j, mid;
	bool found;

	i = 1;
	j = (sizeof(numArray)/sizeof(*numArray));
	found = false;

	while (!found && i <= j){
		cout << "heu" << endl;
		mid = (i + j) / 2;
		if (numArray[mid] == y){
			found = true;
		} else if (numArray[mid] < y) {
			i = mid + 1;
		} else {
			j = mid - 1;
		}
	}

	int idx;
	if (found == true){
		idx = mid;
	} else {
		idx = 0;
	}

	cout << "idx: " << idx << endl;

    return 0;
}