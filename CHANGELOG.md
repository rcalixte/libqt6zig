
### 6.8.2 rev35 (28 September 2025)

* uic-zig: Add support for KDE Frameworks (#69)
* Remove additional linker errors (#68)
* Remove additional linker errors (#67)

### 6.8.2 rev34 (27 September 2025)

* Add [Qt OpenGL](https://doc.qt.io/qt-6/qtopengl-index.html) (#66)
* Unblock `QsciScintillaBase::inputMethodQuery` (#65)
* Remove methods causing linker errors (#64)

### 6.8.2 rev33 (22 September 2025)

* **BREAKING CHANGE:** Remove `KGradientSelector::setStops` (#63)
  * This is generating an undefined symbol error when linked during compilation.

### 6.8.2 rev32 (21 September 2025)

* Add [KNewStuff](https://api.kde.org/knewstuff-index.html) and address cross-library duplicate header names (#62)

### 6.8.2 rev31 (19 September 2025)

* Add [Attica](https://api.kde.org/attica-index.html) and support runtime-known function pointers (#61)

### 6.8.2 rev30 (14 September 2025)

* Add [KJobWidgets](https://api.kde.org/kjobwidgets-index.html), [KService](https://api.kde.org/kservice-index.html), [Solid](https://api.kde.org/solid-index.html), [KNotifications](https://api.kde.org/knotifications-index.html), [KWindowSystem](https://api.kde.org/kwindowsystem-index.html), and [KIO](https://api.kde.org/kio-index.html) (#60)

### 6.8.2 rev29 (13 September 2025)

* Update QList-based callbacks (#59)

### 6.8.2 rev28 (10 September 2025)

* Add [KBookmarks](https://api.kde.org/kbookmarks-index.html) (#58)
* Update documentation URLs (#57)
* Fix documentation URLs (#56)

### 6.8.2 rev27 (6 September 2025)

* Add a build option for passing extra paths

### 6.8.2 rev26 (5 September 2025)

* Add [Qt XML](https://doc.qt.io/qt-6/qtxml-index.html), [KGlobalAccel](https://api.kde.org/kglobalaccel-index.html), and [KXmlGui](https://api.kde.org/kxmlgui-index.html) (#54)

### 6.8.2 rev25 (4 September 2025)

* Add [Qt D-Bus](https://doc.qt.io/qt-6/qtdbus-index.html) (#53)

### 6.8.2 rev24 (3 September 2025)

* Add [KIconThemes](https://api.kde.org/kiconthemes-index.html) (#52)

### 6.8.2 rev23 (2 September 2025)

* Add [KTextWidgets](https://api.kde.org/ktextwidgets-index.html) (#51)

### 6.8.2 rev22 (1 September 2025)

* Add [KCompletion](https://api.kde.org/kcompletion-index.html) (#50)

### 6.8.2 rev21 (31 August 2025)

* Add [KPlotting](https://api.kde.org/kplotting-index.html) (#49)

### 6.8.2 rev20 (30 August 2025)

* Add [KColorScheme](https://api.kde.org/kcolorscheme-index.html) and [KConfigWidgets](https://api.kde.org/kconfigwidgets-index.html) (#45)

### 6.8.2 rev19 (29 August 2025)

* **BREAKING CHANGE:** Use more precise flag types and fix enum imports (#44)

### 6.8.2 rev18 (29 August 2025)

* **BREAKING CHANGE:** Update to Zig 0.15
* Ensure proper callback structure (#43)

### 6.8.2 rev17 (28 August 2025)

* Add [Sonnet](https://api.kde.org/sonnet-index.html) (#42)
* Simplify override structure (#41)
* Fix method mismatch in C ABI (#40)

### 6.8.2 rev16 (27 August 2025)

* Add [KGuiAddons](https://api.kde.org/kguiaddons-index.html) (#38)

### 6.8.2 rev15 (26 August 2025)

* Add [KCoreAddons](https://api.kde.org/kcoreaddons-index.html) (#37)

### 6.8.2 rev14 (25 August 2025)

* Add [KItemViews](https://api.kde.org/kitemviews-index.html) (#36)

### 6.8.2 rev13 (24 August 2025)

* Add [KConfig](https://api.kde.org/kconfig-index.html) and [KWidgetsAddons](https://api.kde.org/kwidgetsaddons-index.html) (#34)
* Add support for public variables (#33)

### 6.8.2 rev12 (23 August 2025)

* Add [QTermWidget](https://github.com/lxqt/qtermwidget) (#32)

### 6.8.2 rev11 (22 August 2025)

* **BREAKING CHANGE:** Fix some callback types (#31)
* Add [KI18n](https://api.kde.org/ki18n-index.html) (#30)

### 6.8.2 rev10 (20 August 2025)

* **BREAKING CHANGE:** Add [KCodecs](https://api.kde.org/kcodecs-index.html) and fix string-based slots (#29)

### 6.8.2 rev9 (19 August 2025)

* Add [Qt SQL](https://doc.qt.io/qt-6/qtsql-index.html) (#28)

### 6.8.2 rev8 (18 August 2025)

* **BREAKING CHANGE:** Add specific enum type resolution (#27)
* Fix enum handling in certain conditions, memory allocations, and scoped class cases (#26)

### 6.8.2 rev7 (15 August 2025)

* **BREAKING CHANGE:** Switch to per-library options in some cases

### 6.8.2 rev6 (14 August 2025)

* **BREAKING CHANGE:** Update documentation comments and certain enum conditions (#25)
* Optimize external command processing by batching files (#24)

### 6.8.2 rev5 (3 August 2025)

* Add qrc-zig and uic-zig for use with the Qt Resource System (#23)
* Replace brute force resolutions with data structures (#22)
* Update vtable information in documentation comments (#21)
* Add library support for Homebrew on macOS

### 6.8.2 rev4 (18 July 2025)

* **BREAKING CHANGE:** Update container type invocations, unblock QVariantList, and update some pointer types (#20)
* Update documentation URL for operator methods (#19)

### 6.8.2 rev3 (15 July 2025)

* Add projection for iterator types (#18)

### 6.8.2 rev2 (14 July 2025)

* **BREAKING CHANGE:** Remove non-digit method overloads (#17)

### 6.8.2 rev1 (6 July 2025)

* **BREAKING CHANGE:** Update to Qt 6.8 base (#16)

### 6.4.2 rev13 (3 July 2025)

* Fix formatting bug (#15)

### 6.4.2 rev12 (16 June 2025)

* Allow virtual classes for QAccessibleObject and QAccessibleWidget (#13)

### 6.4.2 rev11 (14 June 2025)

* Leverage consistent constness in internal bindings and wrappers (#12)

### 6.4.2 rev10 (31 May 2025)

* Breaking changes/improvements (#11)
  * Add private signals
  * Use consistent constness
  * Revamp virtual subclass design
  * Improve documentation URLs and default panic messages
  * Update C ABI imports and definitions
  * Remove dead code
  * See examples for user-facing API changes

### 6.4.2 rev9 (3 May 2025)

* Fix projection of QAnyStringView (#10)

### 6.4.2 rev8 (20 April 2025)

* Add [Qt PDF](https://doc.qt.io/qt-6/qtpdf-index.html) (#9)

### 6.4.2 rev7 (16 April 2025)

* **BREAKING CHANGE:** Fix C import structure (#8)

### 6.4.2 rev6 (14 April 2025)

* Revamp attempt at Windows support

### 6.4.2 rev5 (11 April 2025)

* Qt 6.9: Return type for QObjectData::dynamicMetaObject is now const (#7)

### 6.4.2 rev4 (31 March 2025)

* **BREAKING CHANGE:** Mark Qt Charts restricted (#6)

### 6.4.2 rev3 (30 March 2025)

* Add [Qt Charts](https://doc.qt.io/qt-6/qtcharts-index.html) (#4)

### 6.4.2 rev2 (23 March 2025)

* **BREAKING CHANGE:** Removing `QHostAddress_IsInSubnetWithSubnet` (#3)
  * This is generating an undefined symbol error when linked during compilation.

### 6.4.2 rev1 (7 March 2025)

* Initial release
