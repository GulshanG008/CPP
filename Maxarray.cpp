#include <iostream>
using namespace std;

void input(int[], int);
void print(int[], int);
void max(int[], int);

int main(){

    int a[10], s;
    cout << "Enter the number of elements(upto 10)";
    cin >> s;
    cout << "Enter the elements: ";
    input(a, s);
    cout << "The elements are: ";
    print(a, s);
    max(a,s);
    return 0;
}

void input(int a1[], int s1){
    for (int i = 0; i< s1; i++) {
        cin >> a1[i];
    }
}

void print(int a1[], int s1){
    for (int i = 0; i < s1; i++){
        cout << a1[i] << " ";
    }
    cout << endl;
}

void max(int a1[], int s1){
    int l,s = a1[0];
    for ( int i = 1; i < s1; i++){
        if (a1[i]>l){
            l=a1[i];
                    }
        if (a1[i]<s){
            s=a1[i];
                    }
    }
    cout << "Max Value: " << l << endl;
    cout << "Min Value: " << s << endl;
}