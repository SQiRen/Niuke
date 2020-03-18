#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main() {
	string str;
	while (cin >> str) {
		int length = str.size();
		for (int i = length-1; i >= 0; i--) {
			cout << str[i] ;	
		}
		printf("\n");
	}
	return 0;
}