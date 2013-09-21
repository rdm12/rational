// Rat.h

using namespace std;

class Rat
{
public:
	Rat(int _n = 0, int _d = 1)//: n(_n), d(_d) {};
	{
		n = _n;
		d = _d;
	}
	friend Rat operator+ (Rat a, Rat b);
	friend Rat operator- (Rat a, Rat b);
	friend Rat operator* (Rat a, Rat b);
	friend Rat operator/ (Rat a, Rat b);
	friend Rat operator^ (Rat a, int p);
	friend ostream& operator<< (ostream& out, Rat a);
	friend int GCD(int a, int b);
	friend Rat& simplify(Rat& a);

private:
	int n ,d;
};

Rat operator+ (Rat a, Rat b)
{
	Rat t;
	t.n = a.n*b.d + a.d*b.n;
	t.d = a.d * b.d;
	return simplify(t);	
}

Rat operator- (Rat a, Rat b)
{
	Rat t;
	t.n = a.n*b.d - a.d*b.n;
	t.d = a.d * b.d;
	return simplify(t);	
}

Rat operator* (Rat a, Rat b)
{
	Rat t;
	t.n = a.n * b.n;
	t.d = a.d * b.d;
	return simplify(t);	
}

Rat operator/ (Rat a, Rat b)
{
	Rat t;
	t.n = a.n * b.d;
	t.d = a.d * b.n;
	return simplify(t);	
}

Rat operator^ (Rat a, int p)
{
	Rat t = 1;
	int n = (p >= 0) ? p : -p;

	for (int i = 0; i < n; i++)
		t = t * a;
	if (p < 0 )
		t = 1 / t;

	return simplify(t);	
}

ostream& operator<< (ostream& out, Rat a)
{
	simplify(a);
	if (a.d == 0)
		out << "NaN";
	else if (a.d == 1)
		out << a.n;
	else 
		out << a.n << "/" << a.d;
	return out;
}

int GCD(int a, int b)
{
	if (b == 0) return a;
	if (b > a)	std::swap(a,b);

	return GCD(b, a % b);
}

Rat& simplify(Rat& a)
{
	int t = GCD(a.n, a.d);
	a.n = a.n / t;
	a.d = a.d / t;
	return a;
}