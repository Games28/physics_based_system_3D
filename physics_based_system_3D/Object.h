#ifndef OBJECT_H
#define OBJECT_H
#include "Vector.h"
#include "Mesh.h"
#include "triangle.h"
#include "matrix.h"
#include "light.h"
#include "texture.h"
#include "camera.h"
#include "clipping.h"
#include "depthdrawer.h"
#include "aabb3.h"



class Object
{
public:
	Object(vec3_t scale, vec3_t translation, vec3_t rotation);

	
	void load_cube_mesh(int side, olc::Pixel color, const char* png_filename);

	void load_obj_mesh(const char* obj_filename,olc::Pixel color, const char* png_filename);

	void process_graphics_pipline_stages(olc::PixelGameEngine* pge);

	void Render(olc::PixelGameEngine* pge, DepthDrawer& depthdrawer);

	void Update(olc::PixelGameEngine* pge, float deltatime);

	float FindMinSeparation(Object* other, vec3_t& axis, vec3_t& point);

	AABB3 getAABB(int index);

	void fitbounds();

public:
	vec3_t scale;
	vec3_t translation;
	vec3_t rotation;
	mesh_t* mesh;
	bool ispickedup = false;
	
	AABB3 scene_bounds;

	//physics test
	vec3_t velocity;
	vec3_t acceleration;
	float mass;
	float invMass;

	float object_radius;
	olc::Pixel object_color = olc::BLACK;

	std::vector<triangle_t> triangles;

	std::vector<triangle_t> trangles_to_render;

	Render_Method render_method = RENDER_FILL_TRIANGLE;
	Cull_Method cull_method = CULL_BACKFACE;
	lighting_method light_method = FLAT_SHADING;
	mat4_t proj_matrix;
	mat4_t view_matrix;
	mat4_t world_matrix;
	
	float zoom_factor = 0.0f;
	int num_triangles_to_render = 0;
	float offsetX = 0.0f;
	float offsetY = 0.0f;

};
#endif // !OBJECT_H

