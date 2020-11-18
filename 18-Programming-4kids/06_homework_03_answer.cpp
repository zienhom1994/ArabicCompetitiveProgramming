#include<iostream>
using namespace std;

int main() {
int num;
cin >> num;
int n1 = num % 10;
int n2 = ((num % 100) - n1 ) / 10;
int n3 = ((num % 1000) - (n1+n2)) / 100;
cout << n1 + n2 + n3;

	

	return 0;
}

