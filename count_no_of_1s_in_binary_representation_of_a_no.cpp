# include <iostream>
using namespace std;

int main(){

    int n ;
    cin >> n;
    int cnt = 0, curr;

    while(n){
        
        n &= (n - 1);
        cnt++;

    }

    cout << cnt << endl;

    return 0;

}