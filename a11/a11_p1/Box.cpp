#include <iostream>
#include "Box.h"

using namespace std;

void Box::setHeight(double newheight) {
    height = newheight;
}

void Box::setWidth(double newwidth) {
    width = newwidth;
}

void Box::setDepth(double newdepth) {
    depth = newdepth;
}

double Box::getHeight() {
    return height;
}

double Box::getWidth() {
    return width;
}

double Box::getDepth() {
    return depth;
}

Box::Box() {
    height =0;
    width =0;
    depth =0;
}

Box::Box(double h, double w, double d) {
    height =h;
    width =w;
    depth =d;
}

Box::Box(const Box& B) {
    height =B.height;
    width =B.width;
    depth =B.depth;
}

Box::~Box() {

}

double Box::volume() {
    
    double v;
    v = height*width*depth;

    return v;
}