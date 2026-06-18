LUPDATE FOR ZIG
===============

The `lupdate-zig` program reads from a `.zig` source file written with
libqt6zig and generates a Qt translation source file (`.ts`) for use with
either Qt Linguist and/or Qt's [`lrelease`](https://doc.qt.io/qt-6/linguist-lrelease.html)
tools.

Example
-------

For a usage example, see the [`lupdate` example](https://github.com/rcalixte/libqt6zig-examples/tree/master/src/lupdate)
folder.

Building
--------

This can be built from source by running `go build` while in this directory.
The resulting binary will be static by default and named `lupdate-zig`. There
are no external dependencies.

Installation
------------

This can also be fetched and installed by running:

```bash
go install github.com/rcalixte/libqt6zig/cmd/lupdate-zig@latest
```

If successful, this will place the `lupdate-zig` binary at `$GOPATH/bin`.

Usage
-----

Valid and supported syntax from the code file(s) containing libqt6zig methods
are processed into Qt translation files for use with Qt's internationalization
tools.

Comments are supported with [similar syntax natively supported by Qt](https://doc.qt.io/qt-6/i18n-source-translation.html):

```zig
// an ignored/private comment

//: a comment for translators
```

To see the full options that are available, run `./lupdate-zig -h`.

Execution design
----------------

1. Tokenize and parse valid source file(s).

2. Generate translation contexts based on the Zig code structure.

   i. Example of valid and supported syntax structure<sup>1</sup>:

    ```zig
    const label_text = QApplication.Translate(allocator, "Context", "Translated string");
    defer allocator.free(label_text);
    const label = QLabel.New3(label_text);

    const button_text = QPushButton.Tr(allocator, "Translated string");
    defer allocator.free(button_text);
    const button = QPushButton.New3(button_text);
    ```

3. Write out the translation file.

> [!NOTE]
> All `tr` methods must be fully-scoped to ensure proper translation context
> resolution.

<sup>1</sup>Only raw string and integer parameter types used in valid syntax
are supported.
