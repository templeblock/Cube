#ifndef __SHADER_H__
#define __SHADER_H__

#include <string>
#include <GL/glew.h>

//GL_FRAGMENT_SHADER
//GL_VERTEX_SHADER

class Shader
{
public:
	Shader(int shaderType, const char* filename);
	~Shader();

	GLuint GetShaderID() const;

private:
	std::string GetShaderCode(const char* filename) const;
	void CompileShaderCode(const char* shaderCode) const;

private:
	GLuint m_ShaderID;
	int m_ShaderType;
};

#endif