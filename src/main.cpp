#include "MainWindow.h"

#include <QApplication>

const char *kApplicationName = "cmake-starter";
const char *kOrganizationName = "siegelaaron94";

int main(int argc, char *argv[])
{
	QApplication app(argc, argv);
	app.setApplicationName(kApplicationName);
	app.setOrganizationName(kOrganizationName);

	MainWindow window;
	window.show();
	
	return app.exec();
}