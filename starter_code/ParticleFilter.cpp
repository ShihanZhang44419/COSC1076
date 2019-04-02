
#include "ParticleFilter.h"

#include <cstdio>
#include <cstdlib>
#include <iostream>

// Initialise a new particle filter with a given maze of size (x,y)
ParticleFilter::ParticleFilter(char** maze, int rows, int cols) {
//     ?
    this->maze = maze;
    this->rows = rows;
    this->cols = cols;

}  
// Clean-up the Particle Filter
ParticleFilter::~ParticleFilter() {
}

// A new observation of the robot, of size 3x3
void ParticleFilter::newObservation(Grid observation) {
    
}

// Return a DEEP COPY of the ParticleList of all particles representing
//    the current possible locations of the robot
ParticleList* ParticleFilter::getParticles() {
   return NULL;
}
