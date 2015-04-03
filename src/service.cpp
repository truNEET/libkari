#include <kari/service.hpp>

namespace ka {

static int test(lua_State *L)
{
	printf("Called Me!\n");
	return 0;
}

Service::Service(const std::string &service)
{
	m_lua = luaL_newstate();
	luaL_openlibs(m_lua);

	if (luaL_loadfile(m_lua, std::string("../resources/services/"+service+".lua").c_str()) ||
		lua_pcall(m_lua, 0, 0, 0)) {
			fprintf(stderr, "Couldn't open service plugin: %s\n", lua_tostring(m_lua, -1));
	}

	this->createFunction("register_service", test);
}

void Service::createFunction(const std::string &func, std::function<int(lua_State *L)> cb)
{
	cb(m_lua);
}

}
