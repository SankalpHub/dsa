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
void pattern5(int n){
    for(int i = n; i >= 1; i--){
        for(int k = 1; k <= n - i; k++){
            cout << "  ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n){
    for(int i = n; i >= 1; i--){
        for(int k = 1; k <= n - i; k++){
            cout << " ";
        }
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern7(int n){
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n - i; k++){
            cout << " ";
        }
        for(int j = 1; j <= n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern8(int n){
    for(int i = 1; i < 2 * n; i++){
        int val = i;
        if(i > n) val = 2 * n - i;

        for(int k = 1; k <= n - val; k++){
            cout << " ";
        }
        for(int j = 1; j <= val; j++){
            cout << "* ";
        }
        cout << endl;
        
    }
}
void pattern9(int n){
    for(int i = 1; i < 2 * n; i++){
        int val = i;
        if(i > n) val = 2 * n - i;

        for(int k = 1; k <= val - 1; k++){
            cout << "  ";
        }
        for(int j = 1; j <= 2 * (n - val) + 1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern10(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j > 1 && j < n && i > 1 && i < n)
            cout << "  ";
            
            else cout << "* ";
        }
        cout << endl;
    }
}
void pattern11(int n){
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n - i; k++){
            cout << "  ";
        }
        for(int j = 1; j <= 2 * i - 1; j++){
            if(i > 1 && i < n && j > 1 && j < 2 * i - 1)
            cout << "  ";

            else cout << "* ";
        }
        cout << endl;
    }
}
void pattern12(int n){
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= i - 1; k++){
            cout << "  ";
        }
        for(int j = 1; j <= 2 * (n - i) + 1; j++){
            if(i > 1 && i < n && j > 1 && j < 2 * (n - i) + 1)
            cout << "  ";
            
            else cout << "* ";
        }
        cout << endl;
    }
}
void pattern13(int n){
    for(int i = 1; i < 2 * n; i++){
        int val = i;
        if(i > n) val = 2 * n - i;

        for(int k = 1; k <= n - val; k++){
            cout << "  ";
        }
        for(int j = 1; j <= 2 * val - 1; j++){
            if(i > 1 && i < 2 * n - 1 && j > 1 && j < 2 * val - 1)
            cout << "  ";

            else cout << "* ";
        }
        cout << endl;
    }
}
void pattern14(int n){
    for(int i = 1; i < 2 * n; i++){
        int val = i;
        if(i > n) val = 2 * n - i;

        for(int k = 1; k <= val - 1; k++){
            cout << "  ";
        }
        for(int j = 1; j <= 2 * (n - val) + 1; j++){
            if(val > 1 && val < n && j > 1 && j < 2 * (n - val) + 1)
            cout << "  ";

            else cout << "* ";
        }
        cout << endl;
    }
}
void pattern15(int n){
    int val = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++, val++){
            cout << val << " ";
        }
        cout << endl;
    }
}
void pattern16(int n){
    for(int i = 1; i <= n; i++){
        for(int k = 1; k <= n - i; k++){
            cout << " ";
        }
        int C = 1;
        for(int j = 1; j <= i; j++){
            cout << C << " ";
            C = C * (i - j) / j;        //Formula to calculate Coeff
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;

    pattern16(n);
}

//Completed All :)