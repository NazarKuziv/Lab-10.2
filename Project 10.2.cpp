// Lab_10_2.cpp
// < Кузів Назар >
// Лабораторна робота № 10.2
// Пошук слів у текстовому файлі
// Варіант 6


#include <iostream>
#include <fstream>


using namespace std;

int CountWords(ifstream& f, int kilk)
{
	char words[100];
	f.open("t.txt");
	while (f >> words)
	{
		kilk++;
	}
	f.close();
	return kilk;
}

int main()
{
	ifstream f;
	cout << "The number of words in the file: "<< CountWords(f, 0) <<endl;

	return 0;
}