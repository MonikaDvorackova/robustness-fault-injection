# Robustness Fault Injection

A deterministic C++17 harness for injecting missing values, spikes, and non-finite values into numeric model inputs. Reports the change in a simple reference score.

Build with `cmake -S . -B build && cmake --build build && ./build/fault_injection`. Replace the reference score with a model adapter and add documented fault distributions before using as a robustness benchmark.
