const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html)
pub const QDesignerLanguageExtension = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerLanguageExtension,

    pub const _is_QDesignerLanguageExtension = {};

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignerlanguageextension.html#dtor.QDesignerLanguageExtension)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerLanguageExtension `
    ///
    pub fn delete(self: QDesignerLanguageExtension) void {
        qtc.QDesignerLanguageExtension_Delete(@ptrCast(self.ptr));
    }
};
