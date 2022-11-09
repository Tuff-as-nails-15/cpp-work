//Ian Cronizer 5.28 11/9/22
#include<iostream>
#include<iomanip>

int main()
{
	for (int a = 1; a < 11; a = a + 1)
	{
		std::cout << "On the ";
		switch (a)
		{

			case 1:
				std::cout << "first";
				break;
			case 2:
				std::cout << "second";
				break;
			case 3:
				std::cout << "third";
				break;
			case 4:
				std::cout << "fourth";
				break;
			case 5:
				std::cout << "fifth";
				break;
			case 6:
				std::cout << "sixth";
				break;
			case 7:
				std::cout << "seventh";
				break;
			case 8:
				std::cout << "eighth";
				break;
			case 9:
				std::cout << "ninth";
				break;
			case 10:
				std::cout << "tenth";
				break;
			case 11:
				std::cout << "eleventh";
				break;
			case 12:
				std::cout << "twelfth";
				break;
		}
		std::cout << " day of Christmas my true love sent to me ";

		switch (a)
		{

		case 1:
			std::cout << "A Partridge in a Pear Tree";
			break;
		case 2:
			std::cout << "2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 3:
			std::cout << "3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 4:
			std::cout << "4 Calling Birds 3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 5:
			std::cout << "5 Golden Rings 4 Calling Birds 3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 6:
			std::cout << "6 Geese a Laying 5 Golden Rings 4 Calling Birds 3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 7:
			std::cout << "7 Swans a Swimming 6 Geese a Laying 5 Golden Rings 4 Calling Birds 3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 8:
			std::cout << "8 Maids a Milking 7 Swans a Swimming 6 Geese a Laying 5 Golden Rings 4 Calling Birds 3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 9:
			std::cout << "9 Ladies Dancing 8 Maids a Milking 7 Swans a Swimming 6 Geese a Laying 5 Golden Rings 4 Calling Birds 3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 10:
			std::cout << "10 Lords a Leaping 9 Ladies Dancing 8 Maids a Milking 7 Swans a Swimming 6 Geese a Laying 5 Golden Rings 4 Calling Birds 3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 11:
			std::cout << "11 Pipers Piping 10 Lords a Leaping 9 Ladies Dancing 8 Maids a Milking 7 Swans a Swimming 6 Geese a Laying 5 Golden Rings 4 Calling Birds 3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		case 12:
			std::cout << "12 Drummers Drumming 11 Pipers Piping 10 Lords a Leaping 9 Ladies Dancing 8 Maids a Milking 7 Swans a Swimming 6 Geese a Laying 5 Golden Rings 4 Calling Birds 3 French Hens 2 Turtle Doves and a Partridge in a Pear Tree";
			break;
		}
		std::cout << std::endl;
	}
}
