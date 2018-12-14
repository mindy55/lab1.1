#include <iostream>
using namespace std;

float fraction(float a, float b);
void fraction(float x, float y, float z, float u);
int main()
{   
    float n,m,n2,m2;
    cout << "Enter numerator: ";
    cin >>n;
    cout << "Enter denominator: ";
    cin >>m;
    
    cout << "Enter second numerator: ";
    cin >>n2;
    cout << "Enter second denominator: ";
    cin >>m2;
    float x=n/m;
    float y=n2/m2;
    
    cout << "S1 = " << fraction(x,y) << endl; 
    fraction(n, m, n2, m2); 
    return 0;
}

float fraction(float a, float b) 
{
return a - b; 
}

void fraction(float x, float y, float z, float u)
{
  float v,c;
  
  if(y==u)
  {
    v=x-z;
    c=y;
  }
  else
  {
    c=y*u;
    v=x*u-z*y;
  }      
  cout <<"S2 = "<<v<<"/"<<c<<endl;
}
