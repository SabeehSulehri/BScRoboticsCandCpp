// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape() {
    name = "Default name";
}

Shape::Shape (const Shape& s) {
    name = s.name;
}

void Shape::printName() const {
	cout << name << endl;
}

void Shape::setName(string newname) {
    name = newname;
}

string Shape::getName() {
	return name;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape() : Shape() {
	x = 0;
	y = 0;
}

CenteredShape::CenteredShape(const CenteredShape& c) : Shape(c) {
	x = c.x;
	y = c.y;
}

void CenteredShape::setX(double nx) {
	x = nx;
}

void CenteredShape::setY(double ny) {
	y = ny;
}

double CenteredShape::getX() {
	return x;
}

double CenteredShape::getY() {
	return y;
}

void CenteredShape::move(double nx, double ny) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() : CenteredShape(){
	EdgesNumber = 3;
}

RegularPolygon::RegularPolygon(const RegularPolygon& c) : CenteredShape(c) {
	EdgesNumber = c.EdgesNumber;
}

void RegularPolygon::setEdgesNumber(int en) {
	EdgesNumber = en;
}

int RegularPolygon::getEdgesNumber() {
	return EdgesNumber;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

Circle::Circle() : CenteredShape() {
	Radius = 1;
}

Circle::Circle(const Circle& c) : CenteredShape(c) {
	Radius = c.Radius;
}

void Circle::setRadius(double nr) {
	Radius = nr;
}

double Circle::getRadius() {
	return Radius;
}

double Circle::perimeter() {
	return (2*Radius*M_PI);
}

double Circle::area() {
	return (M_PI*Radius*M_PI);
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight) :
 RegularPolygon(n,nx,ny,4)
 {
    width = nwidth;
    height = nheight;
 }

 Rectangle::Rectangle() : RegularPolygon() {
	width = 2;
	height = 1;
}

Rectangle::Rectangle(const Rectangle& c) : RegularPolygon(c) {
	height = c.height;
	width = c.width;
}

void Rectangle::setHeight(double nh) {
	height = nh;
}

void Rectangle::setWidth(double nw) {
	width = nw;
}

double Rectangle::getHeight() {
	return height;
}

double Rectangle::getWidth() {
	return width;
}

double Rectangle::perimeter() {
	return 2*(height+width);
}

double Rectangle::area() {
	return height*width;
}

Square::Square(const string& n, double nx, double ny, double nside) : Rectangle(n, nx, ny, nside, nside) {
}

Square::Square() : Rectangle() {
	//making height and width equal
	setHeight(getWidth());
}

Square::Square(const Square& c) : Rectangle(c) {
}

void Square::setSide(double nside) {
	 setHeight(nside);
	 setWidth(nside);
}

double Square::getSide() {
	return getHeight();
}