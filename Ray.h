#include "Point3D.h"
#include "Vector3D.h"

#ifndef RAY_H
#define RAY_H

struct Ray {
	Point3D o;
	Vector3D d;
};

#endif