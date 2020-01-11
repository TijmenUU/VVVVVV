How to Build
------------
VVVVVV's unofficial linux desktop version was built with the following environment:

- `uname -a` = Linux ARCHDESKTOP 5.4.10-arch1-1 #1 SMP PREEMPT Thu, 09 Jan 2020 10:14:29 +0000 x86_64 GNU/Linux

The engine depends solely on [SDL2](https://libsdl.org/) and
[SDL2_mixer](https://www.libsdl.org/projects/SDL_mixer/). All other dependencies
are statically linked into the engine. The development libraries for Windows can
be downloaded from their respective websites, Linux and macOS developers should
compile and install from source.

Steamworks support is included and the DLL is loaded dynamically, you do not
need the SDK headers and there is no special Steam or non-Steam version. The
current implementation has been tested with Steamworks SDK v1.46.

Make sure the following packages are installed:
- gcc
- make
- sdl2
- sdl2_mixer

Then simply run `make all` to build the `bin/vvvvvv` binary. Download the [makeandplay Windows version](http://distractionware.com/blog/category/vvvvvv-make-and-play/) and extract it. It should have extracted the zip archive into a binary and a `data.zip` file. Copy this file to `bin/` like so `cp -v /path/to/data.zip /path/to/this/repository/bin/`. Then either run `make check` or `cd` to `bin/` and `./vvvvvv`. 

A Word About Compiler Quirks
----------------------------

This engine is _super_ fussy about optimization levels and runtime checks. In
particular, the Windows version _absolutely positively must_ be compiled in
Debug mode, with /RTC enabled. If you build in Release mode, or have /RTC
disabled, the game behaves dramatically different in ways that were never fully
documented (bizarre softlocks, out-of-bounds issues that don't show up in tools
like Valgrind, stuff like that). There are lots of things about this old code
that could be cleaned up, polished, rewritten, and so on, but this is the one
that will probably bite you the hardest when setting up your own build,
regardless of platform.

We hope you'll enjoy messing with the source anyway!

Love, flibit
