#include "Circle.h"

Circle::Circle() {
}

void Circle::setup() {
	x = 200;
	y = 200;
	radius = 0;
}

void Circle::setRadius(float r) {
	radius = r;
}

void Circle::update() {
}

void Circle::draw() {
	ofPushStyle();
		ofPushMatrix();
			ofTranslate(512, 200, 0);
			ofNoFill();
			ofSetColor(255, 255, 255);
			ofSetLineWidth(3);
			ofDrawCircle(x, y, radius * 10000.0);
		ofPopMatrix();
	ofPopStyle();
}