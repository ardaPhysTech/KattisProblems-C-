#include <iostream>
using namespace std;


int main()
{
	double a, b; cin >> a >> b;

	cout.precision(8);
	cout << fixed << a*b/2 << endl;

	return 0;
}