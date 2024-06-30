#include<iostream>
#include<stdio.h>
#include<iomanip>
using namespace std;
int main(){
   int a;
   cin >> a;
   (a % 2==0) ? cout << "Even" <<endl : cout << "Odd" <<endl;
   return 0;
}