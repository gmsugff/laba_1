#include "WebApp.h"
#include "Tools.h"


using namespace Tools;


const std::string API = "1c6fbd94f02e0bfa31e590642d42d8b8";


int main() {
	setlocale(LC_ALL, "RUS");
	using json = nlohmann::json;

	std::string city;
	std::cout << "������� �����: ";
	std::cin >> city;

	WebApp app("http://api.openweathermap.org", API, city);

	json data;
	int choice;
	bool flag = true;

	while (flag) {
		showMenu();
		std::cin >> choice;
		switch (choice) {
		case 1:
			data = app.getCurrentWeather();
			showCurrentWeather(data);
			break;
		case 2:
			std::cout << "������� �����: ";
			std::cin >> city;
			break;
		case 3:
			flag = false;
			break;

		}
	}
	return 0;
}