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
void pattern11(int n){
    for(int i = 1; i <= n; i++){
        int val = 1;
        if(i % 2 == 0) val = 0;

        for(int j = 1; j <= i; j++){
            cout << val << " ";
            val = 1 - val;                 //flips 1 to 0 and 0 to 1
        }
        cout << endl;
    }
}
void pattern12(int n){
    for(int i = 1; i <= n; i++){
        //numbers
        for(int j = 1; j <= i; j++){
            cout << j;
        }
        //spaces
        for(int k = 1; k <= 2 * (n - i); k++){
            cout << " ";
        }
        //numbers
        for(int j = i; j >= 1; j--){
            cout << j;
        }
        cout << endl;
    }
}
void pattern13(int n){
    int val = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++, val++){
            cout << val << " ";
        }
        cout << endl;
    }
}
void pattern14(int n){
    for(int i = 1; i <= n; i++){
        char ch = 'A';
        for(int j = 1; j <= i; j++, ch++){
            cout << ch;
        }
        cout << endl;
    }
}
void pattern15(int n){
    for(int i = n; i >= 1; i--){
        char ch = 'A';
        for(int j = 1; j <= i; j++, ch++){
            cout << ch;
        }
        cout << endl;
    }
}
void pattern16(int n){
    char ch = 'A';
    for(int i = 1; i <= n; i++, ch++){
        for(int j = 1; j <= i; j++){
            cout << ch;
        }
        cout << endl;
    }
}
void pattern17(int n){
    for(int i = 1; i <= n; i++){
        //spaces
        for(int k = 1; k <= n - i; k++){
            cout << " ";
        }
        //charactes
        char ch = 'A';
        for(int j = 1; j < i; j++,ch++){
            cout << ch;
        }
        for(int j = 1; j <= i; j++, ch--){
            cout << ch;
        }
        cout << endl;
    }
}
void pattern18(int n){
    char ch = 'E';
    for(int i = 1; i <= n; i++,ch--){
        char val = ch;
        for(int j = 1; j <= i; j++,val++){
            cout << val << " ";
        }
        cout << endl;
    }
}
void pattern19(int n){
    //upper half
    for(int i = n; i >= 1; i--){
        //stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        //spaces
        for(int k = 1; k <= 2 * (n - i); k++){
            cout << " ";
        }
        //stars
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
    //lower half
    for(int i = 1; i <= n; i++){
        //stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }
        //spaces
        for(int k = 1; k <= 2 * (n - i); k++){
            cout << " ";
        }
        //stars
        for(int j = i; j >= 1; j--){
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int n){
    for(int i = 1; i < 2 * n; i++){
        int val = i;
        if(i > n) val = 2 * n - i;

        //stars
        for(int j = 1; j <= val; j++){
            cout << "*";
        }
        //spaces
        for(int k = 1; k <= 2 * (n - val); k++){
            cout << " ";
        }
        //stars
        for(int j = 1; j <= val; j++){
            cout << "*";
        }
        cout << endl;
    }
}
int main() {
    int n;
    cin >> n;
    pattern20(n);
} 