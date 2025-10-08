////задача 1
//#include <iostream>
//
//using namespace std;
//double sum(double a, double b);
//double raznost(double a, double b);
//double umn(double a, double b);
//
//int main() {
//	setlocale(0, "");
//	double a, b;
//	cin >> a >> b;
//	cout << sum(umn(raznost(sum(a, b), 2), 5), umn(1000, a));
//	return 0;
//}
//
//
//double sum(double a, double b) {
//	return a + b;
//}
//
//double raznost(double a, double b) {
//	return a - b;
//}
//
//double umn(double a, double b) {
//	return a * b;
//}


////задача 2
//#include <iostream>
//#include <cmath>
//using namespace std;
//double f(double x1, double y1, double x2, double y2);
//double g(double x1, double y1, double x2, double y2, double x3, double y3);
//double z(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);
//
//int main() {
//	setlocale(0, "");
//	int x1, y1, x2, y2;
//	double x3, y3;
//	double x4, y4;
//
//	cin >> x1 >> y1 >> x2 >> y2;
//	cin >> x3 >> y3;
//	cin >> x4 >> y4;
//	cout << "a) " << f(x1, y1, x2, y2) << endl;
//	cout << "b) первая точка " << f(0, 0, x2, y2) << endl;
//	cout << "b) вторая точка " << f(x1, y1, 0, 0) << endl;
//	cout << "c) " << g(x1, y1, x2, y2, x3, y3) << endl;
//	cout << "d) " << z(x1, y1, x2, y2, x3, y3, x4, y4);
//	return 0;
//}
//
//
//double f(double x1, double y1, double x2, double y2) {
//	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
//}
//
//double g(double x1, double y1, double x2, double y2, double x3, double y3) {
//	double r1 = f(x1, y1, x2, y2);
//	double r2 = f(x3, y3, x2, y2);
//	double r3 = f(x3, y3, x1, y1);
//	double p = (r1 + r2 + r3) / 2;
//	if ((r1 + r2 > r3) && (r2 + r3 > r1) && (r1 + r3 > r2)) {
//		return sqrt(p * (p - r1) * (p - r2) * (p - r3));
//	}
//	return 0;
//}
//
//double z(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4) {
//	double s1 = g(x1, y1, x2, y2, x3, y3);
//	double s2 = g(x2, y2, x3, y3, x4, y4);
//	return s1 + s2;
//}


////задача 3
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//double f(double x);
//
//int main() {
//	setlocale(0, "");
//	double a, b;
//	int count = 0;
//	double mx = -100000000;
//	cout << "a = ";  cin >> a;
//	cout << "b = "; cin >> b;
//	cout << "a) " << 12.5 + f(2) - f(4) * f(10) + f(a) - f(b) + f(a * b) << endl;
//
//	double x[7], y[7];
//	for (int i = 0; i < 7; i++) {
//		cin >> x[i];
//	}
//	for (int i = 0; i < 7; i++) {
//		y[i] = f(x[i]);
//	}
//
//	for (int i = 0; i < 7; i++) {
//		if (y[i] < 0) {
//			count++;
//		}
//		mx = max(mx, y[i]);
//	}
//
//	cout << "b) " << endl;
//	cout << "Количество отрицательеых элементов: " << count << endl;
//	cout << "Максимальный элемент: " << mx;
//	return 0;
//}
//
//double f(double x) {
//	if (x < 0) {
//		return 7 / 3;
//	}
//	else if (x >= 0 && x < 2 * M_PI) {
//		return x * x - 3;
//	}
//	else {
//		return (1 + x * x * x) / (2 * x);
//	}
//}


////задача 4
//#include <iostream>
//
//using namespace std;
////void stars_a();
//void stars_b(int n);
////void stars_c(int n, int m);
//void d(int n, int m);
//
//int main() {
//	setlocale(0, "");
//	int n, m;
//	cout << "Введите размер n: "; cin >> n;
//	cout << endl << "Введите отступ m: "; cin >> m;
//	cout << "a) " << endl;
//	//stars_a();
//
	//cout << endl << "b) " << endl;
	//stars_b(n);

