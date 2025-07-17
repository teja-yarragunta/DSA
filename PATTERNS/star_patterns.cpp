#include <iostream>
using namespace std;

void pattern1(int n){
    cout<<"pattern 1"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern2(int n){
    cout<<"pattern 2"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern3(int n){
    cout<<"pattern 3"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern4(int n){
    cout<<"pattern 4"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern5(int n){
    cout<<"pattern 5"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern6(int n){
    cout<<"pattern 6"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        for(int j=0; j<2*(n-i-1); j++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern7(int n){
    cout<<"pattern 7"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern8(int n){
    cout<<"pattern 8"<<endl;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        for(int j=0; j<2*(n-i-1); j++){
            cout<<" ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern9(int n){
    cout<<"pattern 9"<<endl;
    for(int i=n-1; i>=0; i--){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main() {
    int n = 3;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    return 0;
}
