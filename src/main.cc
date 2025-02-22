#include "SDL2/SDL.h"

#include "meta/boot.h"

#if (defined(__WIN32) || defined(__WIN64))
#   include "meta/winfunc.h"
#endif

// DEBUG
#include "meta/modal.h"

namespace impl {

namespace boot = terraneko::meta::boot;

}  // namespace impl

int main(int argc, char* argv[]) {
    // Resolve the blurriness of the screen (for MS Windows)
#   if (defined(__WIN32) || defined(__WIN64))
        terraneko::meta::winfunc::ResolveBlurriness();
#   endif

    // Start the GUI program
    SDL_Window* window = nullptr;
    SDL_Renderer* renderer = nullptr;

    bool initialized = impl::boot::InitGui(window, renderer);

    if (initialized) {
        // DEBUG
        terraneko::meta::modal::ShowErrorMessage("title", "success");
    }

    // Finish SDL subsystems
    impl::boot::CloseGui(window, renderer);

    return 0;
}
