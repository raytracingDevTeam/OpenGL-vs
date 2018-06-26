#pragma once

#ifndef OPENGL_INDEXBUFFER_H
#define OPENGL_INDEXBUFFER_H

class IndexBuffer
{

private:
	unsigned int m_RenderID;
	unsigned int m_Count;

public:
	IndexBuffer(const unsigned int* data, unsigned int count);
	~IndexBuffer();

	void Bind() const;
	void Unbind() const;

	unsigned int GetCount() const { return m_Count;  }
};

#endif
