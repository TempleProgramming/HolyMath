# HolyMath
A divinely inspired general purpose SSE accelerated vector math library for the
TempleOS continuation [ZealOS](https://github.com/Zeal-Operating-System/ZealOS/).

If you need features for a project, message me at Professor#8404 on Discord.

# Installation
The library can be compiled by including `MakeHolyMath.ZC`, found in the root
of the library. To compile on boot, append `#include "Path/To/MakeHolyMath"`
to the end of `System/MakeSystem.ZC`.

If you are a developer of this library, do not compile on boot, as you will be
unable to recompile because new assembly routines can not be added to the
symbol table if there is already a symbol with the same name.

If you use other Holy* libraries, make sure that this library is compiled
before they are.

# Documentation
DolDoc documentation with sprite diagrams is available in `Docs/`.
