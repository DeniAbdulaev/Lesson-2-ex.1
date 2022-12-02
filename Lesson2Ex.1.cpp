#include <iostream>

	enum month {
		garbage = 0,
		Junuary,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		November,
		December
	};
	int main()
	{
		setlocale(LC_ALL, "rus");

		int x = 0;
		month choose_month = garbage;
		do 
		{
			std::cout << "Укажите номер месяца: " << std::endl;
			std::cin >> x;
			choose_month = static_cast<month>(x);

			if (choose_month >= 0 && choose_month <= 12)
			{
				switch (choose_month)
				{
				case (garbage): std::cout << "До свидания!" << std::endl; break;
				case (Junuary): std::cout << "Январь" << std::endl; break;
				case (February): std::cout << "Февраль" << std::endl; break;
				case (March): std::cout << "Март" << std::endl; break;
				case (April): std::cout << "Апрель" << std::endl; break;
				case (May): std::cout << "Май" << std::endl; break;
				case (June): std::cout << "Июнь" << std::endl; break;
				case (July): std::cout << "Июль" << std::endl;
				case (August): std::cout << "Август" << std::endl; break;
				case (September): std::cout << "Сентябрь" << std::endl; break;
				case (October): std::cout << "Октябрь" << std::endl; break;
				case (November): std::cout << "Ноябрь" << std::endl; break;
				case (December): std::cout << "Декабрь" << std::endl; break;
				};
			};
		} while (choose_month != 0);
	}

