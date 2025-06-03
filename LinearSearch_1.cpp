#include <iostream>
using namespace std;

int main(){
    int arr[]={1,3,4,5,6};
    int x=4;
    bool found = false;
    for(int i=0;i<=4;i++){
        if (arr[i]==x){
            cout << "The given number found in the array: " << x << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Not found" << endl;
    }
    return 0;
}
