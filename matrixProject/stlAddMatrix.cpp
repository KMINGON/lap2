#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int row, col, num;
	vector<int> matrix1, matrix2;

	cout << "input row col : ";
	cin >> row >> col;

	cout << "input matrix1" << endl;
	for(int i = 0; i < row*col; i++){
		cin >> num;
		matrix1.push_back(num);
	}

	cout << "input matrix2" << endl;
	for(int i = 0; i < row*col; i++){
		cin >> num;
		matrix2.push_back(num);
	}

	cout << "result" << endl;
	for(int i = 0; i < row*col; i++){
		cout << matrix1[i] + matrix2[i] << " ";
		if(i % row == row - 1) cout << endl;
	}


	return 0;
}
