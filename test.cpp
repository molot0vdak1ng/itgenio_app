#include "pch.h"
#include "Directions.h"
#include <conio.h>

Directions dir;
int ans;

void printVector(vector<string> v) {
	for (int i = 0; i < v.size(); i++)
		cout << i + 1<< v.at(i) << endl;
}

void add_mode() {
	string dir_name;
	cout << "What's the name of the direction you want to add?";
	cin >> dir_name;

	cout << "What category do you want to put it in?";
	cout << "1)FirstStepsDirs;\n2)PaintAnimateDirs;\n3)VideoEditDirs;\n4)ModelingDirs;\n5)WebProgrammDirs;\n6)MobileProgrammDirs;\n7)HardProgrammDirs;\n8)GameProgrammDirs;\n";
	cin >> ans;

	switch (ans) {
	case 1:
		dir.FirstStepsDirs.push_back(dir_name);
		break;
	case 2:
		dir.PaintAnimateDirs.push_back(dir_name);
		break;
	case 3:
		dir.VideoEditDirs.push_back(dir_name);
		break;
	case 4:
		dir.ModelingDirs.push_back(dir_name);
		break;
	case 5:
		dir.WebProgrammDirs.push_back(dir_name);
		break;
	case 6:
		dir.MobileProgrammDirs.push_back(dir_name);
		break;
	case 7:
		dir.HardProgrammDirs.push_back(dir_name);
		break;
	case 8:
		dir.GameProgrammDirs.push_back(dir_name);
		break;
	}

	cout << "\n\nSuccessfully added!";
}

void admin_mode() {
	int ans;
	cout << "You are in admin mode.\n";
	cout << "Let's continue";
	cout << "\n1 - Add direction"
		<< "\n2 - Delete direction"
		<< "\n3 - Change direction";
	cin >> ans;
	switch (ans) {
	case 1:
		add_mode();
		break;
	case 2:
		// delete function is going to be 
		break;
	case 3:
		// change function
		break;
	}

}

void user_mode() {
	cout << "Подскажи, пожалуйста, что тебе нравится больше?" << endl;
	cout << "1) Заниматься творчеством (рисовать, лепить, фантазировать) \n2) Мечтаю программировать, изучать алгоритмы, запускать ракеты в космос! \n3) Я новичок и хочу изучить самые основы.! \n";
	cin >> ans;
	if (ans == 1) {
		cout << "Итак, творческая личность. Теперь поконкретнее: \n";
		cout << "   1) Хочу рисовать, редактировать фотографии, создавать анимации, делать дизайн\n   2) Я хочу научится монтировать видео, может быть стану монтажёром или видеоблогером\n   3) Я хочу моделировать здания, предметы интерьера, конструировать фигурки и почетать их на 3D-принтере\n";
		cin >> ans;
		cout << "Что тебе предлагает изучить Айтигеник: " << endl;
		switch (ans) {
		case 1:
			printVector(dir.PaintAnimateDirs);
			break;
		case 2:
			printVector(dir.VideoEditDirs);
			break;
		case 3:
			printVector(dir.ModelingDirs);
			break;
		}
	}
	else if (ans == 2) {
		cout << "Хороший выбор! А теперь конкретнее:\n   1) Хочу создавать веб-приложения(сайты)\n   2) Хочу создавать мобильные приложения\n"
			<< "   3) Хочу заниматься обработкой данных, алгоритмами\n   4) Хочу создавать игры\n";
		cin >> ans;
		switch (ans) {
		case 1:
			printVector(dir.WebProgrammDirs);
			break;
		case 2:
			printVector(dir.MobileProgrammDirs);
			break;
		case 3:
			printVector(dir.HardProgrammDirs);
			break;
		case 4:
			printVector(dir.GameProgrammDirs);
			break;
		}
	}
	else if (ans == 3) {
		printVector(dir.FirstStepsDirs);
	}
}

void login() {
	cout << "\tChoose mode: \n\t1)Admin \n\t2)User";
	cin >> ans;
	switch (ans) {
	case 1:
		admin_mode();
		break;
	case 2:
		user_mode();
		break;
	}
}

