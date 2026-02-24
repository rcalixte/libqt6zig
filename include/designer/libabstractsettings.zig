const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html)
pub const qdesignersettingsinterface = struct {
    /// New constructs a new QDesignerSettingsInterface object.
    ///
    pub fn New() QtC.QDesignerSettingsInterface {
        return qtc.QDesignerSettingsInterface_new();
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn BeginGroup(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QDesignerSettingsInterface_BeginGroup(@ptrCast(self), prefix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerSettingsInterface, prefix: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnBeginGroup(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnBeginGroup(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperBeginGroup` instead
    ///
    pub const QBaseBeginGroup = SuperBeginGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SuperBeginGroup(self: ?*anyopaque, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QDesignerSettingsInterface_SuperBeginGroup(@ptrCast(self), prefix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    pub fn EndGroup(self: ?*anyopaque) void {
        qtc.QDesignerSettingsInterface_EndGroup(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndGroup(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnEndGroup(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperEndGroup` instead
    ///
    pub const QBaseEndGroup = SuperEndGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    pub fn SuperEndGroup(self: ?*anyopaque) void {
        qtc.QDesignerSettingsInterface_SuperEndGroup(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Contains(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QDesignerSettingsInterface_Contains(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerSettingsInterface, key: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn OnContains(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) bool) void {
        qtc.QDesignerSettingsInterface_OnContains(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperContains` instead
    ///
    pub const QBaseContains = SuperContains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SuperContains(self: ?*anyopaque, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QDesignerSettingsInterface_SuperContains(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetValue(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QDesignerSettingsInterface_SetValue(@ptrCast(self), key_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerSettingsInterface, key: [*:0]const u8, value: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnSetValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnSetValue(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSetValue` instead
    ///
    pub const QBaseSetValue = SuperSetValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SuperSetValue(self: ?*anyopaque, key: []const u8, value: ?*anyopaque) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QDesignerSettingsInterface_SuperSetValue(@ptrCast(self), key_str, @ptrCast(value));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: QtC.QVariant `
    ///
    pub fn Value(self: ?*anyopaque, key: []const u8, defaultValue: ?*anyopaque) QtC.QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QDesignerSettingsInterface_Value(@ptrCast(self), key_str, @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerSettingsInterface, key: [*:0]const u8, defaultValue: QtC.QVariant) callconv(.c) QtC.QVariant `
    ///
    pub fn OnValue(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8, ?*anyopaque) callconv(.c) QtC.QVariant) void {
        qtc.QDesignerSettingsInterface_OnValue(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperValue` instead
    ///
    pub const QBaseValue = SuperValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: QtC.QVariant `
    ///
    pub fn SuperValue(self: ?*anyopaque, key: []const u8, defaultValue: ?*anyopaque) QtC.QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QDesignerSettingsInterface_SuperValue(@ptrCast(self), key_str, @ptrCast(defaultValue));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Remove(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QDesignerSettingsInterface_Remove(@ptrCast(self), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QtC.QDesignerSettingsInterface, key: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnRemove(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnRemove(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRemove` instead
    ///
    pub const QBaseRemove = SuperRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SuperRemove(self: ?*anyopaque, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QDesignerSettingsInterface_SuperRemove(@ptrCast(self), key_str);
    }
    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#dtor.QDesignerSettingsInterface)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.QDesignerSettingsInterface `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.QDesignerSettingsInterface_Delete(@ptrCast(self));
    }
};
