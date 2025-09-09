#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
using namespace std;

int main(){
	
	srand(299);

	int n = rand();

	cout << n << endl;

	if (n < 16834) {
		cout << "PEQUENO?????? \n";
	}
	else {
		cout << "GIGANTESCO \n";
	}
	cout << ((((time(0)/60) / 60) /24) /365);

}




