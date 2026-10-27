//Finding the error -> we are passing first element of array instead of whole array
#include<iostream>
using namespace std;
double getAverage(int arr[], int size);
int main () {
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;
    avg = getAverage( balance[0], 5 ) ;
    cout << "Average value is: " << avg << endl;
    return 0;
}
