﻿// кр 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double x, y, z, h, s;
	x = -15.246; 
	y = 0.04642; 
	z = 21; 
	s = -182.038;

	cout << "x = " << x << " y = " << y << " z = " << z << " h = " << s << endl;

	h = log(pow(y, -(pow((abs(x)),(0.5))))) * (x - y / 2) + pow(sin(atan(z)),2);

	cout << "Result h = " << h << endl;
	return 0;
}
//h = (pow(x, 2 * y) + exp(y - 1)) / (1 + x * abs(y - tan(z))) + 10 * pow(x, 1 / 3.) - log(z);
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
