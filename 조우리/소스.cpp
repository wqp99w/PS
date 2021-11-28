#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;


int main() {
	int a = 0;
	int b = 0;
	int sum = 0;
	cin >> a >> b;
	int a3 =b % 10;
	int a4 = b % 100 / 10;
	int a5 = b / 100;
	cout << a*a3<<"\n";
	sum = sum + a*a3;
	cout << a * a4<<"\n";
	sum = sum + a*10 * a4;
	cout << a * a5 << "\n";
	sum = sum + a*100 * a5;
	cout << sum;
	


	
}