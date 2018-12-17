/*
This program takes an input, N, from the user in the form of an integer.
The program then prints the fibonacci sequence to the Nth term 
(with 0 being the first term).
*/

#include <iostream>
#include <vector>
#include <cmath>
 using namespace std;

int main() {
    int n;
    cout << "Please enter a number: ";
    cin >> n;

    vector<int> sequence_list;
    int term = 0;

    for(int i = 0;i <= n ;i++) {
        term = (pow(((1 + sqrt(5))/2), i) - pow((((1 - sqrt(5))/2)), i))/sqrt(5);
        sequence_list.push_back(term);
    }

    for (int n : sequence_list)
        cout << n << ' ';

}
