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

    /// New constructs a new QDesignerSettingsInterface object.
    ///
    pub fn New() QDesignerSettingsInterface {
        return .{ .ptr = qtc.QDesignerSettingsInterface_new() };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#beginGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn BeginGroup(self: QDesignerSettingsInterface, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QDesignerSettingsInterface_BeginGroup(@ptrCast(self.ptr), prefix_str);
    }

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
    pub fn OnBeginGroup(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnBeginGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` prefix: []const u8 `
    ///
    pub fn SuperBeginGroup(self: QDesignerSettingsInterface, prefix: []const u8) void {
        const prefix_str = qtc.libqt_string{
            .len = prefix.len,
            .data = prefix.ptr,
        };
        qtc.QDesignerSettingsInterface_SuperBeginGroup(@ptrCast(self.ptr), prefix_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    pub fn EndGroup(self: QDesignerSettingsInterface) void {
        qtc.QDesignerSettingsInterface_EndGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#endGroup)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndGroup(self: QDesignerSettingsInterface, callback: *const fn () callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnEndGroup(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerSettingsInterface `
    ///
    pub fn SuperEndGroup(self: QDesignerSettingsInterface) void {
        qtc.QDesignerSettingsInterface_SuperEndGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#contains)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Contains(self: QDesignerSettingsInterface, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QDesignerSettingsInterface_Contains(@ptrCast(self.ptr), key_str);
    }

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
    pub fn OnContains(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8) callconv(.c) bool) void {
        qtc.QDesignerSettingsInterface_OnContains(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SuperContains(self: QDesignerSettingsInterface, key: []const u8) bool {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        return qtc.QDesignerSettingsInterface_SuperContains(@ptrCast(self.ptr), key_str);
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#setValue)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SetValue(self: QDesignerSettingsInterface, key: []const u8, value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerSettingsInterface_SetValue(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

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
    pub fn OnSetValue(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8, QVariant) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnSetValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: QVariant `
    ///
    pub fn SuperSetValue(self: QDesignerSettingsInterface, key: []const u8, value: anytype) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(value)._is_QVariant;
        qtc.QDesignerSettingsInterface_SuperSetValue(@ptrCast(self.ptr), key_str, @ptrCast(value.ptr));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#value)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn Value(self: QDesignerSettingsInterface, key: []const u8, defaultValue: anytype) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.QDesignerSettingsInterface_Value(@ptrCast(self.ptr), key_str, @ptrCast(defaultValue.ptr)) };
    }

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
    pub fn OnValue(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8, QVariant) callconv(.c) QVariant) void {
        qtc.QDesignerSettingsInterface_OnValue(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    /// ` defaultValue: QVariant `
    ///
    pub fn SuperValue(self: QDesignerSettingsInterface, key: []const u8, defaultValue: anytype) QVariant {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        comptime _ = @TypeOf(defaultValue)._is_QVariant;
        return .{ .ptr = qtc.QDesignerSettingsInterface_SuperValue(@ptrCast(self.ptr), key_str, @ptrCast(defaultValue.ptr)) };
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qdesignersettingsinterface.html#remove)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn Remove(self: QDesignerSettingsInterface, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QDesignerSettingsInterface_Remove(@ptrCast(self.ptr), key_str);
    }

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
    pub fn OnRemove(self: QDesignerSettingsInterface, callback: *const fn (QDesignerSettingsInterface, [*:0]const u8) callconv(.c) void) void {
        qtc.QDesignerSettingsInterface_OnRemove(@ptrCast(self.ptr), @bitCast(@intFromPtr(callback)));
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
    /// ` self: QDesignerSettingsInterface `
    ///
    /// ` key: []const u8 `
    ///
    pub fn SuperRemove(self: QDesignerSettingsInterface, key: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        qtc.QDesignerSettingsInterface_SuperRemove(@ptrCast(self.ptr), key_str);
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
    /// ` self: QDesignerSettingsInterface `
    ///
    pub fn Delete(self: QDesignerSettingsInterface) void {
        qtc.QDesignerSettingsInterface_Delete(@ptrCast(self.ptr));
    }
};
