# HelloWorld GUI
![Fork-Free](https://img.shields.io/badge/Fork-Free-brightgreen)
![Redistribution-Free](https://img.shields.io/badge/Redistribution-Free-brightgreen)
[![Build Status](https://travis-ci.com/enjoysoftware/helloworld-gui.svg?branch=master)](https://travis-ci.com/enjoysoftware/helloworld-gui)

Cross-platform GUI version of Hello World .
## Snapcraft Status
[![Snap Status](https://build.snapcraft.io/badge/enjoysoftware/helloworld-gui.svg)](https://build.snapcraft.io/user/enjoysoftware/helloworld-gui)
## How to install
Please install using Snapcraft.

[![Get it from the Snap Store](https://snapcraft.io/static/images/badges/en/snap-store-black.svg)](https://snapcraft.io/helloworld-gui)
```
sudo snap install helloworld-gui
```
## How to build
### Requirements

Qt5(`qtbase5-dev`)

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
## Contribute to translation
HelloWorld GUI can now use transifex to contribute to translation. If you want to contribute to the translation, please visit here: https://www.transifex.com/enjoysoftware-1/helloworld-gui-project/
