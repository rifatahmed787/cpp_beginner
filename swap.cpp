#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
   int a, b;
   cin >> a >> b;
   int temp= a;
     a=b;
     b=temp;
    cout << a << " " << b << endl;
   return 0;
}