//	//cout << endl << "c) " << endl;
//	//stars_c(n, m);
//
//	cout << endl << "d) " << endl;
//	d(n, m);
//	return 0;
//}
//
//
//void stars_a() {
//	int n = 4;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//}
//
///*void stars_b(int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	*/}
//}
//
//void stars_c(int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int k = 0; k < m; k++) {
//			cout << " ";
//		}
//		for (int j = 0; j < n; j++) {
//			cout << "* ";
//		}
//		cout << endl;
//	}
//}



////задача 5
//#include <iostream>
//
//using namespace std;
//double factorial(double n);
//double st(double x, double n);
//
//int main() {
//	setlocale(0, "");
//	double n, m, x;
//	cout << "n = "; cin >> n;
//	cout << "m = "; cin >> m;
//	cout << "x = "; cin >> x;
//	cout << "a) " << factorial(n) * factorial(m) / factorial(n + m) << endl;
//	cout << "b) " << st(x, n);
//	return 0;
//}
//
//
//double factorial(double n) {
//	double result = 1;
//	for (int i = 1; i < n + 1; i++) {
//		result *= i;
//	}
//	return result;
//}
//
//double st(double x, double n) {
//	double result = 1;
//	for (int i = 1; i < n + 1; i++) {
//		result *= x;
//	}
//	return result;
//}


////задача 6
//#include <iostream>
//
//using namespace std;
//void znak(double n);
//void text(double n);
//
//int main() {
//	setlocale(0, "");
//	double n;
//	cout << "Введите число: "; cin >> n;
//	znak(n);
//	text(n);
//	return 0;
//}
//
//
//void znak(double n) {
//	if (n > 0) {
//		cout << "+";
//	}
//	else if (n < 0) {
//		cout << "-";
//	}
//}
//
//
//void text(double n) {
//	if (fabs(n) == 0) {
//		cout << "ноль";
//	}
//	else if (fabs(n) == 1) {
//		cout << "один";
//	}
//	else if (fabs(n) == 2) {
//		cout << "два";
//	}
//	else if (fabs(n) == 3) {
//		cout << "три";
//	}
//	else if (fabs(n) == 4) {
//		cout << "четыре";
//	}
//	else if (fabs(n) == 5) {
//		cout << "пять";
//	}
//	else if (fabs(n) == 6) {
//		cout << "шесть";
//	}
//	else if (fabs(n) == 7) {
//		cout << "семь";
//	}
//	else if (fabs(n) == 8) {
//		cout << "восемь";
//	}
//	else if (fabs(n) == 9) {
//		cout << "девять";
//	}
//	else if (fabs(n) == 10) {
//		cout << "десять";
//	}
//}


////задача 7
//#include <iostream>
//
//using namespace std;
//double faren(double c);
//double kel(double c);
//void farkel(double& f, double& k, double c);
//
//int main() {
//	setlocale(0, "");
//	double c1, c2;
//	cin >> c1 >> c2;
//	double f = 0, k = 0;
//	cout << "1) " << faren(c1) << endl;
//	cout << "2) " << kel(c1) << endl;
//	cout << "3) ";
//	farkel(f, k, c2);
//	cout << f  << endl << k;
//	return 0;
//}
//
//
//double faren(double c) {
//	return 1.8 * c + 32;
//}
//
//double kel(double c) {
//	return c + 273;
//}
//
//void farkel(double &f, double &k, double c) {
//	f = 1.8 * c + 32;
//	k = c + 273;
//}


////задача 8
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//void discriminant(double a, double b, double c, double* x1, double* x2, double* count);
//
//int main() {
//	setlocale(0, "");
//	double a, b, c;
//	cout << "Уравнение вида ax^2 + bx + c = 0" << endl;
//	cout << "a = "; cin >> a;
//	cout << "b = "; cin >> b;
//	cout << "c = "; cin >> c;
//	double x1, x2, count = 0;
//	discriminant(a, b, c, &x1, &x2, &count);
//	if (count == 2) {
//		cout << "x1 = " << x1 << endl;
//		cout << "x2 = " << x2;
//	}
//	else if (count == 1) {
//		cout << "x1 = " << x1;
//	}
//	else if (count == 0) {
//		cout << "Действительных корней нет";
//	}
//	return 0;
//}
//
//void discriminant(double a, double b, double c, double* x1, double* x2, double* count) {
//	double discr = b * b - 4 * a * c;
//	if (discr > 0) {
//		(*count) = 2;
//		(*x1) = ((-1) * b + sqrt(b * b - 4 * a * c)) / (2 * a);
//		(*x2) = ((-1) * b - sqrt(b * b - 4 * a * c)) / (2 * a);
//	}
//	else if (discr == 0) {
//		(*count) = 1;
//		(*x1) = ((-1) * b)/ (2 * a);
//	}
//	else {
//		count = 0;
//	}
//}


