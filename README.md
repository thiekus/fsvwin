## FSV (for Windows, MSVC Source Port)
This is a Windows fork of the Linux FSV clone, compileable with Microsoft Visual C++.
This repo is a fork of [mingw fork of FSV](https://github.com/genbtc/fsv/), which is fork [a fork of FSV](https://github.com/mcuelenaere/fsv) - [original fsv](http://fsv.sourceforge.net/).
The original fork author is [Maurus Cuelenaere](https://github.com/mcuelenaere)
The original author is [Daniel Richard G.](http://fox.mit.edu/skunk/), a former student of Computer Science at the MIT.

**About FSV port**
This source port is designed to compileable using Microsoft Visual C++ 2005 or later. This port was linked against GTK+ 2.6 and MSLU (Microsoft Layer for Unicode) so it will run from any Windows from Windows 98 into latest Windows 10.

If you lazy, just download [precompiled program here](https://github.com/thiekus/fsvwin/releases).

>Note: You will be need OpenGL driver update installed on your OS at least version 1.3, or it will not work (or just crash).

**About FSV**

> fsv (pronounced eff-ess-vee) is a file system visualizer in cyberspace. It lays out files and directories in three dimensions, geometrically representing the file system hierarchy to allow visual overview and analysis. fsv can visualize a modest home directory, a workstation's hard drive, or any arbitrarily large collection of files, limited only by the host computer's memory and graphics hardware.

Its ancestor, SGI's `fsn` (pronounced "fusion") originated on IRIX and was prominently featured in Jurassic Park: ["It's a Unix system!"](https://www.youtube.com/watch?v=3HjOjvu6oKA). 

[Screenshots](http://fsv.sourceforge.net/screenshots/) of the original clone are still available.

Useful info and screenshots of the original SGI IRIX implementation are available on [siliconbunny](http://www.siliconbunny.com/fsn-the-irix-3d-file-system-tool-from-jurassic-park/).
This repo is a fork of [a fork of FSV](https://github.com/mcuelenaere/fsv) 

**Install**

TODO: installation steps.

**Known Issues**

* Debug executable isn't working at this moment. Strangely, release mode build will be work.
* Date time picker omitted in By date/time setup due unported custom gtk control.
