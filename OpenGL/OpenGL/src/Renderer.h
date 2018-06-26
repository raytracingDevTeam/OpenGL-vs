#pragma once

#ifndef OPENGL_RENDERER_H
#define OPENGL_RENDERER_H

#include <GL/glew.h>

#include "VertexArray.h"
#include "IndexBuffer.h"
#include "Shader.h"

#define ASSERT(X) if(!(X)) __debugbreak();
#define GLCall(X)\
	GLClearError();\
	X;\
	ASSERT(GLLogCall( #X, __FILE__, __LINE__))


void GLClearError();

bool GLLogCall(const char* function, const char* file, int line);


class Renderer
{

private:


public:
	void Clear() const;
	void Draw(const VertexArray &va, const IndexBuffer &ib, const Shader &shader) const;

};

#endif
