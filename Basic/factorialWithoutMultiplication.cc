#include<iostream>
using namespace std;
int factorialWithoutMul(int N)
{
	int ans = N;

	for (int i = N - 1; i > 0; i--) {
		int sum = 0;

		for (int j = 0; j < i; j++)
			sum = sum+ans;
		ans = sum;
	}
	return ans;
}

int main()
{
	int N;
    cin>>N;

	cout << factorialWithoutMul(N) << endl;
	return 0;
}
