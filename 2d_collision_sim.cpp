#include "raylib.h"
#include "std_lib_facilities.h"
#include <random>
#include <algorithm>

using namespace std;

const int amt = 33;

class Ball{
	public:
		void set_pos(), assign_pos();
		void draw();

	private:
		int radius = 30, mass;
		Vector2 pos;
};

void Ball::draw(){
	ClearBackground(BLACK);
	for(int i = 0; i < amt; i++){

	}
}

vector<int> allowed_x(amt);
vector<int> allowed_y(amt);

void Ball::set_pos(){
	int buffer = radius;

	for(int i = 0; buffer < amt; i++){
		buffer = (2 * i + 1) * radius + i + 1; // to prevent balls from intersecting upon spawn
		allowed_x[i] = buffer;
		allowed_y[i] = buffer;
	}

	random_device rd;
	mt19937 g(rd());
	shuffle(allowed_x.begin(), allowed_x.end(), g);
	shuffle(allowed_y.begin(), allowed_y.end(), g);
	
	return;
}

void::Ball::assign_pos(){
	pos = {narrow_cast<float>(allowed_x.size()), narrow_cast<float>(allowed_y.size())};
	return;
}

int main(){
	const int screenWidth = 1920;
	const int screenHeight = 1057;

	vector<Ball> balls(amt);
	for(int i = 0; i < amt; i++){
		balls[i].assign_pos();
		allowed_x.pop_back();
		allowed_y.pop_back();
	}

	InitWindow(screenWidth, screenHeight, "Collision Sim Beta");

	while(!WindowShouldClose()){
		BeginDrawing();
		EndDrawing();
	}
}
