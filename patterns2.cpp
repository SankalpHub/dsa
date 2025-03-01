#include<iostream>
using namespace std;

void pattern1(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n){
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n - i; k++){
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n - i; k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern4(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    pattern4(n);
}