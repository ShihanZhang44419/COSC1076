
#include "ParticleList.h"

#include <cstdio>
#include <cstdlib>
#include <iostream>

#define PARTICLE_SIZE      10000

#ifndef DEBUG
#define DEBUG        0
#endif

// Initialise a new particle filter with a given maze of size (x,y)
ParticleList::ParticleList() {
  // this-> particles =  particles;
   
}


// Clean-up the particle list
ParticleList::~ParticleList() {
}

// Number of particles in the ParticleList
int ParticleList::getNumberParticles() {
   return numParticles;
}

// Get a pointer to the i-th particle in the list
//指针类型的 method get（int i）
ParticlePtr ParticleList::get(int i) {
   return &getNumberParticles;
}

// Add a particle (as a pointer) to the list
//    This class now has control over the pointer
//    And should delete the pointer if the particle is removed from the list
void ParticleList::add_back(ParticlePtr particle) {
}

// Remove all particles from the list
void ParticleList::clear() {
}
