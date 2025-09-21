#include "shapes_2D.c"
//momentum 100% conserved
void collide_elastically(Sphere sphere1 *s1, Sphere sphere2 *s2, float collision_strength){
    s1 -> vel = collision_strength/s1->mass;
    s2 -> vel = -collision_strength/s2->mass;
}
    
