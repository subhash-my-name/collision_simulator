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
	Vector2 pos_lim = {screenWidth, screenHeight};

	vector<int> coords(limit);
	int buffer = 1; // to prevent balls from touching each other upon spawn
	for(int i = 1; buffer < limit; i++){
		buffer = i * radius + (i - 1);
		coords[i] = buffer;
	}
	int rnd_ch = rand() % (limit);

	// edit the function such that a used position gets deleted after use.
	// in order to do so, predefine the coords vector and pass it by reference.
	// then delete every element that gets used.
	// this will require two coords vectors: one for x and one for y.
	// make a separate function that is responsible for assigning each ball[i] position.
	// that function should call this, pass the coords vector by reference and get a position in return.
	
	return coords[rnd_ch];
}

int main(){
	InitWindow(screenWidth, screenHeight, "Collision Sim Beta");

	int amt = rand() % 100;

	vector<Ball> balls(amt);

	while(!WindowShouldClose()){
		BeginDrawing();
		EndDrawing();
	}
}
