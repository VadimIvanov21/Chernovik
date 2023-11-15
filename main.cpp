#include <iostream>
#include<string>

using namespace std;




int main()
{
   setlocale(LC_ALL, "RUSSIAN");

string a, b, q;
char c;

   cout << "«нак: +, -" << endl;
  cin >> c;
   cout << "1-е число?" << endl;
   cin >> a;
    cout << "2-е число?" << endl;
   cin >> b;


int i, e, str3, str4, v = 0, z;
for(i = a.length() - 1; i >= 0; i--){
    str3 = str3 +a[i];
}
for(e = b.length() - 1; e >= 0; e--){
    str4 = str4 + b[e];

if (c == '+'){
    while(a[v] != '\0' && b[v] != '\0'){
       z = z + a[v] + b[v];
       v++;
    }
cout << z;
}
if (c == '-'){
    q = str3 - str4;
}


   }
   return 0;
}

