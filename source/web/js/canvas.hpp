#pragma once

#include <string>
#include <la/vec.hpp>

class JSCanvas {
private:
	std::string _name;
	int width, height;
	
public:
	JSCanvas(const std::string &name);
	virtual ~JSCanvas() = default;
	
	std::string getName() const;
	
	void setBounds(int width, int height);
	ivec2 getBounds();
	
	void startAnimation();
	void stopAnimation();
};
