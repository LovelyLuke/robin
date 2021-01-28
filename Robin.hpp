#include <Graphics.hpp>
#include "Body.hpp"
#include "Coords.hpp"

namespace Robin
{
	class Window
	{
	public:
		Window();
		virtual ~Window();

		
	};

	class Body;
	class Coords2D;

    void Init(int screenSizeX, int screenSizeY) {
        sf::RenderWindow window(sf::VideoMode(screenSizeX, screenSizeY), "Robin Engine v.0.0.1");
        sf::CircleShape shape(100.f);
        shape.setFillColor(sf::Color::Green);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            window.draw(shape);
            window.display();
        }
    }

}