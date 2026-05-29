//Write a program to Find product of digits
#include<iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the value of n: " << endl;
    cin >> n;

    int product = 1;
    while(n > 0){
        int ld = n % 10;
        product = product * ld;
        n = n/10;
    }
    cout<<"Product of digits of"<<n<<" is: "<<product<<endl;
    return 0;
}