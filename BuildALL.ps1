

cmake -S . -B build
ctest --test-dir build --output-on-failure
cmake --build build --config Debug
cmake --build build --config Release


