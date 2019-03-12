#include <iostream>

using namespace std;

int main()
{
	// Pendeklarasian array tidak termasuk dalam algoritma
	int numArray[6] = {1, 7, 3, 17, 21};
	
	int i = 2;
	int maxValue = numArray[0];

	while(i <= (sizeof(numArray)/sizeof(*numArray))){
		if (numArray[i] > maxValue){
			maxValue = numArray[i];
		}
		i++;
	}

    return 0;
}