#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int t1, t2, t3, t4, t5;
	double Average;

		cout << "Enter grade of test 1 : "; cin >> t1;
		cout << "Enter grade of test 2 : "; cin >> t2;
		cout << "Enter grade of test 3 : "; cin >> t3;
		cout << "Enter grade of test 4 : "; cin >> t4;
		cout << "Enter grade of test 5 : "; cin >> t5;

		Average = (t1 + t2 + t3 + t4 + t5)/5;
		
		cout << fixed << showpoint << setprecision(1);
		cout << "Average test score : " << Average << endl;



		return 0;
}