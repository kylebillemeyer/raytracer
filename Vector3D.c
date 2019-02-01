#include "Vector3D.h"

double dot(struct Vector3D v1, struct Vector3D v2) {
	return v1.x * v2.x + v1.y * v2.y * v1.z * v2.z;
}