////задача 9
//#include <iostream>
//
//using namespace std;
//void f(double x);
//
//int main() {
//	setlocale(0, "");
//	double a, b;
//	cout << "a = "; cin >> a;
//	cout << "b = "; cin >> b;
//	f(2)
//	cout << f(2) - f(0) * f(a) << endl;
//	cout << f(2 * a) - f(6) + f(a * b);
//	return 0;
//}
//
//void f(double &x) {
//	if (x <= 2 && x != 1 && x != 0) {
//		x = (2 * x + 1 / (1 - x)) / (3 * x);
//	}
//	else if (x > 2 && x <= 5) {
//		x =  72 / 7;
//	}
//	else if (x > 5) {
//		x =  -3 - x;
//	}
//	else {
//		x = 0;
//	}
//}



////задача 10
//#include <iostream>
//
//using namespace std;
//double srznach(double a, double b);
//double srznach(double a, double b, double c);
//double srznach(double a, double b, double c, double d);
//
//int main() {
//	setlocale(0, "");
//	cout << srznach(1.0, 2.0) << endl;
//	cout << srznach(1.0, 3.0, 4.0) << endl;
//	cout << srznach(1.0, 2.0, 3.0, 4.0) << endl;
//	return 0;
//}
//
//double srznach(double a, double b) {
//	return (a + b) / 2.0;
//}
//
//double srznach(double a, double b, double c) {
//	return (a + b + c) / 3.0;
//}
//
//double srznach(double a, double b, double c, double d) {
//	return (a + b + c + d) / 4.0;
//}


////задача 11
//#define _USE_MATH_DEFINES
//#include <iostream>
//#include <cmath>
//
//using namespace std;
//double s(int a, int h);
//double s(int a, int b, int c);
//double s(double a, double b, double c);
//
//int main() {
//	setlocale(0, "");
//	int a, b, c;
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	double a2, b2, c2;
//	cin >> a2 >> b2 >> c2;
//	cout << "s1 = " << s(a, b) << endl;
//	cout << "s2 = " << s(a, b, c) << endl;
//	cout << "s3 = " << s(a2, b2, c2);
//	return 0;
//}
//
//double s(int a, int h) {
//	double pl = 0.5 * a * h;
//	return pl;
//}
//
//double s(int a, int b, int c) {
//	double ugol = c * M_PI / 180.0;
//	return 0.5 * a * b * sin(ugol);
//}
//
//double s(double a, double b, double c) {
//	double p = (a + b + c) / 2.0;
//	double pl = sqrt(p * (p - a) * (p - b) * (p - c));
//	return pl;
//}


////задача 12
//#include <iostream>
//
//using namespace std;
//void ticket(int a);
//void ticket(int a, int b, int c, int d, int e, int f);
//void ticket(int a, int b);
//
//int main() {
//	setlocale(0, "");
//	ticket(213312);
//	return 0;
//}
//
//void ticket(int a) {
//	if ((a/100000 + (a/10000)%10 + (a/1000)%10) == ((a/100)%10 + (a/10)%10 + a%10)) {
//		cout << "Билет счастливый!";
//	}
//	else {
//		cout << "Билет несчастливый";
//	}
//}
//
//void ticket(int a, int b, int c, int d, int e, int f) {
//	if (a + b + c == d + e + f) {
//		cout << "Счастливый билет!";
//	}
//	else {
//		cout << "Несчастливый билет";
//	}
//}
//
//void ticket(int a, int b) {
//	if ((a/100 + (a/10)%10 + a%10) == (b / 100 + (b / 10) % 10 + b % 10)) {
//		cout << "Happy ticket!";
//	}
//	else {
//		cout << "Unhappy ticket";
//	}
//}