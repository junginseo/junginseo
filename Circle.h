#pragma once
#ifndef CIRCLE
#define CIRCLE
#include "ofMain.h"

class Circle {

public:

	void setup();
	void update();
	void draw();

	float x;
	float y;
	float radius;

	Circle();
	void setRadius(float r);
};
#endif