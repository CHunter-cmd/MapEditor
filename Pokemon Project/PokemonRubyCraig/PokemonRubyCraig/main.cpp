#include <SFML\Graphics.hpp>
#include <iostream>
using namespace sf;
using namespace std;





int main()
{
	sf::RenderWindow window(sf::VideoMode(683, 512), "Pokemon Ruby Map Editor");
	int grid1[32][32] = { {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		                  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		                  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
		                  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
						  {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	                            };
	Texture T1, T2, T3, T4, T5;
	int counter = 0;
	int choice = 1;
	string stcounter = to_string(counter);
	T1.loadFromFile("Images/grid.png");
	T2.loadFromFile("Images/Grass1.png");
	T3.loadFromFile("Images/Grass1.png");
	T3.loadFromFile("Images/" + stcounter + ".png");
	T4.loadFromFile("Images/button_load.png");
	T5.loadFromFile("Images/button_save.png");
	Sprite sBoard(T1);
	Sprite BS(T2);
	Sprite RQ(T3);
	Sprite BL_(T4);
	Sprite BS_(T5);
	bool print = false;
	float dx =0, dy=0;
	int clicker = 0;
	int newx, newy;


	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 3; y++) {
			cout << grid1[x][y] << endl;
		}
	
	}

	while (window.isOpen()) {
		
		Vector2i pos = Mouse::getPosition(window);
		signed int x = pos.x;
		signed int y = pos.y;
		// handle event
		Event e;
		while (window.pollEvent(e)) {
			if (e.type == Event::MouseButtonPressed)
				if (e.key.code == Mouse::Left)
				{
					std::cout << "Click Detected" << endl;
					std::cout << "X Cord: " << x << " Y Cord: " << y << endl;
					newx = x / 16;
					std::cout << "newx " << newx << endl;
					newy = y / 16;
					std::cout << "newy" << newy << endl;

					if (newy == 0 && newx == 32) {
						choice = 2;
						cout << "Choice 2" << endl;
						grid1[newy][newx] = choice;

					}




					if (newy < 32 && newx < 32) {
						grid1[newy][newx] = choice;
						cout << "Test" << endl;
					}
				}
			if (e.type == Event::MouseButtonPressed)
				if (e.key.code == Mouse::Right)
				{
					std::cout << "Click Detected" << endl;
					std::cout << "X Cord: " << x << " Y Cord: " << y << endl;
					newx = x / 16;
					std::cout << "newx " << newx << endl;
					newy = y / 16;
					std::cout << "newy " << newy << endl;
					if(newy < 32 && newx < 32){
						grid1[newy][newx] = 0;
						cout << "Test" << endl;
					}
					
				}
		}
		
		
		window.clear();
		window.draw(sBoard);
		BS_.setPosition(517,5);
		window.draw(BS_);
		BL_.setPosition(581,5);
		window.draw(BL_);




		for (int x = 0; x < 32; x++) {
			for (int y = 0; y < 32; y++) {
					{
					if (grid1[y][x] == 1) {
						int nx = x * 16;
						int ny = y * 16;

						BS.setPosition(nx, ny);
						window.draw(BS)
							;
					}}
			if (grid1[y][x] == 9) {
				int nx = x * 16;
				int ny = y * 16;
				if (ny > 32 && nx > 32) {
				RQ.setPosition(nx, ny);
				window.draw(RQ);
			}

				if (grid1[y][x] == 2) {
					int nx = x * 16;
					int ny = y * 16;
					if (ny > 32 && nx > 32) {
						BL_.setPosition(nx, ny);
						window.draw(BL_);
					}
					}
			}
			//cout << grid1[x][y] << endl;
			
			}
		
		
		}
		window.display();

	
	
	
	
	}

}