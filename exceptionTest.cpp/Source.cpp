#include<iostream>
using namespace std;

int main(){

	try {

		int a;
		cout << "enter a" << endl;
		cin >> a;

		int b;
		cout << "enter b" << endl;
		cin >> b;

		int sum = a + b;

		if (sum < 0){
			throw 0;
		}

		cout << "sum is  :" << a + b << endl;
	}
	catch (...){
		cout << "sum has be positive" << endl;
	}

	system("pause");
}