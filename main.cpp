#include "main.hpp"


static int clicked = 0;

void imguistuff(sf::CircleShape &cerchio) {
	ImGui::Begin("Hello world");

	ImGui::Text("TESTO DI PROVA");
	
	sf::Color temp = cerchio.getFillColor();
	if (ImGui::Button("Click Me!")) { 
		clicked++;
		//cerchio.setFillColor(temp);

	}
	if (clicked & 1)
	{
		cerchio.setFillColor(sf::Color(255, 0, 0));
	}
	if (clicked >= 2) 
	{
		cerchio.setFillColor(sf::Color(255, 255, 255));
		clicked = 0;
	}

	ImGui::End();
}


int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 800), "test");
	sf::Event e;

	

	ImGui::SFML::Init(window);


	sf::Clock deltatime;


	sf::CircleShape cerchio(200.0f, 100);
	cerchio.setFillColor(sf::Color(204, 77, 5));
	cerchio.setPosition(200, 200);

	while (window.isOpen()) {

		//INIT
		ImGui::SFML::ProcessEvent(e);

		while (window.pollEvent(e)) {
			if (e.type == sf::Event::Closed())
				window.close();
		}
		
		//UPDATE
		ImGui::SFML::Update(window, deltatime.restart());
		window.clear(sf::Color(10,60, 155));

		imguistuff(cerchio);

		//RENDER
		window.draw(cerchio);
		ImGui::SFML::Render(window);
		window.display();
	}
	ImGui::SFML::Shutdown();
	window.close();
}