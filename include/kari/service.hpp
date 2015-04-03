#ifndef KASERVICE_HPP
#define KASERVICE_HPP

#include <kari/luabridge.hpp>
#include <string>
#include <memory>

namespace ka {

class Service
{
public:
	Service(const std::string &service);
private:
	std::shared_ptr<LuaBridge> m_bridge;
};

}

#endif
