#include <iostream>
using namespace std;

void pattern1(int n){
    cout<<"pattern1"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }    
    cout<<endl;
}

void pattern2(int n){
    cout<<"pattern2"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }    
    cout<<endl;
}

void pattern3(int n){
    cout<<"pattern3"<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=n-i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern4(int n){
    cout<<"pattern4"<<endl;
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern5(int n){
    cout<<"pattern5"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern6(int n){
    cout<<"pattern6"<<endl;
    for(int i=n; i>=1; i--){
        for(int j=i; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern7(int n){
    cout<<"pattern7"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern8(int n){
    cout<<"pattern8"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        for(int j=1; j<=(2*i-1); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void pattern9(int n){
    cout<<"pattern9"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"  ";
        }
        int k = 1;
        for(int j=1; j<=(2*i-1); j++){
            cout<<k<<" ";
            if(j<=(2*i-1)/2)
                k++;
            else 
                k--;
        }
        cout<<endl;
    }
    cout<<endl;
}

int main() {
    
    int n=3;
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