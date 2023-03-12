#include <iostream>
using namespace std;

int g_var1;

int Sum(int num1, int num2) {
	g_var1 = 0;

	for (int i = num1; bool j = (i <= num2); i++)
		g_var1 += i;
	
	while (bool i = (num1 <= num2)) {
		int temp = num2;
		g_var1 += temp;
		num2--;
	}

	return g_var1;
}

int g_var2;

int main() {
	int num1, num2;
	cout << "정수 2개 입력 : ";
	cin >> num1 >> num2;
	g_var2 = Sum(num1, num2);

	int num3 = g_var2;
	cout << "최종 결과 : " << num3 << endl;

	return 0;
}