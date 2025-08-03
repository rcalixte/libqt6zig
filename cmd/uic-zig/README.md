USER INTERFACE COMPILER (UIC) FOR ZIG
=====================================

The `uic-zig` program compiles a Qt Creator or Qt Designer `.ui` file into a
`.zig` file which can be imported as application code by developers using
libqt6zig to create applications. Some functionality is difficult to implement
automatically, namely custom widgets. It is still possible to implement
manually with the generated output as an aid if that is desired. This program
also has some flags that attempt to assist with this where possible. See the
full usage for more details.

One key difference from the C++ and Python implementations is that rather than
taking a widget-based parameter and forming it into the root of the target
creation, the Zig setup function only takes an allocator as a parameter that
stores the generated creation that is returned. This aims to facilitate more
fine-grained control over how the created objects are managed from within Zig.

Example
-------

For a usage example, see the [`uic` example](https://github.com/rcalixte/libqt6zig-examples/tree/master/src/uic)
folder.

Building
--------

This can be built from source by running `go build` while in this directory.
The resulting binary will be static by default and named `uic-zig`. There are
no external dependencies.

Installation
------------

This can also be fetched and installed by running:

```bash
go install github.com/rcalixte/libqt6zig/cmd/uic-zig@latest
```

If successful, this will place the `uic-zig` binary at `$GOPATH/bin`.

Usage
-----

This program attempts to parse the input `.ui` file to generate a Zig file that
can be imported directly when used. By default, connections are meant to be
implemented in a separate Zig file that can be imported into the generated
output code. This is configurable via options.

To see the full options that are available, run `./uic-zig -h`.

Execution design
----------------

1. Parse the XML type definitions from the `.ui` input file

2. Recursively walk and emit Zig code.

When developing with this `uic-zig`, it's useful to run Qt's `uic` side-by-side
and compare the output of each program for missing attributes or assignments.
By default, unhandled fields/attributes will be included as comments in the
generated output code for increased developer awareness.
