#include <stdlib.h>
#include <time.h>
#include <iostream>

void LoseStatement() { // void statement that picks a random win message 

	int random10 = rand() % 10;

	switch (random10) {
	case 0:
		std::cout << "Don't worry, you'll get it next time!" << std::endl;
		break;
	case 1:
		std::cout << "Tough luck! Keep trying!" << std::endl;
		break;
	case 2:
		std::cout << "Chin up! Every loss is a lesson." << std::endl;
		break;
	case 3:
		std::cout << "You were close! Keep pushing forward!" << std::endl;
		break;
	case 4:
		std::cout << "Ouch! That one was tough." << std::endl;
		break;
	case 5:
		std::cout << "Its okay to lose. Youll bounce back!" << std::endl;
		break;
	case 6:
		std::cout << "Almost had it! Stay determined!" << std::endl;
		break;
	case 7:
		std::cout << "Hang in there! Next time will be better." << std::endl;
		break;
	case 8:
		std::cout << "Learning from losses is the path to victory." << std::endl;
		break;
	case 9:
		std::cout << "Don’t give up! Every loss is a step closer to winning." << std::endl;
		break;
	}
}
