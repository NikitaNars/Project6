#include <iostream>

int main()
{
	setlocale(LC_ALL, "ru");
	srand(time(NULL));
	const int size = 10;
	int coutDup = 0;
	int arrBot[size], arrUser[size];
	
	for (int i = 0; i < size; i++)
	{
		arrBot[i] = rand() % 11;
	}
	for (int i = 0; i < size; i++)
	{
		do
		{
			std::cout << "������� �����(������ �������: " << i << ") �� 0 �� 10 : ";
			std::cin >> arrUser[i];
		} while (arrUser[i] < 0 || arrUser[i] > 10);
	}

	std::cout << "������(�) ������� ���������: ";
	for (int i = 0; i < size; i++)
	{
		if (arrBot[i] == arrUser[i])
		{
			std::cout << i << " ";
			coutDup += 1;

		}
	}

	std::cout << "\n�� �������: " << coutDup << " ���(�) \n";

	for (int i = 0; i < size; i++)
	{
		std::cout << arrBot[i] << " ";
	}

	std::cout << "\n";

	for (int i = 0; i < size; i++)
	{
		std::cout << arrUser[i] << " ";
	}

	std::cout << "\n";

	if (coutDup == 0)
	{
		std::cout << "�� �������";
	}
	else if (coutDup == 1)
	{
		std::cout <<"�����";
	}
	else if (coutDup == 2)
	{
		std::cout << "���� �����";
	}
	else if (coutDup == 3)
	{
		std::cout << "����� ���� �����";
	}
	else
	{
		std::cout << "�� ��� ���� ������?";
	}
}