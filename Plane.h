#include "Ray.h"
#include "ShadeRec.h"

#ifndef RAY_H
#define RAY_H

struct Plane {
	Point3D point;
	Vector3D normal;
};

bool doesRayHit(struct Plane *plane, struct Ray ray, double *tmin, struct ShadeRec *sr);

#endif