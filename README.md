# helloworld-gui
Cross-platform GUI version of Hello World 
## Status
[![Snap Status](https://build.snapcraft.io/badge/enjoysoftware/helloworld-gui.svg)](https://build.snapcraft.io/user/enjoysoftware/helloworld-gui)
## Requirements
Qt5(`qtbase5-dev`)
## How to build
First, execute the following command:
```bash
cd app && lrelease app.pro && qmake
```
For Ubuntu and Debian, you can build by executing the "make" command as follows.
```bash
make -j{n}
or
make
```
