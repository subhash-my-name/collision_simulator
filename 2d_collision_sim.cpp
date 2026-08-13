#include "raylib.h"
#include <vector>
#include <time.h>
#include <cstdlib>

const int screenWidth = 1920;
const int screenHeight = 1057;

using namespace std;

class Ball{
	public:
		int get_pos(int limit);
		void draw();

	private:
		int radius = 30, mass;
		Vector2 v_ini, pos, v_fin;
};

int amt = rand() % 100;
vector<Ball> balls(amt);

void Ball::draw(){
	ClearBackground(BLACK);
	// first, use a for loop to assign each ball[i] a fixed position.
}

int Ball::get_pos(int limit){
	vector<int> coords(limit);
	int buffer = 1; // to prevent balls from touching each other upon spawn
	for(int i = 1; buffer < limit; i++){
		buffer = i * radius + (i - 1);
		coords[i] = buffer;
	}
	int rnd_ch = rand() % (limit);

	// this function shall be called by a new function assign_pos().
	// assign_pos() is responsible for assining each ball[i] a unique position.
	// that unique position, after getting assigned, should get deleted from the coords vector.
	// therefore, assign_pos() shall pass two vectors to get_pos(): coords_X and coords_y.
	// both contain the eligible list of positions for x and y coordinates.
	// good luck to myself i guess.
	
	return coords[rnd_ch];
}

int main(){
	InitWindow(screenWidth, screenHeight, "Collision Sim Beta");

	srand(time(NULL));

	while(!WindowShouldClose()){
		BeginDrawing();
		EndDrawing();
	}
}
