#include<iostream>
using namespace std;

int main() {
int n;
cin >> n;
int d4 = n % 10000;
int befor = n % 1000;
int d4sub = d4 - befor;
int d4div = d4sub / 1000;
cout << "digit n4 is : " << d4 << endl;
cout << "digit befor n4 is :  " << befor << endl;
cout << "digit sub n4 is :  " << d4sub << endl;
cout << "digit n4 only is :  " << d4div <<  endl;


	return 0;
}

