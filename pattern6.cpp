# include <iostream>
using namespace std;
int main(){
    int n,cnt = 1;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << cnt++ << " ";
        }
        cout << endl;
    }
    return 0;
}