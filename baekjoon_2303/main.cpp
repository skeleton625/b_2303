#include <iostream>
using namespace std;

int main()
{
	int i1[5];
	int c, m=0, mn;
	cin >> c;
	for (int i = 1; i <= c; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> i1[j];
		}
		for (int j = 0; j < 3; j++) {
			for (int k = j + 1; k < 4; k++) {
				for (int l = k + 1; l < 5; l++) {
					if (m <= (i1[j] + i1[k] + i1[l])%10) {
						m = (i1[j] + i1[k] + i1[l])%10;
						mn = i;
					}
				}
			}
		}
	}
	cout << mn;
}