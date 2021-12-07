# C++ Project Template

A small template for quickly starting a new C++ project. 

## External Tools 

| Name       | Purpose                              |
|------------|--------------------------------------|
| VS Code    | IDE and interactive debugger         |
| git        | Source control                       |
| cmake      | Build system                         |
| ninja      | cmake generator/build system backend |
| googletest | testing framework                    |


## Project Structure

```bash
|_ .vscode        # IDE configuration
|_ configure      # Helper script to setup the project
|_ CMakeLists.txt # Build configuration 
|_ include        # Shared header files
|_ src            # Source files
|_ tests          # Test source files
|_ ext            # External/third party dependencies
|_ scratch        # Directory for works in progress/local debugging/testing code and data
|_ build          # Build artifacts
   |_ debug       # Debug build 
   |_ release     # Release build
```

## Building

```bash
# building a debug build
cmake --build build/debug

# building a release build
cmake --build build/release
```

## Running Tests

```bash
# Compile tests 
cmake --build build/debug --target tests

# Run the test targets
build/debug/tests
```

## Targets 

This project defines three targets : 

```
project        # an executable 
project_shared # shared code in this project, compiled as a static lirbary
tests          # unit testsd
```

## Debugging in VS Code 

A default launch configuration for debugging the `tests` and `project` targets is provided. Launch by hitting F5 to debug with GDB on Linux.

The launch configuration, `.vscode/launch.json` should be updated if the names of targets change, new targets are added, or for different platforms.
