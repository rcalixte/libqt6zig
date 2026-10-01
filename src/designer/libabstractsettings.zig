const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QVariant = @import("libqt6").QVariant;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html)
pub const QDesignerSettingsInterface = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QDesignerSettingsInterface,

    pub const _is_QDesignerSettingsInterface = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QDesignerSettingsInterface object in C++ memory
    ///
    pub fn new() QDesignerSettingsInterface {
        return .{ .ptr = qtc.QDesignerSettingsInterface_new() };
    }

    /// ### DEPRECATED: Use `beginGroup` instead
    ///
    pub const BeginGroup = beginGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
    ///
    /// This method must be implemented with `onBeginGroup` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn beginGroup(self: QDesignerSettingsInterface, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QDesignerSettingsInterface_BeginGroup(@ptrCast(self.ptr), prefix_str);
    }

    /// ### DEPRECATED: Use `onBeginGroup` instead
    ///
    pub const OnBeginGroup = onBeginGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QDesignerSettingsInterface, prefix: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onBeginGroup(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnBeginGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `endGroup` instead
    ///
    pub const EndGroup = endGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
    ///
    /// This method must be implemented with `onEndGroup` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    pub fn endGroup(self: QDesignerSettingsInterface) void {
        qtc.QDesignerSettingsInterface_EndGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `onEndGroup` instead
    ///
    pub const OnEndGroup = onEndGroup;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QDesignerSettingsInterface) callconv(.c) void `
    ///
    pub fn onEndGroup(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnEndGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `contains` instead
    ///
    pub const Contains = contains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
    ///
    /// This method must be implemented with `onContains` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn contains(self: QDesignerSettingsInterface, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QDesignerSettingsInterface_Contains(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `onContains` instead
    ///
    pub const OnContains = onContains;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QDesignerSettingsInterface, key: [*:0]const u8) callconv(.c) bool `
    ///
    pub fn onContains(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8) callconv(.c) bool) void {
        qtc.QDesignerSettingsInterface_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `setValue` instead
    ///
    pub const SetValue = setValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
    ///
    /// This method must be implemented with `onSetValue` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` _value: QVariant `
    ///
    pub fn setValue(self: QDesignerSettingsInterface, key: []const u8, _value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(_value)._is_QVariant;
        qtc.QDesignerSettingsInterface_SetValue(@ptrCast(self.ptr), key_str, @ptrCast(_value.ptr));
    }

    /// ### DEPRECATED: Use `onSetValue` instead
    ///
    pub const OnSetValue = onSetValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QDesignerSettingsInterface, key: [*:0]const u8, value: QVariant) callconv(.c) void `
    ///
    pub fn onSetValue(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnSetValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `value` instead
    ///
    pub const Value = value;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
    ///
    /// This method must be implemented with `onValue` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn value(self: QDesignerSettingsInterface, key: []const u8, defaultValue: anytype) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.QDesignerSettingsInterface_Value(@ptrCast(self.ptr), key_str, @ptrCast(defaultValue.ptr)) };
    }

    /// ### DEPRECATED: Use `onValue` instead
    ///
    pub const OnValue = onValue;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QDesignerSettingsInterface, key: [*:0]const u8, defaultValue: QVariant) callconv(.c) QVariant `
    ///
    /// **Warning:** Memory for the returned type of the callback is freed by the library.
    ///
    pub fn onValue(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8, QVariant) callconv(.c) QVariant) void {
        qtc.QDesignerSettingsInterface_OnValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `remove` instead
    ///
    pub const Remove = remove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
    ///
    /// This method must be implemented with `onRemove` before it can be called.
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn remove(self: QDesignerSettingsInterface, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QDesignerSettingsInterface_Remove(@ptrCast(self.ptr), key_str);
    }

    /// ### DEPRECATED: Use `onRemove` instead
    ///
    pub const OnRemove = onRemove;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn (self: QDesignerSettingsInterface, key: [*:0]const u8) callconv(.c) void `
    ///
    pub fn onRemove(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnRemove(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#dtor.QDesignerSettingsInterface)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    pub fn delete(self: QDesignerSettingsInterface) void {
        qtc.QDesignerSettingsInterface_Delete(@ptrCast(self.ptr));
    }
};
