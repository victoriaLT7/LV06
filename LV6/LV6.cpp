// Victoria Levacic Tkalec, 1.RM
//

#include <iostream>
using namespace std;

void zadatak_a();
void zadatak_b();
void zadatak_c();
void zadatak_d();
void zadatak_e();
void zadatak_f();

int main()
{
	/*zadatak_a();*/
	/*zadatak_b();*/
	/*zadatak_c();*/
	/*zadatak_d();*/
	/*zadatak_e();*/
	/*zadatak_f();*/
	return(0);
}

void zadatak_a()
{
	int P1, P2, P3, P4;
	int M1, M2, M3, M4;
	
	cin >> P1;
	cin >> P2;
	cin >> P3;
	cin >> P4;
	cin >> M1;
	cin >> M2;
	cin >> M3;
	cin >> M4;

	int p1i2 = P1 + P2;
	int p1i2i3 = P1 + P2 + P3;
	int p_svi4 = P1 + P2 + P3 + P4;

	int m1i2 = M1 + M2;
	int m1i2i3 = M1 + M2 + M3;
	int m_svi4 = M1 + M2 + M3 + M4;

	if (P1 > M1)
	{
		cout << "PAT" << endl;
	}
	else
	{
		cout << "MAT" << endl;
	}
	if (p1i2 > m1i2)
	{
		cout << "PAT" << endl;
	}
	else
	{
		cout << "MAT" << endl;
	}
	if (p1i2i3 > m1i2i3)
	{
		cout << "PAT" << endl;
	}
	else
	{
		cout << "MAT" << endl;
	}
	if (p_svi4 > m_svi4)
	{
		cout << "PAT" << endl;
	}
	else
	{
		cout << "MAT" << endl;
	}
}
void zadatak_b()
{
	char slovo;

	cout << "Unesite jedno slovo: "; cin >> slovo;
	cout << "za slovo " << slovo << " je rijec: ";

	if (slovo == 'A')
	{
		cout << "Alfa";
	}
	else if (slovo == 'B')
	{
		cout << "Bravo";
	}
	else if (slovo == 'C')
	{
		cout << "Charlie";
	}
	else if (slovo == 'D')
	{
		cout << "Delta";
	}
	else if (slovo == 'E')
	{
		cout << "Echo";
	}
	else if (slovo == 'F')
	{
		cout << "Foxtrot";
	}
	else if (slovo == 'G')
	{
		cout << "Golf";
	}
	else if (slovo == 'H')
	{
		cout << "Hotel";
	}
	else if (slovo == 'I')
		cout << "India";
	else if (slovo == 'J')
	{
		cout << "Juliett";
	}
	else if (slovo == 'K')
	{
		cout << "Kilo";
	}
	else if (slovo == 'L')
	{
		cout << "Lima";
	}
	else if (slovo == 'M')
	{
		cout << "Mike";
	}
	else if (slovo == 'N')
	{
		cout << "November";
	}
	else if (slovo == 'O')
	{
		cout << "Oscar";
	}
	else if (slovo == 'P')
	{
		cout << "Papa";
	}
	else if (slovo == 'Q')
	{
		cout << "Quebec";
	}
	else if (slovo == 'R')
	{
		cout << "Romeo";
	}
	else if (slovo == 'S')
	{
		cout << "Sierra";
	}
	else if (slovo == 'T')
	{
		cout << "Tango";
	}
	else if (slovo == 'U')
	{
		cout << "Uniform";
	}
	else if (slovo == 'V')
	{
		cout << "Victor";
	}
	else if (slovo == 'W')
	{
		cout << "Whiskey";
	}
	else if (slovo == 'X')
	{
		cout << "X-ray";
	}
	else if (slovo == 'Y')
	{
		cout << "Yankee";
	}
	else if (slovo == 'Z')
	{
		cout << "Zulu";
	}
	else cout << "Niste stavili veliko slovo. Ponovo upisite.";

	cout << endl;
}

void zadatak_c()
{
	int bn, n, k;

	cin >> bn;
	cin >> n;

	if (bn < 10000)
	{
		k = bn * n ;
		cout << k;
	}
	else
	{
		k = (bn * n) * 2 ;
		cout << k;
	}

}

void zadatak_d()
{
	int a, b, c, d; cin >> a >> b >> c>>d;
	int p, q; cin >> p >> q;

	if (a > c && a > d && b > c && b > d)
	{
		if (p>q)
		{
			cout << "A";

		}
		else
		{
			cout << "B";
		}
	}
	else if (a > b && a > d && c > b && c > d)
	{
		if (p > q)
		{
			cout << "A";

		}
		else
		{
			cout << "C";
		}
	}
	else if (a > c && a > b && d > c && d > b)
	{
		if (p > q)
		{
			cout << "A";

		}
		else
		{
			cout << "D";
		}
	}
	else if (b > a && b > d && c > a && c > d)
	{
		if (p > q)
		{
			cout << "B";
		}
		else
		{
			cout << "C";
		}
	}
	else if (b > a && b > c && d > a && d > c)
	{
		if (p > q)
		{
			cout << "B";
		}
		else
		{
			cout << "D";
		}
	}
	else if (c > a && c > b && d > a && d > b)
	{
		if (p > q)
		{
			cout << "C";
		}
		else
		{
			cout << "D";
		}
	}

}

void zadatak_e()
{
	int n; cin >> n;

	if (n / 100 % 10 == n % 10)
	{
		cout << "RAVNOTEZA";
	}
	else if (n / 100 % 10 > n % 10)
	{
		cout << "LIJEVI NAGIB";
	}
	else
	{
		cout << "DESNI NAGIB";
	}
}

void zadatak_f()
{
	float visina, tezina; cin >> visina >> tezina; 
	int BMI = tezina / (visina * visina);

	cout << "Unesi visinu(m): "; cin >> visina;  
	cout << "Unesi tezinu(kg): "; cin >> tezina;  

	if (BMI<20)
	{
		cout << "pothranjeno - napravi sio mlijecni shake"<<endl;
	}
	else if (BMI >= 20 && BMI <= 25)
	{
			cout << "normalno - uzmi casu mlijeka" << endl;
	}
	else if (BMI >= 26 && BMI <= 30)
	{
		cout << "prekomjerno - uzmi casu ledenog caja" << endl;
	}
	else
	{
		cout << "pretilo - posjeti lijecnika" << endl;
	}
}