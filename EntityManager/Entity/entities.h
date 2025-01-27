#pragma once
#include "vector"
#include "tuple"
#include "string"
#include "..\SFML\Graphics.hpp"
#include ".\Component\mycomponent.h"

class entity {

public:
	std::tuple</*inserisci valori tuple da mettere, sono generici*/>	m_components;
	bool																m_alive;
	int																	m_id;
	std::string															m_tag;

	int																	id;
	bool																isAlive;
	std::string															tag;
	void* destroy;//questo non funziona con il tiipo void statico 
	//aggiungi i metodi 

	//implementa i metodi qua sotto 



};

class EntityManager {

	public:
		std::vector<entity>		m_entities;
		std::map<entity, int>	m_entityMap;
		std::vector<entity>		m_toAdd;
		int						m_totalEntities;
		void					init();
		void					update();
		void					addEntity(std::string tag);
		std::vector<entity>&	getEntities();
		std::vector<entity>&	getEntities(std::string tag);


};