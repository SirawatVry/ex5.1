#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;
int main()
{	int ran,si,max=0;
	float avg=0,pa=0;
	srand(time(NULL));
	ran = 1+rand()%10;
	cout << "Random number of student(1-10):"<<ran<<endl;
	for (int i = 1;i<=ran;i++)
	{cout << "Input score" << i << ":";
	 cin  >> si ;
	 if (si > max){
		 max = si;
	 }
	 pa = si + pa;
	 avg = pa/ran;
	}
	cout << "Max Score = " << max<<endl;
	cout << "Sum Score = " << pa<<endl;
	cout << "Avg. Score = " << fixed << setprecision(2) << avg << endl;
	return(0);
}