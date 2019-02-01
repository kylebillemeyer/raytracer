#ifndef VECTOR3D_H
#define VECTOR3D_H

struct Vector3D {
	int x;
	int y;
	int z;
};

double dot(struct Vector3D v1, struct Vector3D v2);

#endif