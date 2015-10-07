#pragma once

namespace media {
class Pointer {
public:
	class Listener {
		virtual void up() {}
		virtual void down() {}
		virtual void click() {}
		virtual void scroll(int x, int y) {}
	};
};
}
