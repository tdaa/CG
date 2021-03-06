#ifndef PROJETO_STRUCT_H__
#define PROJETO_STRUCT_H__

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glew.h>
#include <GL/glut.h>
#endif

#include <IL/il.h>
#include <string.h>
#include <vector>
#include "Transform.h"
#include "Light.h"
#include "Material.h"
#include "Point.h"

using namespace std;

class Struct{

	string file3d, fileTexture;
	vector<Transform*> refit;
	Material material;
	GLuint texture;
	vector<Point*> points, normals, textures;
	GLuint buffer[3];
	float *points_array, *normals_array, *textures_array;

public:
	Struct();
	string getFile3d();
	string getFileTexture();
	vector<Transform*> getRefit();
	Material getMaterial();
    GLuint getTexture();
    vector<Point*> getPoints();
	vector<Point*> getNormals();
	vector<Point*> getTextures();
    GLuint getBuffer();
	float* getPointsArray();
	float* getNormalsArray();
	float* getTexturesArray();
	void setFile3d(string);
	void setFileTexture(string);
	void setRefit(vector<Transform*>);
	void setMaterial(Material);
    void setTexture(GLuint);
    void setPoints(vector<Point*>);
	void setNormals(vector<Point*>);
	void setTextures(vector<Point*>);
    void setBuffer(GLuint);
	void setPointsArray(float*);
	void setNormalsArray(float*);
	void setTexturesArray(float*);
	void addTransform(Transform*);
	void addTransform(vector<Transform*>);
	void prepareTexture(string s);
    void fillBuffer();
    void draw();
};

#endif
