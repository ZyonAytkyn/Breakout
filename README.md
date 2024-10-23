# Breakout

W Kavanagh. June Summer 2024

## controls

A/D to move the paddle right and left.
P to pause.

## Powerups

big/small paddle (blue)
fast/slow ball (fancy yellow)
fire ball (green)

# Tasklist

## Suggested fixes

* Fix the compiler issues in the code

## Suggested tasks

* Implement mouse input for pad
* Improved VFX (ball trail, paddle hit response, brick particle destruction)
* Better UI (progress bar rather than timer for countdown).
* GameLoop
* Better ball physics (Box2D)
* Leaderboards
* More ball types (e.g., multiball, sticky ball [where you shoot the ball from the paddle every time], tiny ball, big ball, brick-tracking ball)
* Sounds with increasing tone between bounces.
* Implement commentary with calls to an LLM such as LLama

# Time Details and Changelist
Removed the include in PowerupBase.h preventing the game from launching.
	Files Modified - PowerupBase.h
	Time Spent - 40 mins

Added in mouse controls for the paddle and the option to choose keyboard or mouse input.
	Files Modififed - GameManager.cpp, GameManager.h, Paddle.cpp, Paddle.h
	Time Spent - 50 mins

Added a trail that follows behind the ball.
	Files Modififed - Ball.cpp, Ball.h
	Time Spent - 90 mins