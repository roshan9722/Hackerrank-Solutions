#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;


int main() {
    double meal;
	int tip,tax;
	double total;
    
	cin >> meal;
    cin >> tip;
    cin >> tax;
    
    double latip,latax;
    latip = (meal * tip)/100;
    latax = (meal * tax)/100;
    
    total = meal + latip + latax;
    
    cout.precision(0);
    cout << fixed << "The total meal cost is " << total <<" dollars." << endl;
    
    
    return 0;
}
