// pr8_files.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	int x, y, z;
	setlocale(0, "rus");
	FILE* fl;
	if (fopen_s(&fl, "rrr.txt", "r") != NULL)
	{
		printf("файл невозможно открыть\n");
	}
	else if(fscanf_s(fl, "%d,%d,%d", &x, &y, &z) == 3) {
			printf("x=%d, y=%d, z=%d\n", x, y, z);
			printf("Расстояние от начала координат до точки: %f", (sqrt(pow(x,2)+pow(y,2)+pow(z,2))));
	}
	
}