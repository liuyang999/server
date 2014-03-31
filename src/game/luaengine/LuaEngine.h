/**
 * mangos-zero is a full featured server for World of Warcraft in its vanilla
 * version, supporting clients for patch 1.12.x.
 *
 * Copyright (C) 2005-2014  MaNGOS project <http://getmangos.eu>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * World of Warcraft, and all World of Warcraft or Warcraft art, images,
 * and lore are copyrighted by Blizzard Entertainment, Inc.
 */

#ifndef LUA_ENGINE_H
#define LUA_ENGINE_H

#include <string>
#include <set>
#include <lua.hpp>

#include "LuaIncludes.h"
#include "Policies/Singleton.h"

/**
 * @brief
 *
 */
struct LoadedLuaScripts
{
    std::set<std::string> luafiles;
};

/**
 * @brief
 *
 */
class Metztli
{
    private:
        lua_State *L;
    public:
<<<<<<< HEAD
        Lua_State() : L(lua_open()) { }

        ~Lua_State()
=======
        /**
         * @brief
         *
         */
        Metztli() : L(lua_open()) { }

        /**
         * @brief
         *
         */
        ~Metztli()
>>>>>>> 86a414a... Instantiate Lua engine as singleton.
        {
            lua_close(L);
        }

        // implicitly act as a lua_State pointer
        inline operator lua_State*()
        {
            return L;
        }
};

#define sMetztli MaNGOS::Singleton<Metztli>::Instance()
#endif
