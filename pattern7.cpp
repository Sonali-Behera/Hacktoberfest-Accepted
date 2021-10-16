# include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        int sp = 1;
        for(int j = 1; j <= 2*n; j++){
            if(j > i && sp <= (2*(n-i))){
                cout << "  ";
                sp++;
            }
            else cout << "* ";
        }
        cout << endl;
    }
    for(int i = n; i >= 1; i--){
        int sp = 1;
        for(int j = 1; j <= 2*n; j++){
            if(j > i && sp <= (2*(n-i))){
                cout << "  ";
                sp++;
            }
            else cout << "* ";
        }
        cout << endl;
    }
    return 0;
}