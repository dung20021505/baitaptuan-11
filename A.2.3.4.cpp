#include <iostream>
using namespace std;
class Fraction
{
public:
int numerator, denominator;
void print(int a,int b){
	int c=a;
	int d=b; 
	while(a!=b){
		if(a>b){
			a=a-b; 
		} else{
			b=b-a; 
		} 
	
	} 
	a= c/a;
		b= d/b;
		cout << a << "/" << b << endl; 
}
void  cong (int a,int b, int c, int d){
	int x =a*d+b*c;
	int y= b*d;
	print(x,y); 
} 
void  tru (int a,int b, int c, int d){
	int x =a*d-b*c;
	int y= b*d;
	print(x,y); 
}
void  nhan (int a,int b, int c, int d){
	int x =a*c;
	int y= b*d;
	print(x,y);
}
void chia  (int a,int b, int c, int d){
	nhan(a,b,d,c); 
}
} ;
int main(){
    int a;
	int b;
	int c;
	int d;
	char dau;
	cin >> a >> b ;
	cin >>dau ;
	cin  >> c >> d; 
	 Fraction phanso1{a,b}; 
	 Fraction phanso2{c,d};
switch (dau)
    {
    case '+':
        cout << "ket qua la : ";
        phanso1.cong(a, b, c, d);
        break;
    case '-':
        cout << "ket qua la : ";
        phanso1.tru(a, b, c, d);
        break;
    case '*':
        cout << "ket qua la : ";
        phanso1.nhan(a, b, c, d);
        break;
    case '/':
        cout << "ket qua la : ";
        phanso1.chia(a, b, c, d);
        break;
    }
    
    return 0;
}

