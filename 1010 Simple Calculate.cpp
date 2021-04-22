#include <bits/stdc++.h>

using namespace std;

int main()
{
 int a, b;
 double c, res;

 cin>>a>>b>>c;
 
 res = b * c;
 
 cin>>a>>b>>c;
 
 res += b * c;
 
 printf("VALOR A PAGAR: R$ %.2lf\n", res);

 return 0;
}
