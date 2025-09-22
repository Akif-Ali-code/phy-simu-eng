#include "shapes_2D.c"
//momentum 100% conserved
void
void collide_elastically(Sphere *s1, Sphere *s2, float collision_strength){
    s1 -> vel = collision_strength/s1->mass;
    s2 -> vel = -collision_strength/s2->mass;
}
    
