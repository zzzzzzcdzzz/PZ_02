

#include <iostream>
#include <string>


int main()
{
	float tempCin = 0;
	float tempSum = 0;
	std::string s = "";
	int i = 0;
	std::string arr[3] = { "one", "two", "three" };

	// Menu

	std::cout << "PZ_02\n" << std::endl;

	do
	{
		std::cout << "Enter a number " << arr[i] << ": ";
		std::cin >> tempCin;
		s += std::to_string(tempCin) + " + ";
		tempSum += tempCin;
		++i;
	} while (i <= 2);

	std::cout << "(" << s << "\b\b\b) / 3 = " << tempSum / 3.0f << std::endl;
	std::cout << std::endl;

	std::cout << "Seven divided by three is " << 7 / 3 << "      ,   int / int = int" << std::endl;
	std::cout << "Seven divided by three is " << 7.0 / 3 << ", float / int = float" << std::endl;
	std::cout << "Seven divided by three is " << 7.0 / 3.0 << ", float / float = float" << std::endl;

	system("pause");
	return 0;
}
