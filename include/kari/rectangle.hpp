#ifndef KARECTANGLE_HPP
#define KARECTANGLE_HPP

namespace ka {

class Rectangle
{
public:
	Rectangle(int x, int y, int w, int h);
private:
	int m_width, m_height;
	int m_x, m_y;
};

}

#endif
