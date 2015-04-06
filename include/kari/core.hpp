#ifndef KACORE_HPP
#define KACORE_HPP

#include <kari/rectangle.hpp>
#include <string>

namespace ka {

class Core
{
public:
	Core();
	void sendRegion(const ka::Rectangle &region, const std::string &service);
};

}

#endif
