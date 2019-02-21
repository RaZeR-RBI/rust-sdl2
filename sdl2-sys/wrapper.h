#include <SDL.h>
#include <SDL_syswm.h>
#if SDL_PATCHLEVEL > 5
#include <SDL_vulkan.h>

/**
 * <div rustbindgen replaces="VkInstance"></div>
 */
typedef uintptr_t VkInstance_int;

/**
 * <div rustbindgen replaces="VkSurfaceKHR"></div>
 */
typedef uint64_t VkSurfaceKHR_int;
#endif