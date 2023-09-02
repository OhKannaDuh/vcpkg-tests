#include <iostream>

#include <entt/entt.hpp>
#include <SDL3/SDL.h>

int main() {
  SDL_Init(SDL_INIT_EVERYTHING);

  SDL_Window * window = SDL_CreateWindow("VCPKG Tests", 1280, 720, SDL_WINDOW_VULKAN);
  if (!window) {
    std::cerr << SDL_GetError() << std::endl;
    return 1;
  }

  SDL_Renderer *renderer = SDL_CreateRenderer(window, NULL, SDL_RENDERER_ACCELERATED);
  if (!renderer) {
    std::cout << "SDL Error: " << SDL_GetError() << std::endl;
    return 3;
  }

  bool running = true;
  while (running) {
    SDL_Event event;
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_EVENT_QUIT) {
        running = false;
      }
    }

    
    SDL_RenderClear(renderer);
    SDL_SetRenderDrawColor(renderer, 32, 32, 32, 255);
    SDL_RenderPresent(renderer);
  }


  SDL_Quit();
  return 0;
}
