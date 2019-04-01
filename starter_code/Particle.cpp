#include "Particle.h"

Particle::Particle(int xCo, int yCo, Orientation action) {
   this->xCo = xCo;
   this->yCo = yCo;
   this->action = action;

}

// x-co-ordinate of the particle
int Particle::getX() {
   return xCo;
}

// y-co-ordinate of the particle
int Particle::getY() {
   return yCo;
}

// Orientation of the particle
Orientation Particle::getOrientation() {
   return action;
}
