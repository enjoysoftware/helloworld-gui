# HelloWorld GUI
![Fork-Free](https://img.shields.io/badge/Fork-Free-brightgreen)
![Redistribution-Free](https://img.shields.io/badge/Redistribution-Free-brightgreen)
[![Build Status](https://travis-ci.com/enjoysoftware/helloworld-gui.svg?branch=master)](https://travis-ci.com/enjoysoftware/helloworld-gui)

Cross-platform GUI version of Hello World. This is useful for checking the operation of the GUI.
## Demo
![HelloWorld GUI Demo Gif](demo.gif)

## Installation
Please install using Snapcraft.

[![Get it from the Snap Store](https://snapcraft.io/static/images/badges/en/snap-store-black.svg)](https://snapcraft.io/helloworld-gui)
```
sudo snap install helloworld-gui
```
## Building
### Requirements

Qt5(Ubuntu Package: `qtbase5-dev`, `qt5-default`)  
QtTools5 Development Tools(Ubuntu Package: `qttools5-dev-tools`)
### How to build
First, execute the following command:
```bash
qmake
```
For Ubuntu and Debian, you can build by executing the "make" command as follows.

```bash
make
```
