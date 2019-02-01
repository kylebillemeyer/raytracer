#include <stdbool.h>
#include "Plane.h"
#include "Point3D.h"
#include "Vector3D.h"


bool doesRayHit(struct Plane *plane, struct Ray ray, double *tmin, struct ShadeRec *sr) {
	struct Vector3D pMinusA = toVec(minus(plane->point, ray.o));
	double t = dot(pMinusA, plane->normal) / dot(ray.d, plane->normal);

	if (t > kEpsilon) {
		*tmin = t;
		sr->nomral = normal;
		sr.local_hit_point = ray.o + scalarMult(ray, t);

		return true;
	}
	else {
		return false;
	}
}