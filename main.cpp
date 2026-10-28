#include<iostream>
#include "sum.h"
#include "dif.h"
#include <cmath>
using namespace std;

int main()
{
	double a = 5, b = 3;
	cout<<"Hello World!!!"<<endl;
	cout<<a<<" + "<<b<<" = "<<sum(a,b)<<endl;
	cout<<a<<" - "<<b<<" = "<<dif(a,b)<<endl;
	cout<<a<<" ^ "<<b<<" = "<<pow(a,b)<<endl;
}