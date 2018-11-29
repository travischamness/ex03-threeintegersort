/**
* CS V13 Data Structures and Algorithms
* Assignment: EX03 - Three Integer Sort
*
* Statement of code ownership: I hereby state that I have written all of this
* code and I have not copied this code from any other person or source.
*
* @author travis_chamness1@my.vcccd.edu
*/
#include<iostream>
#include"threeintegersort.h"
using edu::vcccd::vc::csv13::sort;
using std::cout;
using std::endl;

int main(int argc, char *argv[]) {
    int a = 15;
    int b = 1;
    int c = 66;

    sort(a, b, c);
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
    return 0;
}
