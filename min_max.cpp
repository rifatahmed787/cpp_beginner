#include<iostream>
#include<algorithm>

using namespace std;
int main(){
//    int a, b;
//    cin >> a >> b;
//    if(a>b)
//      cout << a;
//    else
//      cout << b; 
//    int mn=min(a,b);
//    int mx=max(a,b);
//    cout << mn << " " << mx << endl;

   int a, b, c, d;
   cin >> a >> b >> c >> d;
   int mn=min({a,b,c,d});
   int mx=max({a,b,c,d});
   cout << mn << " " << mx << endl;
   return 0;
}