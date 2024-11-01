#include <iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a number : ";
    cin >> a;
    int cnt = 0;
    if (a <= 1)
        printf("%d is not prime\n", a);
    else
    {
        for (int i = 1; i <=a; i++)
        {
            if (a % i == 0)
                cnt++;
        }
        if (cnt > 2)
            printf("%d is not prime\n", a);
        else
            printf("%d is prime", a);
    }
    return 0;

}