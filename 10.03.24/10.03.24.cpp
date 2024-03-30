#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double pizza[]{ 1,2,3,4 }; //���������, ������ ����, ���������, �������
	double drinks[]{ 2,1,0.2 }; // ����, ������, ����
	double pepperoni = 0, fourCheese = 0, margarita = 0, bbq = 0, cola = 0, sprite = 0, water = 0;

	double choose, amount;

	int numPizzasPay = 0, freePizzas = 0;

	std::cout << "\n\t\t����� ���������� � ���� ��������!\n\n";

	std::cout << "����:\n\n�����:\n\n1. ���������(1$)\n2. ������ ����(2$)\n3. ���������(3$)\n4. �������(4$)";
	std::cout << "\n\n�������:\n\n5. ����(2$)\n6. ������(1$)\n7. ����(0.2$)";

	std::cout << "\n\n������:\n\n1. ���� ����� ����� ������ ����� 50$, �� ������ ������ ���������� 20% �� ����� ������.";
	std::cout << "\n2. ������ ����� ����� � � �������\n3. ��� �������� � ����� ����� 2$, ���� ���������� � ������ ����� ����, �� ������ 15% (������ �� �������, � �� ������ �����).";

	std::cout << "\n\n������� ��� ������ (� ������ == ��� ������): ";
	std::cin >> choose;

	std::cout << "\n������� ���������� ������: ";
	std::cin >> amount;

	if (choose == 1)
	{
		pepperoni += amount;
		numPizzasPay += amount;
		std::cout << "\n�� ��������: " << amount << " ����(�, �) ���������.";
	}
	else if (choose == 2)
	{
		fourCheese += amount;
		numPizzasPay += amount;
		std::cout << "\n�� ��������: " << amount << " ����(�, �) ������ ����.";
	}
	else if (choose == 3)
	{
		margarita += amount;
		numPizzasPay += amount;
		std::cout << "\n�� ��������: " << amount << " ����(�, �) ���������.";
	}
	else if (choose == 4)
	{
		bbq += amount;
		numPizzasPay += amount;
		std::cout << "\n�� ��������: " << amount << " ����(�, �) �������.";
	}
	else if (choose == 5)
	{
		cola += amount;
		std::cout << "\n�� ��������: " << amount << " �����(��, ���, ��) ����.";
	}
	else if (choose == 6)
	{
		sprite += amount;
		std::cout << "\n�� ��������: " << amount << " �����(��, ���, ��) ������.";
	}
	else if (choose == 7)
	{
		water += amount;
		std::cout << "\n�� ��������: " << amount << " �����(��, ���, ��) ����.";
	}
	if (pepperoni > 0 || fourCheese > 0 || margarita > 0 || bbq > 0)
	{
		if (numPizzasPay % 5 == 0)
		{
			freePizzas += 1;
			numPizzasPay -= 5;
		}
	}
	std::string decision;

	std::cout << "\n\n������� ���������� ����������? (y/n) ";
	std::cin >> decision;

	if (decision == "y")
	{
		choose = 0;
		do
		{
			std::cout << "\n����:\n\n�����:\n\n1. ���������(1$)\n2. ������ ����(2$)\n3. ���������(3$)\n4. �������(4$)";
			std::cout << "\n\n�������:\n\n5. ����(2$)\n6. ������(1$)\n7. ����(0.2$)";

			std::cout << "\n\n������� ��� ������ (� ������ == ��� ������): ";
			std::cin >> choose;

			std::cout << "\n������� ���������� ������: ";
			std::cin >> amount;

			if (choose == 1)
			{
				pepperoni += amount;
				numPizzasPay += amount;
				std::cout << "\n�� ��������: " << amount << " ����(�, �) ���������.";
			}
			else if (choose == 2)
			{
				fourCheese += amount;
				numPizzasPay += amount;
				std::cout << "\n�� ��������: " << amount << " ����(�, �) ������ ����.";
			}
			else if (choose == 3)
			{
				margarita += amount;
				numPizzasPay += amount;
				std::cout << "\n�� ��������: " << amount << " ����(�, �) ���������.";
			}
			else if (choose == 4)
			{
				bbq += amount;
				numPizzasPay += amount;
				std::cout << "\n�� ��������: " << amount << " ����(�, �) �������.";
			}
			else if (choose == 5)
			{
				cola += amount;
				std::cout << "\n�� ��������: " << amount << " �����(��, ���, ��) ����.";
			}
			else if (choose == 6)
			{
				sprite += amount;
				std::cout << "\n�� ��������: " << amount << " �����(��, ���, ��) ������.";
			}
			else if (choose == 7)
			{
				water += amount;
				std::cout << "\n�� ��������: " << amount << " �����(��, ���, ��) ����.";
			}
			if (pepperoni > 0 || fourCheese > 0 || margarita > 0 || bbq > 0)
			{
				if (numPizzasPay % 5 == 0)
				{
					freePizzas += 1;
					numPizzasPay -= 5;
				}
			}
			amount = 0;

			decision = "";

			std::cout << "\n\n������� ���������� ����������? (y/n) ";
			std::cin >> decision;
		} while (decision != "n");
	}
	if (decision == "n")
	{
		double check = 0;
		std::cout << "\n��� �����:";
		if (pepperoni > 0 || fourCheese > 0 || margarita > 0 || bbq > 0)
		{
			std::cout << "\n\n�����:\n";
			if (pepperoni > 0)
			{
				check += pepperoni * pizza[0];
				std::cout << "\n���������: " << pepperoni << "��, ���� �� ���: " << pepperoni * pizza[0] << "$";
			}
			if (fourCheese > 0)
			{
				check += fourCheese * pizza[1];
				std::cout << "\n������ ����: " << fourCheese << "��, ���� �� ���: " << fourCheese * pizza[1] << "$";
			}
			if (margarita > 0)
			{
				check += margarita * pizza[2];
				std::cout << "\n���������: " << margarita << "��, ���� �� ���: " << margarita * pizza[2] << "$";
			}
			if (bbq > 0)
			{
				check += bbq * pizza[3];
				std::cout << "\n�������: " << bbq << "��, ���� �� ���: " << bbq * pizza[3] << "$";
			}
		}
		if (cola > 0 || sprite > 0 || water > 0)
		{
			std::cout << "\n\n�������:\n";
			if (cola > 0)
			{
				check += cola * drinks[0];
				std::cout << "\n����: " << cola << "��, ���� �� ���: " << cola * drinks[0] << "$";
			}
			if (sprite > 0)
			{
				check += sprite * drinks[1];
				std::cout << "\n������: " << sprite << "��, ���� �� ���: " << sprite * drinks[1] << "$";
			}
			if (water > 0)
			{
				check += water * drinks[2];
				std::cout << "\n����: " << water << "��, ���� �� ���: " << water * drinks[2] << "$";
			}

		}
		if (check > 50)
		{
			check -= (20 / 100 * check);
			std::cout << "\n\n����� ����� ������ ����� 50$ - ������ 20% �� ����� ������ (" << 0.2 * check << "$)";
			std::cout << "\n\n�����: " << check << "$";
		}
		if (cola > 3)
		{
			double discount;
			discount = ((cola * 2) * 0.15);
			check -= discount;
			std::cout << "\n\n������������� ������ �� ���� - " << ((cola * 2) * 0.15) << "$";
			std::cout << "\n\n�����: " << check << "$";
		}
		if (freePizzas > 0)
		{
			double sum = 4 * freePizzas;
			check -= sum;
			std::cout << "\n\n������������� ������ - ������ ����� ����� � ������� (��������� ��������� �������) - " << sum << "$";
			std::cout << "\n\n�����: " << check << "$";
		}
		else
		{
			std::cout << "\n\n�����: " << check << "$\n";
		}
	}

	return 0;
}