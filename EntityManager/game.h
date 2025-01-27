#pragma once

#include <vector>
#include <SFML/Graphics.hpp>
#include "./Entity/entities.h"
class game {
public:

public:
	sf::Window		gameWindow;
	EntityManager	m_entities;
	bool			m_paused;
	bool			m_running;




	//std::vector<sf::CircleShape> Circles;
	//std::vector<sf::RectangleShape> Rectangles;
	//std::vector<sf::ConvexShape> Convexes;
	//metodi per operare su questi valori.
	//metodo per inizializzare la classe con almeno 
	void	init();
	void	update();
	
	void	sMovement();
	void	sUserInput();
	void	sEnemySpawner();
	void	sCollision();
	void	sRender();


};