#include <iostream>
#include <SFML/Graphics.hpp>

/*using namespace sf;*/
int main() {

    /*sf::RenderWindow window(sf::VideoMode(640,480,32),"Hello SFML");
    sf::Font font;
    font.loadFromFile("/home/bukenya/CLionProjects/Timber/OpenSans-Bold.ttf");
    sf::Text text("Hello World",font,11);
    text.setCharacterSize(32);
    text.setPosition(window.getSize().x/2 - text.getGlobalBounds().width/2,
                     window.getSize().y/2 - text.getGlobalBounds().height/2);
    while(window.isOpen()){
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed){
                window.close();
            }
            window.clear(sf::Color::Black);
            window.draw(text);
            window.display();
        }
    }*/

    //Create a video mode object
    sf::VideoMode vm(1920, 1080);
    // Create and Open window for the Video
    sf::RenderWindow window(vm, "Timber!!!", sf::Style::Default);

    // Create a texture to hold a graphic on the GPU
    sf::Texture textureBackground;

    // Load a graphic into the texture
    textureBackground.loadFromFile("/home/bukenya/CLionProjects/Timber/graphics/background.png");

    // Create A Sprite
    sf::Sprite spriteBackground;

    //Attach the texture to the sprite
    spriteBackground.setTexture(textureBackground);

    // Set the SpriteBackground to cover the screen
    spriteBackground.setPosition(0,0);

    // Make A tree sprite
    sf::Texture textureTree;
    textureTree.loadFromFile("/home/bukenya/CLionProjects/Timber/graphics/tree.png");
    sf::Sprite spriteTree;
    spriteTree.setTexture(textureTree);
    spriteTree.setPosition(510,0);


    // Prepare the bee
    sf::Texture textureBee;
    textureBee.loadFromFile("/home/bukenya/CLionProjects/Timber/graphics/bee.png");
    sf::Sprite spriteBee;
    spriteBee.setTexture(textureBee);
    spriteBee.setPosition(0, 800);


    // Is the bee currently moving?
    bool beeActive = false;

    // How fast can the bee fly
    float beeSpeed = 0.0f;

    // make 3 cloud sprites from 1 texture

    sf::Texture textureCloud;
    textureCloud.loadFromFile("/home/bukenya/CLionProjects/Timber/graphics/cloud.png");

    // 3 New sprites with the same texture
    sf::Sprite spriteCloud1;
    sf::Sprite spriteCloud2;
    sf::Sprite spriteCloud3;
    spriteCloud1.setTexture(textureCloud);
    spriteCloud2.setTexture(textureCloud);
    spriteCloud3.setTexture(textureCloud);


    // Position the clouds on the left of the screen
    // at different heights
    spriteCloud1.setPosition(0,0);
    spriteCloud2.setPosition(0,250);
    spriteCloud3.setPosition(0,500);

    // Are the clouds currently on screen?
    bool cloud1Active = false;
    bool cloud2Active = false;
    bool cloud3Active = false;

    // How fast is each cloud
    float cloud1Speed = 0.0f;
    float cloud2Speed = 0.0f;
    float cloud3Speed = 0.0f;


    // Variables to control time itself
    sf::Clock clock;


    while (window.isOpen()){
        /*Handle the players input*/

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
        {
            window.close();
        }
        /*Update the scene*/


        // Measure the time
        sf::Time dt = clock.restart();

        // Setup the bee
        if(!beeActive)
        {
            // How fast is the bee
            srand((int)time(0));
            beeSpeed = (rand() % 200) + 200;

            // How high is the bee
            srand((int)time(0) * 10);
            float height = (rand() % 1350) + 500;
            spriteBee.setPosition(2000, height);
            beeActive = true;
        }else{
            // Move the bee

            spriteBee.setPosition(
               spriteBee.getPosition().x - (beeSpeed * dt.asSeconds()),
               spriteBee.getPosition().y
            );

            // Has the bee reached the left-hand edge of the screen??
            if(spriteBee.getPosition().x < -100)
            {
                // Set it up to be ready to be a whole new next frame
                beeActive = false;
            }
        }

        // Managing the Clouds
        // Cloud 1
        if(!cloud1Active)
        {
            // How fast is the cloud
            srand((int)time(0) * 10);
            cloud1Speed = (rand() % 200);

            // How high is the cloud
            srand((int)time(0) * 10);
            float height = (rand() % 150);
            spriteCloud1.setPosition(-200, height);
            cloud1Active = true;

        }
        else {
            spriteCloud1.setPosition(
                    spriteCloud1.getPosition().x + (cloud1Speed * dt.asSeconds()),
                    spriteCloud1.getPosition().y
            );

            // Has the Cloud reached the right hand edge of the screen?
            if (spriteCloud1.getPosition().x > 1920) {
                // Set it up ready to be a whole new cloud next frame
                cloud1Active = false;
            }
        }

            // Cloud 2
        if (!cloud2Active){
            // How fast is the cloud
            srand((int)time(0) * 20);
            cloud2Speed = (rand() % 200);

            // How high is the cloud
            srand((int)time(0) * 20);
            float height = (rand() % 300) - 150;
            spriteCloud2.setPosition(-200,height);
            cloud2Active = true;

        }
        else{
            spriteCloud2.setPosition(
                    spriteCloud2.getPosition().x + (cloud2Speed * dt.asSeconds()),
                    spriteCloud2.getPosition().y
            );

            // Has the cloud reached the right hand edge of the screen?
            if(spriteCloud2.getPosition().x > 1920)
            {
                // Set it up ready to be a whole new cloud next frame
                cloud2Active = false;

            }
        }

        // Cloud 3
        if(!cloud3Active){
            // How fast is the cloud
            srand((int)time(0) * 30);
            cloud3Speed = (rand() % 200);

            // How high is the cloud
            srand((int)time(0) * 30);
            float height = (rand() % 450) - 150;
            spriteCloud3.setPosition(-200, height);
            cloud3Active = true;

        } else{
            spriteCloud3.setPosition(
                    spriteCloud3.getPosition().x +
                    (cloud3Speed * dt.asSeconds()),
                    spriteCloud3.getPosition().y);
            // Has the cloud reached the right hand edge of the screen?
            if (spriteCloud3.getPosition().x > 1920)
            {
                // Set it up ready to be a whole new cloud next frame
                cloud3Active = false;
            }
        }



        //Clear everything from the last frame
        window.clear();

        // Draw our game scene here
        window.draw(spriteBackground);

        // Draw the clouds
        window.draw(spriteCloud1);
        window.draw(spriteCloud2);
        window.draw(spriteCloud3);

        // Draw the tree
        window.draw(spriteTree);

        // Draw the insect
        window.draw(spriteBee);


        //Show everything we just drew
        window.display();


    }
    return 0;
}
