# Wolfenstein 3D Clone
(_**Work in Progress**_)

I'm attempting to make a clone of the classic 1992 id Software game, Wolfenstein 3D. Cloning the game in it's entirety, including enemies, weapons, sound system, etc., would be quite a challenge for me at the moment. I'll see how far I can get. So far, I've been able to get basic raycasting working with shaded walls, a ground and sky. The map is being loaded from a file (`map.txt`):

<p align="center">
<img src="https://user-images.githubusercontent.com/25702188/198508995-3c03cd5e-da78-45b5-a35f-a7d43baa262c.gif" width="600" />
</p>

## Build Instructions
I'm doing this project on a 2020 M1 MacBook Air, 8 GB RAM, running MacOS Ventura.

SDL2 must be installed, which I've installed using Homebrew. To make sure that SDL2 get's picked up by the compiler, I've added the following lines in my `~/.zshrc` file:
```
export CPATH=/opt/homebrew/include
export LIBRARY_PATH=/opt/homebrew/lib
```
I'm compiling using g++ like so:
```
g++ -std=c++17 -lSDL2 main.cpp
```
And running like so:
```
./a.out
```
## Immediate Goals
- Textured walls, ground & sky
- Darken distant walls (fog effect)
- Use mouse to look around

## Credits
All textures used are from [this pack](https://opengameart.org/content/big-pack-of-hand-painted-tiling-textures) posted by user drummyfish on [opengameart.org](https://opengameart.org/).

## Resources Used
- [Wolfenstein 3D's map renderer](https://www.youtube.com/watch?v=eOCQfxRQ2pY) (video)
- [Super Fast Ray Casting in Tiled Worlds using DDA](https://www.youtube.com/watch?v=NbSee-XM7WA) (video)
- [Make Your Own Raycaster Part 1](https://www.youtube.com/watch?v=gYRrGTC7GtA) (video)
