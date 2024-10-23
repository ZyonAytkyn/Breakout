#pragma once
#include <SFML/Graphics.hpp>


class GameManager;  // forward declaration



class Ball {
public:
    Ball(sf::RenderWindow* window, float velocity, GameManager* gameManager);
    ~Ball();
    void update(float dt);
    void render();
    void setVelocity(float coeff, float duration);
    void setFireBall(float duration);

private:
    sf::CircleShape _sprite;
    sf::CircleShape _trail;
    sf::CircleShape _trail2;
    sf::Vector2f _direction;
    //sf::Vector2f _savedPos1 = sf::Vector2f(0, 0);
   // sf::Vector2f _savedPos2 = sf::Vector2f(0, 0);;
    //sf::Vector2f _savedPos3 = sf::Vector2f(0, 0);;
    sf::RenderWindow* _window;
    float _velocity;
    bool _isAlive;
    bool _isFireBall;
    float _timeWithPowerupEffect;
    //float _savePos;
    std::vector<sf::Vector2f> _savedPos{};
    int trailCheck = 0;
    int trailVecPos = 0;
    int trail2VecPos = 0;

    GameManager* _gameManager;  // Reference to the GameManager


    static constexpr float RADIUS = 10.0f;      
    static constexpr float VELOCITY = 350.0f;   // for reference.
};

