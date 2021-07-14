#include <iostream>
using namespace std;
int main(){
    int number, remainder =0;
    cout <<"Enter an integer" << endl;
    cin >> number;

    while (number>0)
    {
        remainder = number % 10;
        cout << remainder << "";
    }

    return 0;
    
}