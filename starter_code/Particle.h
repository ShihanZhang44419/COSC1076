
#ifndef COSC_ASS_ONE_PARTICLE
#define COSC_ASS_ONE_PARTICLE

#include "Types.h"

class Particle {
public:
   Particle(int xCo, int yCo, Orientation action);
   /*                                           */
   /* DO NOT MOFIFY ANY CODE IN THIS SECTION    */
   /*                                           */

   // x-co-ordinate of the particle
   int getX();

   // y-co-ordinate of the particle
   int getY();

   // Orientation of the particle
   Orientation getOrientation();


   /*                                           */
   /* YOU MAY ADD YOUR MODIFICATIONS HERE       */
   /*                                           */
private:

   int xCo;
   int yCo;
   Orientation action;
   
};

/*                                           */
/* DO NOT MOFIFY THIS TYPEDEF                */
/*                                           */
// Pointer to a Particle
typedef Particle* ParticlePtr;

#endif // COSC_ASS_ONE_PARTICLE

//                                           ./starter_code sampleTest/sample01
//                                           ./starter_code myTest/test01
//                                           $ g++ -std=c++14  -o starter_code *.cpp