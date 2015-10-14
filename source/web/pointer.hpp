#pragma once

#include <media/pointer.hpp>
#include "js/handler.hpp"

namespace media {
class WebPointer : public Pointer {
public:
	int buttons = 0;
	JSHandler jshandler;
	ivec2 position = nullivec2;
	
	Handler *handler;
	
	WebPointer(const std::string &handler_name);
	virtual ~WebPointer() = default;
	
	virtual void setHandler(Handler *h) override;
	virtual Handler *getHandler() override;
	
	virtual ivec2 getPosition(int index = 0) const override;
	virtual int getButtons() const override;
	
	void move(ivec2 from, ivec2 to);
	void move(ivec2 to);
	void up(int button, ivec2 pos, int index = 0);
	void down(int button, ivec2 pos, int index = 0);
	void click(int button, ivec2 pos, int index = 0);
	void scroll(ivec2 pos, ivec2 val);
};
}
