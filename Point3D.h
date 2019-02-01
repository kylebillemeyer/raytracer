#include "Vector3D.h"

#ifndef POINT3D_H
#define POINT3D_H

struct Point3D {
	int x;
	int y;
	int z;
};

struct Vector3D toVec(struct Point3D p);
struct Point3D subtract(struct Point3D p1, struct Point3D p2);
struct Point3D scalarMult(struct Point3D p, double s);

#endif