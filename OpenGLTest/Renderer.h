#pragma once
//uses UIComponents, Renderables
#include <list>

#define GLEW_STATIC
#include <GLEW/glew.h>
#include <GLFW/glfw3.h>

#include "EventManager.h"
#include "Renderable.h"
#include "UIManager.h"

extern GLFWwindow *window;

class Renderer : public ISubscriber {
	public:
		Renderer();
		int RenderLoop();
		~Renderer();
	private:
		void draw();

		void GenerateBuffers(Renderable * renderable);
		void PopulateBuffers(Renderable * renderable);

        void AddToRenderables(Renderable * renderable);
        void AddToUIRenderables(UIComponent * renderable);

		void DrawRenderable(Renderable * renderable);
        void DrawUIRenderable(Renderable * renderable);

		void CreateShaderProgram(GLuint & programLoc, const char * vertexShaderPath, const char * fragmentShaderPath);

        void notify(EventName eventName, Param* params);    // Overrides ISubscriber::notify
        void DrawUITree();
        void traverseChild(UIComponent *component);

        std::list<UIComponent*> transparentList;

		std::list<Renderable*> renderables_waitList;
		std::list<Renderable*> renderables;
		const GLuint WIDTH = 1280;
		const GLuint HEIGHT = 720;
		GLuint mainProgram, VAO;
		GLuint uiProgram;

		glm::vec3 cameraPosition = { 63.5, 63.5, 63.5 };
		GLfloat cameraFOV = 90.0f;
		GLfloat nearClip = 0.1f;
		GLfloat farClip = 100.0f;

        UIManager *uim;
};