// Криво печатает
void logo() {
	cout << "```````````                                                                              ```````````" <<
		"\n```````````                                                                              ```````````" <<
		"\n```````````                                    ```....```                                ```````````" <<
		"\n```````````                            `. - : / ++oooooooosssoo + / : -.                `- - `      ``````````" <<
		"\n```````````                        . - / ++ooooooooooossssssssssssss + :.` : yy : ``````````" <<
		"\n``````````                      .:++++ + oooooooooossssssssssssssssssss / ---`      ``````````" <<
		"\n``````````                   `:++++++ + ooooooooooossssssssssssssyyyyyssso:`       `..      ``````````" <<
		"\n``````````                 `:++++++++ooooooooooossssssssssssyyyyyyyyyyysss:       `-      ``````````" <<
		"\n`````````` - +o++++++++oooooooooo++ +///::::---::://+syyyyyssso.     `-`     ``````````" <<
		"\n``````````   `os/        :oo++++++++++ +//:--.``````     ```````....-/oyyyssso.    `-`     ``````````" <<
		"\n``````````   `/ + -/ oo++++++ + / :-.````                 ````.....--:sysssso.   `. - ``````````" <<
		"\n``````````    `.`.ooo++++ / :..```                   ``.``. - ::------osssss + `:     ``````````" <<
		"\n`````````` - . + ooo++ + :..`` `````               ..` - :+hho / -: -: -sssss + / -... - `    ``````````" <<
		"\n``````````     ..`    `ooo+++ - .``     .----.`          ..` / omNNs + `::::+ysss - `.```     ```````````" <<
		"\n``````````     `-`    `ooo+ + :..``    . - / ss / :..     ````-.`    : / +/ : ``::: / :yssss.         ```````````" <<
		"\n```````````     :`    `oooo+ - .. - .    :omNms / `:`````````. / .``       `.::: / : sssss`         ```````````" <<
		"\n```````````` - .`.oooo + -..:. - : / : -``/``````````.:: - ``````. - ::::: / sssss`        ````````````" <<
		"\n````````````    . - ... - ::ooo + :... : ``     ```. / -`............ - :::-:: : -:::: : ysssss        `````````````"<<
		"\n`````````````   ``````..sooo + --..--.`````.:: - ...............-------- - :+osssssss        `````````````"<<
		"\n````````````````.oooo + / -- - ..------ - ...... - ::///+++++oooooooossssssssso/.     ````````````````"<<
		"\n`````````````````      `oooo+++------.....:: / +ooooooooooosssssssssssssssso + -`- / `  ``````````````````"<<
		"\n```````````````````` ` `: / +o++++ +//////+oooooooooooooooooossssssssssss+:-.:+sss`````````````````````"<<
		"\n````````````````````````- - .. - : / ++++++++oooooooooooooooooooooossssyyyhh++ossssss`````````````````````"<<
		"\n````````````````````````+ooo + / ::yhyyyysssssoooosssssssssyyyyyyyyyssssss:`-sssss`````````````````````"<<
		"\n````````````````````- / +ossooooooooooossssssssssssssssssssssssssssssssyso - `:ssss.````````````````````"<<
		"\n.```````````````````: +///soooooooooooooooooooooooooosossssssssssssyyyyyyo-`-sysoo+/``````````````..."<<
		"\n..````````````````.:: / ... / so++++++++++++ + ooooooooooooosssssssssyyyyyysoss + .`+y++++o`````````````...."<<
		"\n......``````````.--``-. `:yo++++++++++++++++ooooooooossssssssssyysosy / `. + s + . - / :--::````````````....."<<
		"\n.......```````. - .` `.//``yooo++++++++++++++++++++++++++ooosssssyy+.`/s+.-//:::/-`/:`````````........"<<
		"\n..........`.--.` `. / ++::ssooo++++++++ / :--....````````````.... - : / ++ + -. : -```.... - :-::.`````..........."<<
		"\n..........--.` `- / +/ -``-soooo++++ + :-..````                 ````...//:.    `````.:`--................" <<
		"\n....... - ::.` `-//:.....-ooooo+++:.`````                      `````-::.`     `.--. .:................" <<
		"\n........`...: / : -....... : oooooo + -.``                         `````...:-````.. - / o / . `- - ..............." <<
		"\n.......-- - .. - :......... : soooo + -.``                         `````.....---- / . `- + o - ` .:...............";
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	while (true) {
		system("cls");
		login();
		Sleep(1000);
	}
}