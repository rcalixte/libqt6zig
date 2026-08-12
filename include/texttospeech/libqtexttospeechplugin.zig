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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QTextToSpeechPlugin object in C++ memory
    ///
    pub fn new() QTextToSpeechPlugin {
        return .{ .ptr = qtc.QTextToSpeechPlugin_new() };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QTextToSpeechPlugin `
    ///
    /// ` param1: QTextToSpeechPlugin `
    ///
    pub fn operatorAssign(self: QTextToSpeechPlugin, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QTextToSpeechPlugin;
        qtc.QTextToSpeechPlugin_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qtexttospeechplugin.html#dtor.QTextToSpeechPlugin)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QTextToSpeechPlugin `
    ///
    pub fn delete(self: QTextToSpeechPlugin) void {
        qtc.QTextToSpeechPlugin_Delete(@ptrCast(self.ptr));
    }
};
