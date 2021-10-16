# include <iostream>
using namespace std;
int main(){
    int n ;
    cin >> n;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n - i; j++)
            cout << " ";
        int coeff = 1;
        for(int j = 1; j <= i; j++){
            if(j == 1 || j == i){
                coeff = 1;
            }
            else {
                coeff = coeff * (i - j + 1) / (j - 1);
            }
            cout << coeff << " ";
        }
        cout << endl;
    }
    return 0;
}