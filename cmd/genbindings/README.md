# genbindings

The `genbindings` program regenerates the Qt bindings.

## Architecture design

Bindings/wrappers are generated in two passes:

Pass 0

1. Scan the input directory for header files.
2. Cache and collect the global state of all known class names, imports, enum names, and typedefs.

Pass 1

1. Scan the input directory for header files.
2. For each header file:
3. Run `clang --ast-dump=json` to get a JSON AST.
    - This is somewhat slow, the results will be cached in `./cachedir` after the first run.
    - Strip all Clang AST nodes that were included from other files, to only consider the header's own definitions.
4. Convert Clang AST to our own intermediate representation.
5. Run some transformations on the intermediate representation.

Pass 2

1. For each intermediate-representation AST:
2. Emit C ABI cpp/hxx/h bindings triplet.
    - The C ABI is a projection of Qt into plain C. The translation unit itself is C++ but the header is extern "C" compatible.
3. Emit Zig wrapper file.
    - The Zig wrapper uses C FFI to call into the C ABI binding.

## Configuration

This library is tested to work on Debian 13 with the system's available packages (Qt 6.8 / Clang 19).

In order to successfully build the library, all of the packages in the main README are required in addition to:

```text
clang clang-format libutf8proc-dev
```

You should check the following configuration:

- `config-libraries.go`: Input directories containing Qt headers
- `config-allowlist.go`: Check everything

## Steps to add extra libraries to this library

1. Git clone this repository.
2. Patch `cmd/genbindings/config-libraries.go` to add a new `modules` block for your target library.
3. Run `genbindings` to regenerate all bindings
    - The first run must populate Clang ASTs into a cache directory and may be slower, but consecutive runs should be faster once the cache is warmed up.
4. Try to use the new binding within the examples repository, by adding an example in the `src/libraries` directory.
5. Commit the generated bindings.
    - You can then test/use your forked repository.
    - Or, [open a Pull Request](https://github.com/rcalixte/libqt6zig/compare) to add the Qt library to this library.
