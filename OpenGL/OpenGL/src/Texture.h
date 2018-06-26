#pragma once

#ifndef OPENGL_TEXTURE_H
#define OPENGL_TEXTURE_H

#include "Renderer.h"

class Texture
{

private:
	unsigned int m_RendererID;
	std::string m_FilePath;
	unsigned char* m_LocalBuffer;
	int m_Width;
	int m_Height;
	int m_BPP;

public:
	Texture(const std::string &path);
	~Texture();

	void Bind(unsigned int slot = 0) const;
	void Unbind() const;

	int GetWidth() const { return m_Width; }
	int GetHeight() const { return m_Height; }

};

#endif