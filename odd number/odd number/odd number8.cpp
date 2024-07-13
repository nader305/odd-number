#include<iostream>
using namespace std;
int main() {
	int num;
	cout << "Enter number:\n";
	cin >> num;
	cout << "========\n";
	(num % 2 != 0) ? cout << num << " is odd\n" : cout << num << " is not odd\n";
	return 0;
}