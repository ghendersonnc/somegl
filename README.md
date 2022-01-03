# somegl

somegl stuff...  
just messing around and learning more CMake  

# Build

* First recursively clone the repo

```
$ git clone --recursive https://github.com/ghendersonnc/somegl.git
```

## Windows
* [Download Windows x64 ZIP](https://cmake.org/download/)
* Make sure `CMake/bin` is in PATH
* run build_windows.bat from root directory (folder with CMakeLists)  
```
# Running from PowerShell but should work on CMD and does work on git-bash
PS> ./build_windows.bat
```
## Linux

### Ubuntu (X11)
```
$ sudo apt install xorg-dev
$ mkdir build && cd build
$ cmake ..
$ make
```

### Ubuntu (Wayland)
```
$ sudo apt install libwayland-dev libxkbcommon-dev wayland-protocols extra-cmake-modules
$ mkdir build && cd build
$ cmake ..
$ make
```

### Fedora/RHEL (X11)
```
$ sudo dnf install libXcursor-devel libXi-devel libXinerama-devel libXrandr-devel
$ mkdir build && cd build
$ cmake ..
$ make
```
### Fedora/RHEL (Wayland)
```
$ sudo dnf install wayland-devel libxkbcommon-devel wayland-protocols-devel extra-cmake-modules
$ mkdir build && cd build
$ cmake ..
$ make
```

### FreeBSD (X11)
```
$ pkg install xorgproto
$ mkdir build && cd build
$ cmake ..
$ make
```
### FreeBSD (Wayland)
```
$ pkg install wayland libxkbcommon wayland-protocols kf5-extra-cmake-modules
$ mkdir build && cd build
$ cmake ..
$ make
```

## macOS
Go learn [Metal](https://developer.apple.com/metal/)

# Third-party
[GLFW](https://github.com/glfw/glfw)  
[GLAD (Not built from source)](https://github.com/Dav1dde/glad)
