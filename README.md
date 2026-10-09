# C++ Shape Calculator

A small C++17 console application demonstrating core object-oriented programming concepts using a clean header/source file structure.

## Concepts demonstrated

- **Inheritance:** `Circle` and `Rectangle` derive from `Shape`.
- **Abstraction:** `Shape` is an abstract base class with pure virtual methods.
- **Runtime polymorphism:** Calls through `Shape` pointers dispatch to the correct derived implementation.
- **`virtual` and `override`:** Virtual interface and checked overrides.
- **Virtual destructor:** Safe deletion through a base-class pointer.
- **Encapsulation:** Shape dimensions are private.
- **RAII:** `std::unique_ptr` manages dynamic object lifetime automatically.
- **STL:** `std::vector` stores smart pointers to different shape types.
- **Header/source separation:** Interfaces in `include/`, implementations in `src/`.

## Build and run

Requires a C++17 compiler and CMake 3.12 or later.

```bash
cmake -S . -B build
cmake --build build
./build/shape_calculator
```

On Windows, depending on the CMake generator, the executable may be in `build/Debug/shape_calculator.exe`.

## Example output

```text
Circle area: 28.2743
Rectangle area: 20
Destroying shape
Destroying shape
```

## Design notes

`Shape` defines the common interface. `Circle` and `Rectangle` each implement their own `area()` and `name()` functions. `main.cpp` handles them uniformly through `std::unique_ptr<Shape>` objects. The virtual destructor ensures correct derived-object destruction, while `unique_ptr` handles cleanup automatically.

## Suggested exercise

Add a `Triangle` class in its own header and source files without changing `Shape`.
