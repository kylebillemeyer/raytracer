#ifndef SHADEREC_H
#define SHADEREC_H

struct ShadeRec {
	int hit_an_object;
	Point3D local_hit_point;
	Normal normal;
	RGBColor color;
	World& w;
}

#endif