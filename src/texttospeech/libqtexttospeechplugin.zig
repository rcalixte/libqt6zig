const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html)
pub const QTextToSpeechPlugin = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QTextToSpeechPlugin,

    pub const _is_QTextToSpeechPlugin = {};

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechPlugin `
    ///
    /// ` param1: QTextToSpeechPlugin `
    ///
    pub fn OperatorAssign(self: QTextToSpeechPlugin, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextToSpeechPlugin;
        qtc.QTextToSpeechPlugin_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html#dtor.QTextToSpeechPlugin)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextToSpeechPlugin `
    ///
    pub fn Delete(self: QTextToSpeechPlugin) void {
        qtc.QTextToSpeechPlugin_Delete(@ptrCast(self.ptr));
    }
};
