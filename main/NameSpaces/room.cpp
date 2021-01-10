#include <iostream>
#include <climits>
#include <vector>
using namespace std;


	int age1 {18}; // gobal variables
int main(){
	int age {21}; //{} is c++11
	
	char middle_initial{'j'}; //chars
	
	long long peopl_on_earth{7'600'000'000}; //overflows if long alone
	
	bool gameover{false};
	cout<<age<<endl;
	cout<<age1<<endl;
	cout<<middle_initial<<endl;
	cout<<peopl_on_earth<<endl;
	cout<<gameover<<endl;
	cout<<"size of "<<age1 <<" in bytes is " <<sizeof(age1)<<endl;
	
	int test_scores [5] {100,95,99,87,88};
	
	cout<<test_scores<<endl;
	cout<<test_scores[0]<<endl;
	
	vector<char> vowlesInit(5);
	vector<char> vowles{'a','e','i','o','u'};
	vector<double> hi_temps(3,80.0); //3 records initialize with 80
	
	vowles.push_back('x');
	
	cout<<vowles[5]<<endl;
	//cout<<vowles.at(6)<<endl; //handles outbound error
	cout<<vowles[6]<<endl; //it does not handle the errors
	cout<<" hi temps size is: "<<hi_temps.size()<<endl;
	
	
	
	cout<<vowles.at(0)<<endl;
	
	
	
	
	
	
	
	
	return 0;
}
