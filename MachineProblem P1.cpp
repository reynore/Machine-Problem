#include<iostream>
#include<conio.h>
#include<cmath>
#include<iomanip>
using namespace std;
 
 
int Discriminant(int b, int c){
	int result = (b*b) - (4*c);
	if(result > 0 ){
		return 1;
	} else if(result == 0){
		return 2;
	} else if(result < 0){
		return 3;
	} else {
		return 0;
	}
}

void PrintEqn(int b, int c){
	cout << "x^2";
	if(b < 0){
		cout << b << "x";
	} else {
		cout << "+" << b << "x";
	}
	if(c < 0){
		cout << c;
	} else {
		cout << "+" << c;
	}
}

float SolveU(int b, int c){
	float result = (-b + sqrt((b*b) - (4*c)));
	return result;
}

float SolveV(int b, int c){
	float result = (-b - sqrt((b*b) - (4*c)));
	return result;
}

bool TestInt(int a){
	if(floor(a) == ceil(a)){
		return true;
	} else {
		return false;
	}
}


int main(){
	bool loop = true;
	do{
		system("cls");
		cout << "Factoring Polynomials\n\n";
		int a, b, c, ans1, ans2;
		cout << "In the following format of x^2 + bx + c\nEnter values for b and c\nb: ";
		cin >> b;
		cout << "c: ";
		cin >> c;
		system("cls");
	
		a = Discriminant(b, c);
	
		switch(a){
			case 0:
				//unfactorable
				PrintEqn(b, c);
				cout << " is unfactorable";
				break;
			case 1:
				//>0
				ans1 = -SolveU(b, c);
				ans2 = -SolveV(b, c);
				
				if(TestInt(sqrt(ans1)) && ans1%2 == 0){
					PrintEqn(b, c);
					cout << " = ";
					if(ans1/2 < 0){
						cout << "(x" << ans1/2 << ")";
					} else {
						cout << "(x + " << ans1/2 << ")";
					}
					if(ans2 < 0){
						cout << "(x" << ans2/2 << ")";
					} else {
						cout << "(x + " << ans2/2 << ")";
					}
				} else {
					cout << "U and V are not integers but have values of u = " << fixed << setprecision(2) << -SolveU(b, c)/2 << " and v = " << -SolveV(b, c)/2;	
				}
				break;
			case 2:
				//=0
				cout << "The Polynomial has one real solution.\n";
				ans1 = -SolveU(b, c)/2;
				PrintEqn(b, c);
				cout << " = ";
				if(ans1 < 0){
					cout << "(x" << ans1 << ")^2";
				} else {
					cout << "(x + " << ans1 << ")^2";
				}	
			
				break;
			
			case 3:
				//<0
				cout << "U and V are complex numbers. Hence, unfactorable.";
				break;
		}
		getch();
		system("cls");
		cout << "Would you like to exit? (Y/N)\n";
		char input = getch();
		if(input == 89 || input == 121){
			loop = false;
		} 
		
	}while(loop);
	cout << "Thank you for using this program!";
	return 0;
}
