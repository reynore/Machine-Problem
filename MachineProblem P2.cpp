#include <iostream>
#include <conio.h>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;
void calculator();
const float pi=3.14159;
string a,b,C,c,P,p,S,s;
int main ()
{
	cout << " Geometric Calculator Program\n";
	cout << " Press C for Cone , P for Pyramid, S for Sphere: ";
	cin >> a;
	
	calculator();
	
	cout << "\n\n Do you want to use the Calculator again ? (Y/N) ";
	cin >> b;
	
	if (b == "y" || b == "Y")
	{
	return main();
	}
	else
	{
	cout << "\n\n Thank you for using the calculator ";
	exit (0);
	}

}
	void calculator()
	{
	if (a == "c" || a == "C")
	{
	float r,h,vc,lac,bac,sac;
	cout << " Enter the radius of the Cone: ";
	cin>> r;
	
	cout << " Enter the height of the Cone: ";
	cin>> h;	
	
	vc = (1.0/3.0) * pi * (r*r) * h;
	lac = pi*r*(sqrt(h*h+r*r));
	bac = pi*(r*r);
	sac = pi*r*(r+(sqrt(h*h+r*r)));
	
	cout << fixed;
	cout << setprecision(2);
	cout << "\n\n\n\n Volume of the Cone : " << vc << "\n";
	cout << " Lateral Area of the Cone : " <<lac << "\n";
	cout << " Base Area of the Cone : " << bac << "\n";
	cout << " Surface Area of the Cone : " << sac << "\n";
	}
	
	else if (a == "P" || a == "p")
	{
	float l,w,ph,vp,lap,bap,sap;

	cout << " Enter the length of the Pyramid: ";
	cin>> l;
	cout << " Enter the width of the Pyramid: ";
	cin>> w;
	cout << " Enter the height of the Pyramid: ";
	cin>> ph;
	
	vp = (l*w*ph)/3;
	lap = l*sqrt((w/2)*(w/2)+ph*ph)+w*sqrt((l/2)*(l/2)+ph*ph);
	bap = l*w;
	sap = l*w+l*sqrt((w/2)*(w/2)+ph*ph)+w*sqrt((l/2)*(l/2)+ph*ph);
	
	cout << fixed;
	cout << setprecision(2);
	cout << "\n\n\n\n Volume of the Pyramid : " << vp << "\n";
	cout << " Lateral Area of the Pyramid : " << lap << "\n";
	cout << " Base Area of the Pyramid : " << bap << "\n";
	cout << " Surface Area of the Pyramid : " << sap << "\n";
	}
	
	else if (a == "S" || a == "s")
	{
	float sr,vs,sas;

	cout << " Enter the radius of the Sphere : ";
	cin >> sr;
	

	vs = (4*pi*sr*sr*sr)/3;
	sas = 4*pi*sr*sr;
	
	cout << fixed;
	cout << setprecision(2);
	cout << "\n\n\n\n Volume of the Sphere : " << vs << "\n";
	cout << " Surface Area of the Sphere : " << sas << "\n";
	}
	
	else{
		exit (0);
	}
}
