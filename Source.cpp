/*��������� ���� �43021
������� 3
2. ����� ������, ������� �������� 8 ��������� ����� ����� �� -10 �� 10. ����� ����� ������������� ��������� �������. (rand()%21-10)
*/
#include <iostream>
#include <ctime>
using namespace std;
int main() {
	const int n = 8;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 21 - 10;
		cout << arr[i] << ' ';
	}
	cout << endl;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] > 0) {
			sum = sum + arr[i];
		}
	}
	cout << sum << ' ' << endl;
		return 0;
}