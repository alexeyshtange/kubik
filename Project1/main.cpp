#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <chrono>
#include <thread>
#include <iostream>
#include <fstream>
using namespace sf;
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	bool pasta = 0;
	int n = 0, iter = 0,BAN=0;
	int a,x;
	int X = 10, Y = 170;
	string data[9999];
	char ss ;
	IntRect r1(200,180,350,325), fin(465, 22, 544, 482);
	for (int i = 0; i < 100; i++)
		data[i] = "rrrrrr";
	Sprite mapspr, spr;
	Texture map, ball;
	ball.loadFromFile("80õ80ball.png");
	spr.setTexture(ball);
	spr.setPosition(X,Y);
	map.loadFromFile("map.png");
	mapspr.setTexture(map);
	spr.setPosition(10, 170);
	mapspr.setPosition(0,0);
	RenderWindow window(VideoMode(562,502), "my_project", Style::Default);
	while (window.isOpen()) {
		Event event;
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed)
				window.close();
		}
		while (true) {
		aim: window.draw(mapspr);
			window.draw(spr);
			window.display();

			if (r1.contains(X+3,Y)|| r1.contains(X + 77, Y)|| fin.contains(X + 3, Y) || fin.contains(X + 77, Y)) {
				data[n - 1] = data[n - 1] + "lrd";
				this_thread::sleep_for(std::chrono::milliseconds(20));
				data[n].clear();
				n = 0;
				X = 10; Y = 170;
				spr.setPosition(X, Y);
				cout << "BBBBAAAAAAAANNNNNN" << endl;
				pasta = 0;
				iter++;
				goto aim;
			}
			if (r1.contains(X, Y-3) || r1.contains(X, Y - 77)||fin.contains(X, Y - 3) || fin.contains(X, Y - 77)) {
				data[n - 1] = data[n - 1] + "urd";
				this_thread::sleep_for(std::chrono::milliseconds(20));
				data[n].clear();
				n = 0;
				X = 10; Y = 170;
				spr.setPosition(X, Y);
				cout << "BBBBAAAAAAAANNNNNN" << endl;
				pasta = 0;
				iter++;
				goto aim;
			}
			if (r1.contains(X + 3, Y+80) || r1.contains(X + 77, Y + 80)||fin.contains(X + 3, Y + 80) || fin.contains(X + 77, Y + 80)) {
				data[n - 1] = data[n - 1] + "lru";
				this_thread::sleep_for(std::chrono::milliseconds(20));
				data[n].clear();
				n = 0;
				X = 10; Y = 170;
				spr.setPosition(X, Y);
				cout << "BBBBAAAAAAAANNNNNN" << endl;
				pasta = 0;
				iter++;
				goto aim;
			}
			if (r1.contains(X + 80, Y+3)||  r1.contains(X + 80, Y + 77)||fin.contains(X + 80, Y + 3) || fin.contains(X + 80, Y + 77)) {
				data[n - 1] = data[n - 1] + "lud";
				this_thread::sleep_for(std::chrono::milliseconds(20));
				data[n].clear();
				n = 0;
				X = 10; Y = 170;
				spr.setPosition(X, Y);
				cout << "BBBBAAAAAAAANNNNNN" << endl;
				pasta = 0;
				iter++;
				goto aim;
			}
			if(pasta)
			data[n - 1] + ss;
			a = data[n].length();
			x = 0;
			x = rand() % (a+1);
			char s = data[n][x];
			if (s == 'l'){
				X = X - 15;
			//data[n] = "l";
			ss = 'l';
			pasta = 1;
			
		}
			if (s == 'r'){
				X = X + 15;
			//data[n] = "r";
			ss = 'r';
			pasta = 1;
		}
			if (s == 'u'){
				Y = Y - 15;
				//data[n] = "u";
				ss = 'u';
				pasta = 1;
		}
			if (s == 'd') {
				Y = Y + 15;
				//data[n] = "d";
				ss = 'd';
				pasta = 1;
			}

			n++;
			cout << X << ";" << Y << "; n = "<<n<<"; try:"<<iter<<":::::"<<BAN<< endl;
			this_thread::sleep_for(std:: chrono::milliseconds(5));
			BAN++;
			window.clear();
			spr.setPosition(X,Y);
		}
	}
}
