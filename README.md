## FSV (for Windows, MSVC Source Port)
This is a Windows fork of the Linux FSV clone, compileable with Microsoft Visual C++.
This repo is a fork of [mingw fork of FSV](https://github.com/genbtc/fsv/), which is fork [a fork of FSV](https://github.com/mcuelenaere/fsv) - [original fsv](http://fsv.sourceforge.net/).
The original fork author is [Maurus Cuelenaere](https://github.com/mcuelenaere)
The original author is [Daniel Richard G.](http://fox.mit.edu/skunk/), a former student of Computer Science at the MIT.

**About FSV port**
This source port is designed to compileable using Microsoft Visual C++ 2008 or later and will run for any Windows from Windows XP to latest Windows 10.

If you lazy, just download [precompiled program here](https://github.com/thiekus/fsvwin/releases).

>Note: You will be need OpenGL driver update installed on your OS at least version 1.1, or it will not work (or just crash).
>Also, you need more adequate RAM, Processor and good graphic card if you want to index such as huge directories and files list.

[![fsv.png](https://i.postimg.cc/nhDhhK2R/fsv.png)](https://postimg.cc/zyqrdg9K)

**About FSV**

> fsv (pronounced eff-ess-vee) is a file system visualizer in cyberspace. It lays out files and directories in three dimensions, geometrically representing the file system hierarchy to allow visual overview and analysis. fsv can visualize a modest home directory, a workstation's hard drive, or any arbitrarily large collection of files, limited only by the host computer's memory and graphics hardware.

Its ancestor, SGI's `fsn` (pronounced "fusion") originated on IRIX and was prominently featured in Jurassic Park: ["It's a Unix system!"](https://www.youtube.com/watch?v=3HjOjvu6oKA). 

[Screenshots](http://fsv.sourceforge.net/screenshots/) of the original clone are still available.

Useful info and screenshots of the original SGI IRIX implementation are available on [siliconbunny](http://www.siliconbunny.com/fsn-the-irix-3d-file-system-tool-from-jurassic-park/).
This repo is a fork of [a fork of FSV](https://github.com/mcuelenaere/fsv) 

**Building**

*Note: this is steps for building this repo sources from MSVC. If you would like to build using mingw in MSYS2, consider use this [mingw fork repo](https://github.com/genbtc/fsv/) and follow [this instructions](https://mrlithium.blogspot.com/2017/07/compiling-fsv-jurassic-park-program-on.html) instead.*

Requirements:
* Microsoft Visual C++ 2008 or later, although Visual C++ 2005 solutions provided but not frequently updated (Express edition needs Windows SDK headers and libraries)
* GTK+ 2.24 for Windows, you can build for yourself [from this tutorial](https://wiki.gnome.org/Projects/GTK/Win32/MSVCCompilationOfGTKStack) or use this [GTK+ 2.24.10 all-in-one package](http://ftp.gnome.org/pub/gnome/binaries/win32/gtk+/2.24/gtk+-bundle_2.24.10-20120208_win32.zip) (this is the last official all-in-one prebuild for Windows).

Steps:
* Extract GTK all-in-one package into any directory, for example at ```C:\gtk2``` and assume this is your gtk root directory.
* Add ```C:\gtk2\bin``` directory into your ```PATH``` environtment variable for your convenient while launching program.
* Open ```fsvwin.sln``` from Visual Studio.
* For first time you would to build, add these includes directory paths into your project include directory (or VCDIR in older Visual Studio):
```
C:\gtk2\include
C:\gtk2\include\atk-1.0
C:\gtk2\include\cairo
C:\gtk2\include\fontconfig
C:\gtk2\include\freetype2
C:\gtk2\include\gail-1.0
C:\gtk2\include\gdk-pixbuf-2.0
C:\gtk2\include\gio-win32-2.0
C:\gtk2\include\glib-2.0
C:\gtk2\include\gtk-2.0
C:\gtk2\include\libpng14
C:\gtk2\include\pango-1.0
C:\gtk2\include\pixman-1
C:\gtk2\lib\glib-2.0\include
C:\gtk2\lib\gtk-2.0\include
```
* Also, add ```C:\gtk2\lib``` directory for library path.
* Build solution.

**Known Issues**

* Sometimes, program randomly crashes if you do input while program still busy or under heavy load.
* Debug executable isn't working at this moment. Strangely, release mode build will be work.
* Date time picker omitted in By date/time setup due unported custom gtk control.
* Also panel in By date/time setup not properly drawn because it depends into gdk drawing instead cairo as more recent version of Gtk+2.
