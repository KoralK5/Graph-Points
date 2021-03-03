#include <iostream>
#include <cmath>
using namespace std;

void points(string type, float k,float d,float a,float c){
	for (int i=-10; i<10; i++){
		if (type == "l"){
			if ((i/k+d == int(i/k+d)) && (i*a+c == int(i*a+c))){
				cout<<"("<<(i/k+d)<<", "<<i*a+c<<")\n";
			}
		}
		else if (type == "q"){
			if ((i/k+d == int(i/k+d)) && (pow(i, 2)*a+c == int(pow(i, 2)*a+c))){
				cout<<"("<<(i/k+d)<<", "<<pow(i, 2)*a+c<<")\n";
			}
		}
		else if (type == "a"){
			if ((i/k+d == int(i/k+d)) && (fabs(i)*a+c == int(fabs(i)*a+c))){
				cout<<"("<<(i/k+d)<<", "<<fabs(i)*a+c<<")\n";
			}
		}
		else if (type == "r"){
			if ((i/k+d == int(i/k+d)) && (sqrt(i)*a+c == int(sqrt(i)*a+c))){
				cout<<"("<<(i/k+d)<<", "<<sqrt(i)*a+c<<")\n";
			}
		}
		else if (type == "f"){
			if (i != d){
				if ((i/k+d == int(i/k+d)) && (1/i*a+c == int(1/i*a+c))){
					cout<<"("<<(i/k+d)<<", "<<1/i*a+c<<")\n";
				}
			}
		}
	}
}

int main(){
	cout<<"FUNCTION: aF(k(x - d)) + c\n";
	cout<<"MAPPING RULE: (x/k + d, ay + c)\n";

	string type;
	while (type != "l" and type != "q" and type != "a" and type != "r" and type != "f"){
		cout<<"\ntype - (l)inear, (q)uadratic, (a)bs, (r)oot, (f)raction: ";cin>>type;
	}

	float a, k, d, c;
	cout<<"\na: ";cin>>a;
	cout<<"\nk: ";cin>>k;
	cout<<"\nd: ";cin>>d;
	cout<<"\nc: ";cin>>c;
	cout<<"\nPoints:\n";

	points(type, k, d, a, c);
	return 0;
}
