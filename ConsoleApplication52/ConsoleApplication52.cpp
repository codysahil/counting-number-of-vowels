#include<iostream>
using namespace std;

void cnt(char arr[]) {
	int vcount = 0;
	for (int i = 0; arr[i] != '\0'; i++) {
		if (arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u' || arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U') {
			vcount++;
		}
	}
	cout << vcount;
}


int main() {

	char arr[] = "welcOmE";
	cnt(arr);


	return 0;
}