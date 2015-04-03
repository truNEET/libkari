#ifndef KASERVICE_HPP
#define KASERVICE_HPP

#include <lua/lua.hpp>
#include <functional>
#include <string>

namespace ka {

class Service
{
public:
	Service(const std::string &service);
	void createFunction(const std::string &func, std::function<int(lua_State*)> cb);
private:
	lua_State *m_lua;
};

}

#endif
