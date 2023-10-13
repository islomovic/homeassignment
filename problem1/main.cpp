#include <iostream>
using namespace std;
int main() {
  /*for (int i = 1; i <= 10; i++) {
        std::cout << i << "     ";
    }
    return 0;*/ 

/*Write a program which asks for a number input from the keyboard . Add 40 to the number and
then divide it by 5. Now, subtract 6 from the number and then multiply the resultant value by
10. Display the result.*/
 // Ask for number 
    int number;
    cout << "Enter a number: ";
    cin >> number;

    // Add 40 and divide by 5
    float result = (number + 40) / 5;

    // Subtract 6 and multiply by 10
    result = (result - 6) * 10;

    // Display the final result
    cout << "Result: " << result << endl;

    return 0;
}


