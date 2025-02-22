#ifndef TERRANEKO_META_BOOT_H_
#define TERRANEKO_META_BOOT_H_

#include "SDL2/SDL.h"

namespace terraneko::meta::boot {

bool InitGui(SDL_Window*& window, SDL_Renderer*& renderer);
void CloseGui(SDL_Window*& window, SDL_Renderer*& renderer);

}  // namespace terraneko::meta::boot

#endif  // TERRANEKO_META_BOOT_H_
