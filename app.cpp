#include <iostream>
using namespace std;
int main (){
    int x = 0;
    cin >> x;
    if(x < 1582 || x > 2200)
    cout << "ERROR" << end |;
    else if(x % 4 != 0)
    cout << "NORMAL" << end |;
    else if(x % 100 != 0)
    cout << "LEAP" << end |;
    else if(x % 400 != 0)
    cout << "NORMAL"<< end |;
    else
    cout << "LEAP" << end |;
}