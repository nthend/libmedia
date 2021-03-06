#pragma once

#include <media/graphics.hpp>

#include "js/canvas.hpp"

namespace media {
class WebGraphics : public Graphics {
private:
	JSCanvas *jscanvas;
	int width, height;
	double lts = 0.0;
	
	Handler *handler;
	
public:
	WebGraphics(JSCanvas *canvas);
	virtual ~WebGraphics();
	
	virtual ivec2 getBounds() const override;
	
	void create();
	void destroy();
	void resize();
	void resize(int w, int h);
	void draw(double dt);
	
	JSCanvas *getCanvas();
	
	virtual void setHandler(Handler *h) override;
	virtual Handler *getHandler() const override;
};
}
