/*************************************************************************
	> File Name: except.cpp
	> Author: 
	> Mail: 
	> Created Time: 一  2/29 18:43:37 2016
 ************************************************************************/

#include<iostream>
#include<stdexcept>
using namespace std;
double divideNumbers(double x, double y) {
    if(y == 0) {
        throw exception();
    }
    return x/y;
}
int main() {
    try {
        cout << divideNumbers(2.5, 0.5) << endl;
        cout << divideNumbers(2.5, 0) << endl;
    } catch(const exception & e) {
        cout << "exception was caught" << endl;
    }
}

