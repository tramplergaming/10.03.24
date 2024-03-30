#include <iostream>
#include <Windows.h>

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double pizza[]{ 1,2,3,4 }; //пепперони, четыре сыра, маргарита, барбекю
	double drinks[]{ 2,1,0.2 }; // кола, спрайт, вода
	double pepperoni = 0, fourCheese = 0, margarita = 0, bbq = 0, cola = 0, sprite = 0, water = 0;

	double choose, amount;

	int numPizzasPay = 0, freePizzas = 0;

	std::cout << "\n\t\tДобро пожаловать в мини пиццерию!\n\n";

	std::cout << "Меню:\n\nПицца:\n\n1. Пепперони(1$)\n2. Четыре сыра(2$)\n3. Маргарита(3$)\n4. Барбекю(4$)";
	std::cout << "\n\nНапитки:\n\n5. Кола(2$)\n6. Спрайт(1$)\n7. Вода(0.2$)";

	std::cout << "\n\nСкидки:\n\n1. Если общая сумма заказа более 50$, то размер скидки составляет 20% от суммы заказа.";
	std::cout << "\n2. Каждая пятая пицца — в подарок\n3. Для напитков с ценой более 2$, если количество в заказе более трех, то скидка 15% (только на напитки, а не навесь заказ).";

	std::cout << "\n\nВведите код товара (№ товара == код товара): ";
	std::cin >> choose;

	std::cout << "\nВведите количество товара: ";
	std::cin >> amount;

	if (choose == 1)
	{
		pepperoni += amount;
		numPizzasPay += amount;
		std::cout << "\nВы заказали: " << amount << " пицц(у, ы) Пепперони.";
	}
	else if (choose == 2)
	{
		fourCheese += amount;
		numPizzasPay += amount;
		std::cout << "\nВы заказали: " << amount << " пицц(у, ы) Четыре сыра.";
	}
	else if (choose == 3)
	{
		margarita += amount;
		numPizzasPay += amount;
		std::cout << "\nВы заказали: " << amount << " пицц(у, ы) Маргарита.";
	}
	else if (choose == 4)
	{
		bbq += amount;
		numPizzasPay += amount;
		std::cout << "\nВы заказали: " << amount << " пицц(у, ы) Барбекю.";
	}
	else if (choose == 5)
	{
		cola += amount;
		std::cout << "\nВы заказали: " << amount << " напит(ок, ков, ка) Кола.";
	}
	else if (choose == 6)
	{
		sprite += amount;
		std::cout << "\nВы заказали: " << amount << " напит(ок, ков, ка) Спрайт.";
	}
	else if (choose == 7)
	{
		water += amount;
		std::cout << "\nВы заказали: " << amount << " напит(ок, ков, ка) Вода.";
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

	std::cout << "\n\nЖелаете продолжить заказывать? (y/n) ";
	std::cin >> decision;

	if (decision == "y")
	{
		choose = 0;
		do
		{
			std::cout << "\nМеню:\n\nПицца:\n\n1. Пепперони(1$)\n2. Четыре сыра(2$)\n3. Маргарита(3$)\n4. Барбекю(4$)";
			std::cout << "\n\nНапитки:\n\n5. Кола(2$)\n6. Спрайт(1$)\n7. Вода(0.2$)";

			std::cout << "\n\nВведите код товара (№ товара == код товара): ";
			std::cin >> choose;

			std::cout << "\nВведите количество товара: ";
			std::cin >> amount;

			if (choose == 1)
			{
				pepperoni += amount;
				numPizzasPay += amount;
				std::cout << "\nВы заказали: " << amount << " пицц(у, ы) Пепперони.";
			}
			else if (choose == 2)
			{
				fourCheese += amount;
				numPizzasPay += amount;
				std::cout << "\nВы заказали: " << amount << " пицц(у, ы) Четыре сыра.";
			}
			else if (choose == 3)
			{
				margarita += amount;
				numPizzasPay += amount;
				std::cout << "\nВы заказали: " << amount << " пицц(у, ы) Маргарита.";
			}
			else if (choose == 4)
			{
				bbq += amount;
				numPizzasPay += amount;
				std::cout << "\nВы заказали: " << amount << " пицц(у, ы) Барбекю.";
			}
			else if (choose == 5)
			{
				cola += amount;
				std::cout << "\nВы заказали: " << amount << " напит(ок, ков, ка) Кола.";
			}
			else if (choose == 6)
			{
				sprite += amount;
				std::cout << "\nВы заказали: " << amount << " напит(ок, ков, ка) Спрайт.";
			}
			else if (choose == 7)
			{
				water += amount;
				std::cout << "\nВы заказали: " << amount << " напит(ок, ков, ка) Вода.";
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

			std::cout << "\n\nЖелаете продолжить заказывать? (y/n) ";
			std::cin >> decision;
		} while (decision != "n");
	}
	if (decision == "n")
	{
		double check = 0;
		std::cout << "\nВаш заказ:";
		if (pepperoni > 0 || fourCheese > 0 || margarita > 0 || bbq > 0)
		{
			std::cout << "\n\nПицца:\n";
			if (pepperoni > 0)
			{
				check += pepperoni * pizza[0];
				std::cout << "\nПепперони: " << pepperoni << "шт, цена за все: " << pepperoni * pizza[0] << "$";
			}
			if (fourCheese > 0)
			{
				check += fourCheese * pizza[1];
				std::cout << "\nЧетыре сыра: " << fourCheese << "шт, цена за все: " << fourCheese * pizza[1] << "$";
			}
			if (margarita > 0)
			{
				check += margarita * pizza[2];
				std::cout << "\nМаргарита: " << margarita << "шт, цена за все: " << margarita * pizza[2] << "$";
			}
			if (bbq > 0)
			{
				check += bbq * pizza[3];
				std::cout << "\nБарбекю: " << bbq << "шт, цена за все: " << bbq * pizza[3] << "$";
			}
		}
		if (cola > 0 || sprite > 0 || water > 0)
		{
			std::cout << "\n\nНапитки:\n";
			if (cola > 0)
			{
				check += cola * drinks[0];
				std::cout << "\nКола: " << cola << "шт, цена за все: " << cola * drinks[0] << "$";
			}
			if (sprite > 0)
			{
				check += sprite * drinks[1];
				std::cout << "\nСпрайт: " << sprite << "шт, цена за все: " << sprite * drinks[1] << "$";
			}
			if (water > 0)
			{
				check += water * drinks[2];
				std::cout << "\nВода: " << water << "шт, цена за все: " << water * drinks[2] << "$";
			}

		}
		if (check > 50)
		{
			check -= (20 / 100 * check);
			std::cout << "\n\nОбщая сумма заказа более 50$ - скидка 20% от суммы заказа (" << 0.2 * check << "$)";
			std::cout << "\n\nИтого: " << check << "$";
		}
		if (cola > 3)
		{
			double discount;
			discount = ((cola * 2) * 0.15);
			check -= discount;
			std::cout << "\n\nПодействовала скидка за колу - " << ((cola * 2) * 0.15) << "$";
			std::cout << "\n\nИтого: " << check << "$";
		}
		if (freePizzas > 0)
		{
			double sum = 4 * freePizzas;
			check -= sum;
			std::cout << "\n\nПодействовала скидка - каждая пятая пицца в подарок (считается стоимость барбекю) - " << sum << "$";
			std::cout << "\n\nИтого: " << check << "$";
		}
		else
		{
			std::cout << "\n\nИтого: " << check << "$\n";
		}
	}

	return 0;
}