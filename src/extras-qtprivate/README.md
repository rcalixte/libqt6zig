# Extras - Qt Private

This directory contains bindings to private Qt classes. These classes explicitly have no stable API guarantee nor any source or binary compatibility promises for them. These are available as a resource that can simplify some advanced implementations though if simpler options exist, those are always encouraged.

---

## TABLE OF CONTENTS

- [Extras - Qt Private](#extras---qt-private)
  - [TABLE OF CONTENTS](#table-of-contents)
  - [Building](#building)
    - [FreeBSD (native)](#freebsd-native)
    - [Linux (native)](#linux-native)
      - [Debian-based distributions](#debian-based-distributions)
      - [Fedora-based distributions](#fedora-based-distributions)
      - [Arch-based distributions](#arch-based-distributions)
      - [openSUSE-based distributions](#opensuse-based-distributions)
      - [Flatpak-based environments](#flatpak-based-environments)
    - [macOS (native)](#macos-native)
    - [Windows (native)](#windows-native)

Building
--------

Extra packages and build options are required to access this additional functionality. The following build command example would be for a system based on Debian 13:

```bash
zig build -Denable-qtprivate -Dqtprivate-paths={"/usr/include/x86_64-linux-gnu/qt6/QtCore/6.8.2","/usr/include/x86_64-linux-gnu/qt6/QtCore/6.8.2/QtCore/private"}
```

---

### FreeBSD (native)

The private headers are already installed with `qt6-base`.

---

### Linux (native)

#### Debian-based distributions

```bash
sudo apt install qt6-base-private-dev
```

#### Fedora-based distributions

```bash
sudo dnf install qt6-qtbase-private-devel
```

#### Arch-based distributions

The private headers are already installed with `qt6-base`.

#### openSUSE-based distributions

```bash
sudo zypper install qt6-core-private-devel
```

#### Flatpak-based environments

The KDE Software Development Kit includes the Qt private headers by default.

---

### macOS (native)

When installed via [Homebrew](https://brew.sh/), the private headers are already installed as well.

---

### Windows (native)

When installed via the official Qt installer, the private headers are already installed as well.
