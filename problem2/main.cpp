#include <iostream>

using namespace std;

int main (){
    /*
    int num, sum;
    num = 1; sum =0;
    while (num <=10){
        sum += num; num++;
    }
cout <<"sum of 1 to 10 numbers: " << sum << endl;*/
// Ask for length input 
    float length;
    cout << "Enter  meters: ";
    cin >> length;

    // Converts meters to inches
    float inches = length * 39.3701;

    // Display the converted length in inches
    cout << "Length in inches: " << inches << endl;

    return 0;


};
