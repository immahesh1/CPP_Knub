// 	*						*
// 		*				*
// 			*		*
// 				*
// 			*		*
// 		*				*
// 	*						*


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;


	// int sp = n - 1;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (i == j || i + j == n + 1) {
				cout << "*\t";
			}
			else {
				cout << "\t";
			}

		}
		// sp--;
		cout << endl;
	}

	return 0;
}