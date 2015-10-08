#pragma once

namespace media {
class Graphics {
public:
	class Handler {
	public:
		Graphics *super;
		virtual void create() {}
		virtual void destroy() {}
		virtual void resize(int, int) {}
	};
	
protected:
	int width = 0, height = 0;
	
public:
	Graphics() {}
	virtual ~Graphics() {}
	
	int getWidth() const {
		return width;
	}
	int getHeight() const {
		return height;
	}
	
	virtual void setHandler(Handler *l) = 0;
	virtual Handler *getHandler() const = 0;
};
}
