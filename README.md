<div align="center">
<img alt="libqt6zig" src="assets/libqt6zig.png" height="128px;" />

![MIT License](https://img.shields.io/badge/License-MIT-green)
[![Go Report Card](https://goreportcard.com/badge/github.com/rcalixte/libqt6zig)](https://goreportcard.com/report/github.com/rcalixte/libqt6zig)
[![Static Badge](https://img.shields.io/badge/v0.15%20(stable)-f7a41d?logo=zig&logoColor=f7a41d&label=Zig)](https://ziglang.org/download/)
</div>

---

MIT-licensed Qt 6 bindings for Zig

This library is a straightforward binding of the Qt 6.8+ API. You must have a working C, C++, and Zig development toolchain to use this binding as well as the development files needed to build Qt 6 applications. This library and the related examples use the Zig toolchain. The [Building](#building) section below has instructions for installing the required dependencies.

For previous libqt6zig versions supporting Qt 6.4+, there are branches corresponding to the major and minor version of the Qt base, e.g. `6.4`. Note that these versions will receive minimal support and should be considered frozen.

This library is designed to be used as a dependency in a larger application and not as a standalone library. The versioning scheme used by this library is based on the Qt version used as a base to generate the bindings with an additional nod to the library revision number. Any breaking changes to the library will be reflected in the changelog.

These bindings are based on the [MIQT bindings for Go](https://github.com/mappu/miqt) that were released in August 2024. This library features support for Qt Core, GUI, Widgets, and Network as well as [additional Qt modules](https://doc.qt.io/qt-6/qt-additional-modules.html) such as Multimedia, Print Support, Spatial Audio, SQL, SVG, WebChannel, WebEngine, and more. In addition to Qt modules, this library also features support for third-party libraries such as [QScintilla](https://riverbankcomputing.com/software/qscintilla), various [KDE Frameworks](https://api.kde.org), and others. This library has support for slots/signals, subclassing, custom widgets, async via Qt, etc. In addition, there is library tooling that provides native support for Qt Creator/Designer forms and the Qt Resource System. With improper handling, it is fairly easy to encounter segmentation faults or errors. Q3 of the [FAQ](#faq) is a decent entry point for newcomers in addition to the [examples](https://github.com/rcalixte/libqt6zig-examples). Please try out the library and start a [discussion](https://github.com/rcalixte/libqt6zig/discussions) if you have any questions or issues directly relevant to this library.

---

TABLE OF CONTENTS
-----------------

- [Supported Platforms](#supported-platforms)
- [License](#license)
- [Examples](#examples)
- [Building](#building)
- [Usage](#usage)
- [FAQ](#faq)
- [Special Thanks](#special-thanks)

Supported platforms
-------------------

| OS      | Arch   | Linkage (Bindings) | Status  |
| ------- | ------ | ------------------ | ------- |
| FreeBSD | x86_64 | Static             | ✅ Works |
| Linux   | arm64  | Static             | ✅ Works |
| Linux   | x86_64 | Static             | ✅ Works |

By default, these bindings are statically linked and the auxiliary dependent libraries are dynamically linked.

Some libraries have restrictions, either due to limited platform support, less-permissive licensing, or other reasons. For less-permissive licenses, these restrictions are documented in the library's README file. The prefix paths for the subdirectory for these libraries are documented below.

| Prefix             | Operating System Support  | Licensing   |
| ------------------ | ------------------------- | ----------- |
| extras-            | all platforms<sup>1</sup> | Permissive  |
| foss-extras-       | BSD & Linux only          | Permissive  |
| foss-restricted-   | BSD & Linux only          | Restrictive |
| posix-extras-      | non-Windows               | Permissive  |
| posix-restricted-  | non-Windows               | Restrictive |
| restricted-extras- | all platforms             | Restrictive |

<sup>1</sup>While macOS and Windows are supported upstream by the libraries, library installation for these platforms is non-trivial. Therefore, these libraries are disabled by default and must be explicitly enabled with the appropriate build option.

License
-------

The `libqt6zig` bindings are licensed under the MIT license.

You must also meet your license obligations for Qt and the included libraries.

Examples
--------

The [`helloworld`](https://github.com/rcalixte/libqt6zig-examples/tree/master/src/helloworld/main.zig) example follows:

```zig
const std = @import("std");
const qt6 = @import("libqt6zig");
const qapplication = qt6.qapplication;
const qpushbutton = qt6.qpushbutton;
const qwidget = qt6.qwidget;

var counter: isize = 0;

pub fn main() void {
    // Initialize Qt application
    const argc = std.os.argv.len;
    const argv = std.os.argv.ptr;
    _ = qapplication.New(argc, argv);

    const text = "Hello world!";
    const widget = qwidget.New2();
    if (widget == null) @panic("Failed to create widget");
    defer qwidget.QDelete(widget);

    // We don't need to free the button, it's a child of the widget
    const button = qpushbutton.New5(text, widget);
    qpushbutton.SetFixedWidth(button, 320);

    qpushbutton.OnClicked(button, button_callback);

    qwidget.Show(widget);

    _ = qapplication.Exec();

    std.debug.print("OK!\n", .{});
}

fn button_callback(self: ?*anyopaque) callconv(.c) void {
    counter += 1;
    var buffer: [64]u8 = undefined;
    const text = "You have clicked the button {d} time(s)";
    const formatted = std.fmt.bufPrintZ(&buffer, text, .{counter}) catch @panic("Failed to bufPrintZ");
    qpushbutton.SetText(self, formatted);
}
```

Full examples are available in the [`libqt6zig-examples`](https://github.com/rcalixte/libqt6zig-examples) repository.

Building
--------

FreeBSD (native)
----------------

- *Tested with FreeBSD 14 / Qt 6.8 + 6.9*

For dynamic linking with the Qt 6 system libraries:

```bash
sudo pkg install qt6-base qt6-charts qt6-multimedia qt6-pdf qt6-svg qt6-webchannel qt6-webengine kf6-attica kf6-kbookmarks kf6-kcodecs kf6-kcolorscheme kf6-kcompletion kf6-kconfig kf6-kconfigwidgets kf6-kcoreaddons kf6-kcrash kf6-kglobalaccel kf6-kguiaddons kf6-ki18n kf6-kiconthemes kf6-kio kf6-kitemviews kf6-kjobwidgets kf6-knewstuff kf6-knotifications kf6-kplotting kf6-kservice kf6-solid kf6-sonnet kf6-ktextwidgets kf6-kwidgetsaddons kf6-kwindowsystem kf6-kxmlgui qscintilla2-qt6 qtermwidget
```

> [!NOTE]
> The `zig` package will need to be downloaded and installed separately if the latest stable version is not available in the default repositories.

Linux (native)
--------------

- *Tested with Debian 12 + 13 / Qt 6.4 + 6.8*

- *Tested with Linux Mint 22 / Qt 6.4*

- *Tested with Ubuntu 24.04 / Qt 6.4*

- *Tested with Fedora 41 + 42 / Qt 6.8 + 6.9*

- *Tested with EndeavourOS Mercury Neo / Qt 6.8 + 6.9*

For dynamic linking with the Qt 6 system libraries:

- __Debian-based distributions__:

```bash
sudo apt install qt6-base-dev qt6-base-private-dev qt6-charts-dev qt6-multimedia-dev qt6-pdf-dev qt6-svg-dev qt6-webchannel-dev qt6-webengine-dev libkf6attica-dev libkf6bookmarks-dev libkf6codecs-dev libkf6colorscheme-dev libkf6completion-dev libkf6config-dev libkf6configwidgets-dev libkf6coreaddons-dev libkf6crash-dev libkf6globalaccel-dev libkf6guiaddons-dev libkf6i18n-dev libkf6iconthemes-dev libkf6kio-dev libkf6itemviews-dev libkf6jobwidgets-dev libkf6newstuff-dev libkf6notifications-dev libkf6plotting-dev libkf6service-dev libkf6solid-dev libkf6sonnet-dev libkf6textwidgets-dev libkf6widgetsaddons-dev libkf6windowsystem-dev libkf6xmlgui-dev libqscintilla2-qt6-dev libqtermwidget-dev sonnet6-plugins
```

> [!NOTE]
> The `zig` package must be downloaded and installed separately.

- __Fedora-based distributions__:

```bash
sudo dnf install qt6-qtbase-devel qt6-qtcharts-devel qt6-qtmultimedia-devel qt6-qtpdf-devel qt6-qtsvg-devel qt6-qtwebchannel-devel qt6-qtwebengine-devel kf6-attica-devel kf6-kbookmarks-devel kf6-kcodecs-devel kf6-kcolorscheme-devel kf6-kcompletion-devel kf6-kconfig-devel kf6-kconfigwidgets-devel kf6-kcoreaddons-devel kf6-kcrash-devel kf6-kglobalaccel-devel kf6-kguiaddons-devel kf6-ki18n-devel kf6-kiconthemes-devel kf6-kio-devel kf6-kitemviews-devel kf6-kjobwidgets-devel kf6-knewstuff-devel kf6-knotifications-devel kf6-kplotting-devel kf6-kservice-devel kf6-solid-devel kf6-sonnet-devel kf6-ktextwidgets-devel kf6-kwidgetsaddons-devel kf6-kwindowsystem-devel kf6-kxmlgui-devel qtermwidget-devel qscintilla-qt6-devel kf6-sonnet-aspell
```

> [!NOTE]
> The `zig` package will need to be downloaded and installed separately if the latest stable version is not available in the default repositories.

- __Arch-based distributions__:

```bash
sudo pacman -S qt6-base qt6-charts qt6-multimedia qt6-svg qt6-webchannel qt6-webengine attica kbookmarks kcodecs kcolorscheme kcompletion kconfig kconfigwidgets kcoreaddons kcrash kglobalaccel kguiaddons ki18n kiconthemes kio kitemviews kjobwidgets knewstuff knotifications kplotting kservice ktextwidgets kwidgetsaddons kwindowsystem kxmlgui qscintilla-qt6 qtermwidget solid sonnet
```

> [!NOTE]
> The `zig` package will need to be downloaded and installed separately if the latest stable version is not available in the default repositories.

Once the required packages are installed, the library can be built from the root of the repository:

```bash
zig build
```

Users of Arch-based distributions need to __make sure that all packages are up-to-date__ first and will need to add the following option to support successful compilation:

```bash
zig build -Denable-workaround
```

The compiled libraries can be installed to the system in a non-default location by adding the `--prefix-lib-dir` option to the build command:

```bash
sudo zig build --prefix-lib-dir /usr/local/lib/libqt6zig # creates /usr/local/lib/libqt6zig/{libraries}
```

Prefixed libraries have per-library options that can be used to enable or disable them (where supported):

```bash
zig build -Denable-charts=true -Denable-qscintilla=false
```

In the event that one or more extra library include paths are needed e.g. a locally compiled extra library in a non-standard path, the `extra-paths` option supports this use case:

```bash
zig build -Dextra-paths="C:/Qt/6/mingw_64/include"
```

or

```bash
zig build -Dextra-paths={"/opt/qt6","/opt/lib/qt6"}
```

To see the full list of build options available:

```bash
zig build --help
```

Usage
-----

- Import the library into your project:

```bash
zig fetch --save git+https://github.com/rcalixte/libqt6zig
```

Append `#<tag>`, `#<commit>`, or `#<branch>` to the end of the URL to pin to a specific version of the library. By default, the most recent commit at the time of invocation is used.

Alternative options and file formats exist as well, such as:

```bash
zig fetch --save https://github.com/rcalixte/libqt6zig/archive/<commit>.tar.gz
```

- Add the library to your `build.zig` file:

```zig
const qt6zig = b.dependency("libqt6zig", .{
    .target = target,
    .optimize = .ReleaseFast,
});

// After defining the executable, add the module from the library
exe.root_module.addImport("libqt6zig", qt6zig.module("libqt6zig"));

// Link the compiled libqt6zing libraries to the executable
// qt_lib_name is the name of the target library without prefix and suffix, e.g. qapplication, qwidget, etc.
exe.root_module.linkLibrary(qt6zig.artifact(qt_lib_name));
```

__Extra options are required for building on Arch-based distributions. Refer to the build system at the examples link below for more details.__

- Use the library in your code:

```zig
// the main qt6 module to import
const qt6 = @import("libqt6zig");

// C ABI Qt typedefs (if needed)
const C = qt6.C;

// Qt class imports for Zig
const qapplication = qt6.qapplication;
const qwidget = qt6.qwidget;
const qnamespace_enums = qt6.qnamespace_enums;
```

Full examples of the build system and sample applications can be found in the [`libqt6zig-examples`](https://github.com/rcalixte/libqt6zig-examples) repository.

> [!IMPORTANT]
> Cross-compilation is not supported by this library at this time.

FAQ
---

### Q1. Can I release a proprietary, commercial app with this binding?

Yes. You must also meet your Qt license obligations: either dynamically link Qt library files under the LGPL or purchase a Qt commercial license for static linking.

### Q2. How long does it take to compile?

Under normal conditions, the first compilation of the entire library should take less than 30 minutes, assuming the hardware in use is at or above the level of that of a consumer-grade mid-tier machine released in the past decade. Once the build cache is warmed up, subsequent compilations should be very fast, on the order of seconds. **Compiling the entire library is not necessary unless direct library development is an objective.** For client applications that use and configure a specific subset of the main library, the expected compilation time should be much shorter, e.g. compiling the `helloworld` example, only linking the libraries needed and without a warm cache, should take under 30 seconds.

### Q3. How does the `libqt6zig` API differ from the official Qt C++ API?

Supported Qt C++ class methods are implemented 1:1 as structs of functions where the function names in Zig correspond to the PascalCase equivalent of the Qt C++ method and the struct names are lowercase equivalents of the Qt C++ class name. [The official Qt documentation](https://doc.qt.io/qt-6/classes.html) should be used for reference and is included in the library wrapper source code (though not all links are guaranteed to work perfectly, nor is this functionality in scope for this project). Some of the main concepts are described below with a table of code equivalents following for reference.

- `QWidget::show()` is projected as `qwidget.Show(?*anyopaque)`
- `QPushButton::setText(QString)` is projected as `qpushbutton.SetText(?*anyopaque, []const u8)`

As a mental model, developers consuming this library should keep in mind that there are essentially two different tracks of memory management required for clean operation: one for the C++ side and one for the Zig side. The Zig side is managed by the developer and the C++ side has variant ownership semantics. Ownership semantics are documented throughout the [C++ documentation](https://doc.qt.io/qt-6/topics-core.html).

There are bits of idiomatic Zig in the library but much of the code is not idiomatic for Zig due to the complexity of the Qt C++ API. One example of this is that although there are allocators as parameters to some functions, they are always the last parameter. Knowledge of the Qt C++ API is required to understand and make full use of the library. While not an exhaustive list, there are some key topics to understand:

- [Qt object ownership](https://doc.qt.io/qt-6/objecttrees.html)
- [Qt signals and slots](https://doc.qt.io/qt-6/signalsandslots.html)
- [Qt's property system](https://doc.qt.io/qt-6/properties.html)
- [Qt's Meta-Object system](https://doc.qt.io/qt-6/metaobjects.html)
- [Qt widgets](https://doc.qt.io/qt-6/examples-widgets.html)

The `QByteArray`, `QString`, `QList<T>`, `QVector<T>`, `QMap<K,V>`, `QHash<K,V>` types are projected as plain Zig types: `[]u8`, `[]const u8`, `[]T`, `AutoHashMapUnmanaged[K]V`, and `StringHashMapUnmanaged[V]`. Therefore, it is not possible to call any of the Qt type's methods and some Zig equivalent method must be used instead. The raw C ABI pointer types for the Qt C++ API are available for use where needed by default in the `C` namespace of the top level of the library. This library was constructed with the goal of enabling single-language application development. Anything beyond that boundary is up to the developer to implement.

- Zig string types are internally converted to `QString` using `QString::fromUtf8`. Therefore, the Zig string input must be UTF-8 to avoid [mojibake](https://en.wikipedia.org/wiki/Mojibake). If the Zig input string contains binary data, the conversion would corrupt such bytes into U+FFFD (�). On return to Zig space, this becomes `\xEF\xBF\xBD`.

- The iteration order of a Qt `QMap`/`QHash` will differ from the Zig API map iteration order. `QMap` is iterated by key order, but the Zig maps used by the library and `QHash` iterate in an undefined internal order. Future versions of `libqt6zig` may provide a way to iterate in a specific order.

There is a helper library that contains some types and functions that are useful for the C ABI but these are not required for the Zig API.

Where Qt returns a C++ object by value (e.g. `QSize`), the binding may have moved it to the heap, and in Zig, this may be represented as a pointer type. In such cases, the caller is the owner and must free the object (using either `QDelete` methods for the type or deallocating or destroying via the allocators). This means code using `libqt6zig` can look similar to the Qt C++ equivalent code but with the addition of proper memory management.

The `connect(targetObject, SIGNAL(signal()), targetSlot, SLOT(slot()))` methods are projected as `OnSignal(targetObject, slot)`. While the parameters in the methods themselves are more convenient to use, the documentation comments in the Zig source code should be used for reference for the proper usage of the parameter types and Qt vtable references. The example code above includes a simple callback function that can be used as a reference.

- You can also override virtual methods like `PaintEvent` in the same way. Where supported, there are additional `On` and `QBase` variants:
  - `OnPaintEvent`: Set an override callback function to be called when `PaintEvent` is invoked. For certain methods, even with the override set, the base class implementation can still be called by Qt internally and these calls can not be prevented.
  - `QBasePaintEvent`: Invoke the base class implementation of `PaintEvent`. This is useful for when the custom implementation requires the base class implementation. (When there is no override set, the `QBase` implementation is equivalent to `PaintEvent`.)

Qt class inherited types are projected via opaque pointers and `@ptrCast` in Zig. For example, to pass a `var myLabel: ?*QLabel` to a function taking only the `?*QWidget` base class, it should be sufficient to pass `myLabel` and the library will automatically cast it to the correct type and Qt vtable reference.

- When a Qt subclass adds a method overload (e.g. `QMenu::sizeHint(QMenu*)` vs `QWidget::sizeHint(QWidget*)`), the base class version is shadowed and can only be called via `qwidget.SizeHint(?*anyopaque)` while the subclass implementation can be called directly, e.g. `qmenu.SizeHint(?*anyopaque)`. Inherited methods are shadowed for convenience as well, e.g. `qmenu.Show(?*anyopaque)` is equivalent to `qwidget.Show(?*anyopaque)`. While the library aims to simplify usage, consideration should still be given to the Qt documentation for the proper usage of the parameter types and Qt vtable references.

Qt expects fixed OS threads to be used for each QObject. When you first call `qapplication.New`, that will be considered the [Qt main thread](https://doc.qt.io/qt-6/thread-basics.html#gui-thread-and-worker-thread).

- When accessing Qt objects from inside another thread, it's safest to use `Threading.Async()` (from this library) to access the Qt objects from Qt's main thread. The [Threading library](https://github.com/rcalixte/libqt6zig/tree/master/src/threading/libqt6zigthreading.zig) documents additional available strategies within the source code.

Qt C++ enums are projected as Zig enum structs of `i8`, `i32`, `i64`, `u8`, `u16`, `u32`, or `u64` values with the same names. For example, `Qt::AlignmentFlag` is projected as `enums.AlignmentFlag` within the `libqnamespace` module and exported by default as `qnamespace_enums.AlignmentFlag` though developers are free to use whatever naming convention they prefer for imports. The value `Qt::AlignmentFlag::AlignLeft` or the shorthand equivalent `Qt::AlignLeft` is projected by default as `qnamespace_enums.AlignmentFlag.AlignLeft` which is of the type `i32` and value `1`. Qt C++ [QFlags](https://doc.qt.io/qt-6/qflags.html) are projected as `i32`, `u8, `u16`, `u32` when expected as a parameter or returned as a type by the Zig API where possible or `i64` due to their bitmask usage and the potential to overflow.

#### API at a glance

##### Objects

```cpp
// Qt 6 C++ API
QWidget* widget = new QWidget();
widget->setWindowTitle("Hello world!");
widget->show();

delete widget;
```

```zig
// libqt6zig API
const widget = qwidget.New2();
defer qwidget.QDelete(widget);

qwidget.SetWindowTitle(widget, "Hello world!");
qwidget.Show(widget);
```

##### Signals/slots

```cpp
// Qt 6 C++ API
connect(widget, &QWidget::customEvent, this, &MyClass::onCustomEvent);
```

```zig
// libqt6zig API
qwidget.OnCustomEvent(widget, onCustomEvent);
```

##### Enums

```cpp
// Qt 6 C++ API
Qt::AlignmentFlag alignment = Qt::AlignmentFlag::AlignLeft | Qt::AlignmentFlag::AlignTop;
```

```zig
// libqt6zig API
const alignment = qnamespace_enums.AlignmentFlag.AlignLeft | qnamespace_enums.AlignmentFlag.AlignTop;
```

> [!IMPORTANT]
> Some C++ idioms that were difficult to project were omitted from the binding. This can be improved in the future.

### Q4. What build modes are supported by the library?

Currently, only `ReleaseFast`, `ReleaseSafe`, and `ReleaseSmall` are supported. The `Debug` build mode is not supported. This may change in the future. The default build mode is `ReleaseFast`. To change the build mode:

```bash
zig build -Doptimize=ReleaseSafe
```

or

```bash
zig build --release=safe
```

### Q5. Can I use Qt Creator/Designer and the Qt Resource system?

There is a custom implementation of Qt's `uic` and `rcc` tools to allow using [Qt Creator](https://doc.qt.io/qtcreator/index.html) or [Qt Designer](https://doc.qt.io/qt-6/qtdesigner-manual.html) for form design and resource management with this library. The programs and their respective documentation are located at [`uic-zig`](https://github.com/rcalixte/libqt6zig/tree/master/cmd/uic-zig) and [`qrc-zig`](https://github.com/rcalixte/libqt6zig/tree/master/cmd/qrc-zig).

> [!NOTE]
> Only Qt Creator 16.0 (or higher) and Qt Designer 6.8.2 (or higher) are supported for use. Any existing `.ui` or `.qrc` files should be saved/exported from one of them for proper usage with these tools. Older versions can result in panics during execution and are not supported.

While optional for the `uic-zig` program, there is a hard requirement for the `qrc-zig` program:

FreeBSD
-------

These tools are already installed with `qt6-base` and located at:

- `/usr/local/libexec/qt6/rcc`
- `/usr/local/libexec/qt6/uic`

Linux
-----

- __Debian-based distributions__:

```bash
sudo apt install qt6-base-dev-tools
```

Once installed, the tools are located at:

- `/usr/lib/qt6/libexec/rcc`
- `/usr/lib/qt6/libexec/uic`

- __Fedora-based distributions__:

These tools are already installed with `qt6-qtbase-devel` and located at:

- `/usr/lib64/qt6/libexec/rcc`
- `/usr/lib64/qt6/libexec/uic`

- __Arch-based distributions__:

These tools are already installed with `qt6-base` and located at:

- `/usr/lib/qt6/rcc`
- `/usr/lib/qt6/uic`

### Q6. How can I add bindings for another Qt library?

Fork this repository and add your library to the `genbindings/config-libraries` file. [Read more »](https://github.com/rcalixte/libqt6zig/tree/master/cmd/genbindings/README.md)

Special Thanks
--------------

- [@mappu](https://github.com/mappu) for the [MIQT](https://github.com/mappu/miqt) bindings that provided the phenomenal foundation for this project

- [@arnetheduck](https://github.com/arnetheduck) for proving the value of collaboration on the back-end of this project while working across different target languages
