#include "Tools.h"


	void Tools::showMenu() {
		std::cout << "1 - ���������� ������." << std::endl;
		std::cout << "2 - ������ ����� �����." << std::endl;
		std::cout << "3 - �����" << std::endl;
	}

	void Tools::showCurrentWeather(nlohmann::json data) {
		std::cout << "������: " << data["weather"][0]["main"] << std::endl;
		std::cout << "�����������: " << data["main"]["temp"] - 273.15 << std::endl;
	}
