# somegl

somegl stuff...  
just messing around and learning more CMake  

# Build

* First recursively clone the repo

```
$ git clone --recursive git@github.com:ghendersonnc/somegl.git
```

## Windows
* Make sure `CMake/bin` is in PATH
* run build_windows.bat from root directory (folder with CMakeLists)  
```
# Running from PowerShell but should work on CMD and does work on git-bash
PS> ./build_windows.bat
```
## Linux (Not tested but could work)
```
$ mkdir build && cd build
$ cmake ..
$ make
```

## macOS
Go learn [Metal](https://developer.apple.com/metal/)

# Third-party
[GLFW](https://github.com/glfw/glfw)  
[GLAD (Not built from source)](https://github.com/Dav1dde/glad)
