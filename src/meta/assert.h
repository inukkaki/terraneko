#ifndef TERRANEKO_META_ASSERT_H_
#define TERRANEKO_META_ASSERT_H_

#include <cassert>

#ifdef TERRANEKO_USE_GUI_ASSERT
#   include "SDL2/SDL.h"
#   define TERRANEKO_ASSERT(expression) SDL_assert(expression)
#else
#   define TERRANEKO_ASSERT(expression) assert(expression)
#endif

#endif  // TERRANEKO_META_ASSERT_H_
