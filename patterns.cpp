#include<iostream>
using namespace std;

void pattern1(int n){  
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern3(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << i;
        }
        cout << endl;
    }
}
void pattern5(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern6(int n){
    for(int i = n; i >= 1; i--){
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        cout << endl;
    }
}
void pattern7(int n){
    for(int i = 1; i <= n; i++){
        //spaces
        for(int k = 1; k <= n - i; k++){
            cout << " ";
        }
        //stars
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern8(int n){
    for(int i = n; i >= 1; i--){
        //spaces
        for(int k = 1; k <= n - i; k++){
            cout << " ";
        }
        //stars
        for(int j = 1; j <= 2 * i - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern9(int n){
    for(int i = 1; i <= 2 * n; i++){
        int val = n - i;
        if(i > n) val = i - n - 1;

        //spaces
        for(int k = 1; k <= val; k++){
            cout << " ";
        }
        //stars
        for(int j = 1; j <= 2 * (n - val) - 1; j++){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern10(int n){
    for(int i = 1; i < 2 * n ; i++){
        int val = i;
        if(i > n) val = 2 * n - i;

        for(int j = 1; j <= val; j++){
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    pattern10(n);
} 