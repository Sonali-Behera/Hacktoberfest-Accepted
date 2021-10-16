# include <iostream>
using namespace std;

int main(){

    int n, pos;
    cin >> n >> pos;

    int mask = ~(1 << pos);
    cout << (n & mask);

    return 0;
}