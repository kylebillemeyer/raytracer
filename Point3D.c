#include "Point3D.h"
#include "Vector3D.h"

struct Vector3D toVec(struct Point3D p) {
	return struct Vector3D { p.x, p.y, p.z };
};

struct Point3D subtract(struct Point3D p1, struct Point3D p2) {
	int x = p1.x - p2.x;
	int y = p1.y - p2.y;
	int z = p1.z - p2.z;

	return struct Point3D { x, y , z };
}

struct Point3D scalarMult(struct Point3D p, double s) {
	return struct Point3D { p.x * s, p.y * s, p.z * s };
}