QT RESOURCE COMPILER (QRC) FOR ZIG
==================================

The `qrc-zig` program reads from a Qt Resource Collection `.qrc` file and
generates a source import (`.zig`) optionally with a binary file (`.rcc`) for
use in libqt6zig applications.

Example
-------

For a usage example, see the [`rcc` example](https://github.com/rcalixte/libqt6zig-examples/tree/master/src/rcc)
folder.

Building
--------

This can be built from source by running `go build` while in this directory.
The resulting binary will be static by default and named `qrc-zig`. There are
no external dependencies.

Installation
------------

This can also be fetched and installed by running:

```bash
go install github.com/rcalixte/libqt6zig/cmd/qrc-zig@latest
```

If successful, this will place the `qrc-zig` binary at `$GOPATH/bin`.

Usage
-----

By default, this program attempts to use Qt's `rcc` application from the local
path. In the event this is not ideal, the `-r` flag can be used to provide the
full path.

To see the full options that are available, run `./qrc-zig -h`.

Execution design
----------------

1. Pass the `.qrc` input file to `rcc` (or the defined alternative).

2. Either keep the binary and generate the minimal Zig stub for pairing or the
default, which is to convert the binary data output file to its hexadecimal
representation and append that representation and the related value of the
length of the data (`u32`) to the generated Zig code.

3. If the hexadecimal representation is created, the binary data file is
deleted. The functions in the generated Zig file can be imported for execution
in application code.
