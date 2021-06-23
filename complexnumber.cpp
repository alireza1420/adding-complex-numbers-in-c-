#include<iostream>
using namespace std;

class complex {
	friend complex operator+(int, complex);
	friend istream & operator>>(istream&, complex&);
	friend ostream & operator<<(ostream&, const complex&);// const tarif kardim chon garar nist tagiri rosh anjam beshe
	float a;
	float b;
	float c;
public:
	void print(complex);
	complex operator++();
};
/*void complex::print(complex result) {
	cout << result;
};*/
complex complex::operator++() {// hanoz anjam nashode
	this->a=a++;

};
int main() {
	complex x, y, z,k;
	cin >> x>>y;

	z = 10 + x;
	/*z.print();*/
	cout << z;
	z = -0.5 + y;
	cout << z;


	cin.get();
	cin.get();
};
complex operator+(int p1, complex p2) {
	complex temp;
	temp.a = p1 + p2.a;
	temp.b = p2.b;
	return temp;

};


istream & operator>>(istream& p1, complex& p2) {
	cout << "Enter a complex number :\n a=";
	p1 >> p2.a;
	cout << "b=";
	p1 >> p2.b;
	return p1;

};
ostream & operator<<(ostream& p1, const complex& p2) {

	if (p2.b > 0) {
		p1 << p2.a << "+" << p2.b << "i\n";
	}
	else if (p2.b < 0) {
		p1 << p2.a << p2.b << "i\n";
	}
	else {
		p1 << p2.a << endl;
	}
	return p1;
};
