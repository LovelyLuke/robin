#include <Graphics.hpp>
#include <vector>
#include "Body.hpp"
#include "Coords.hpp"

namespace Robin
{
    
    
    std::vector<Robin::Body> bodies;

    void AddBodyToRenderQueue(Body* body) {
        Body bodyObject = Body{ body->name };
        bodies.push_back(bodyObject);
    }
    

    void Init(int screenSizeX, int screenSizeY) {
        sf::RenderWindow window(sf::VideoMode(screenSizeX, screenSizeY), "Robin Engine v.0.0.1");

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed)
                    window.close();
            }

            window.clear();
            for (int bodyIndex = 0; bodyIndex < bodies.size(); bodyIndex++) {
                bodies[bodyIndex].Init();
            }
            window.display();
        }
    }

    

}