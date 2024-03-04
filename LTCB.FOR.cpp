#include <iostream>
using namespace std;
int main() {
	int  so, tongle = 0;
	cout << "nhap so...";
	cin >> so;
	for (int i = 0; i <= so; i++) {
		if (i % 2 != 0)// so le la so chia 2 du 1
		{
			cout << i << " ";
			tongle = tongle + i;
		}
	}
	cout << "\n tong so le o don " << so << "la" << tongle;
	return 0;
}