const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtquickcontrols2global-h.html)
pub const qtquickcontrols2global_h = extern struct {
    /// ### DEPRECATED: Use `qmlRegisterTypes_QtQuick_Controls` instead
    ///
    pub const QmlRegisterTypes_QtQuick_Controls = qmlRegisterTypes_QtQuick_Controls;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtquickcontrols2global-h.html#qml_register_types_QtQuick_Controls)
    ///
    pub fn qmlRegisterTypes_QtQuick_Controls() void {
        qtc.qtquickcontrols2global_h_QmlRegisterTypes_QtQuick_Controls();
    }
};
