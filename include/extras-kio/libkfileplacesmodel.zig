const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const kfileplacesmodel_enums = enums;
const qabstractitemmodel_enums = @import("../libqabstractitemmodel.zig").enums;
const qnamespace_enums = @import("../libqnamespace.zig").enums;
const qobjectdefs_enums = @import("../libqobjectdefs.zig").enums;
const solidnamespace_enums = @import("../extras-solid/libsolidnamespace.zig").enums;
const std = @import("std");
const arraymap_i32_qtcqvariant = std.AutoArrayHashMapUnmanaged(i32, QtC.QVariant);
const map_i32_u8 = std.AutoHashMapUnmanaged(i32, []u8);

/// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html)
pub const kfileplacesmodel = struct {
    /// New constructs a new KFilePlacesModel object.
    ///
    pub fn New() QtC.KFilePlacesModel {
        return qtc.KFilePlacesModel_new();
    }

    /// New2 constructs a new KFilePlacesModel object.
    ///
    /// ## Parameter(s):
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn New2(parent: ?*anyopaque) QtC.KFilePlacesModel {
        return qtc.KFilePlacesModel_new2(@ptrCast(parent));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn MetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KFilePlacesModel_MetaObject(@ptrCast(self));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QMetaObject `
    ///
    pub fn OnMetaObject(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QMetaObject) void {
        qtc.KFilePlacesModel_OnMetaObject(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetaObject` instead
    ///
    pub const QBaseMetaObject = SuperMetaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperMetaObject(self: ?*anyopaque) QtC.QMetaObject {
        return qtc.KFilePlacesModel_SuperMetaObject(@ptrCast(self));
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn Metacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFilePlacesModel_Metacast(@ptrCast(self), param1_Cstring);
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, param1: [*:0]const u8) callconv(.c) ?*anyopaque `
    ///
    pub fn OnMetacast(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) ?*anyopaque) void {
        qtc.KFilePlacesModel_OnMetacast(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacast` instead
    ///
    pub const QBaseMetacast = SuperMetacast;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` param1: [:0]const u8 `
    ///
    pub fn SuperMetacast(self: ?*anyopaque, param1: [:0]const u8) ?*anyopaque {
        const param1_Cstring = param1.ptr;
        return qtc.KFilePlacesModel_SuperMetacast(@ptrCast(self), param1_Cstring);
    }

    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn Metacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFilePlacesModel_Metacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, param1: qobjectdefs_enums.Call, param2: i32, param3: *?*anyopaque) callconv(.c) i32 `
    ///
    pub fn OnMetacall(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, *?*anyopaque) callconv(.c) i32) void {
        qtc.KFilePlacesModel_OnMetacall(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMetacall` instead
    ///
    pub const QBaseMetacall = SuperMetacall;

    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` param1: qobjectdefs_enums.Call `
    ///
    /// ` param2: i32 `
    ///
    /// ` param3: *?*anyopaque `
    ///
    pub fn SuperMetacall(self: ?*anyopaque, param1: i32, param2: i32, param3: *?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SuperMetacall(@ptrCast(self), @bitCast(param1), @bitCast(param2), @ptrCast(param3));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr(s: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        var _str = qtc.QObject_Tr(s_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesmodel.Tr: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Url(self: ?*anyopaque, index: ?*anyopaque) QtC.QUrl {
        return qtc.KFilePlacesModel_Url(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setupNeeded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SetupNeeded(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SetupNeeded(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isTeardownAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsTeardownAllowed(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_IsTeardownAllowed(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isEjectAllowed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsEjectAllowed(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_IsEjectAllowed(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isTeardownOverlayRecommended)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsTeardownOverlayRecommended(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_IsTeardownOverlayRecommended(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#deviceAccessibility)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` kfileplacesmodel_enums.DeviceAccessibility `
    ///
    pub fn DeviceAccessibility(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_DeviceAccessibility(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Icon(self: ?*anyopaque, index: ?*anyopaque) QtC.QIcon {
        return qtc.KFilePlacesModel_Icon(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KFilePlacesModel_Text(@ptrCast(self), @ptrCast(index));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesmodel.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsHidden(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_IsHidden(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isGroupHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` typeVal: kfileplacesmodel_enums.GroupType `
    ///
    pub fn IsGroupHidden(self: ?*anyopaque, typeVal: i32) bool {
        return qtc.KFilePlacesModel_IsGroupHidden(@ptrCast(self), @bitCast(typeVal));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isGroupHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsGroupHidden2(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_IsGroupHidden2(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#isDevice)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn IsDevice(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_IsDevice(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#deviceForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn DeviceForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.Solid__Device {
        return qtc.KFilePlacesModel_DeviceForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#bookmarkForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn BookmarkForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.KBookmark {
        return qtc.KFilePlacesModel_BookmarkForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#bookmarkForUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` searchUrl: QtC.QUrl `
    ///
    pub fn BookmarkForUrl(self: ?*anyopaque, searchUrl: ?*anyopaque) QtC.KBookmark {
        return qtc.KFilePlacesModel_BookmarkForUrl(@ptrCast(self), @ptrCast(searchUrl));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#groupType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` kfileplacesmodel_enums.GroupType `
    ///
    pub fn GroupType(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_GroupType(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#groupIndexes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` typeVal: kfileplacesmodel_enums.GroupType `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupIndexes(self: ?*anyopaque, typeVal: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KFilePlacesModel_GroupIndexes(@ptrCast(self), @bitCast(typeVal));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("kfileplacesmodel.GroupIndexes: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#teardownActionForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn TeardownActionForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAction {
        return qtc.KFilePlacesModel_TeardownActionForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#ejectActionForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn EjectActionForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAction {
        return qtc.KFilePlacesModel_EjectActionForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#partitionActionForIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn PartitionActionForIndex(self: ?*anyopaque, index: ?*anyopaque) QtC.QAction {
        return qtc.KFilePlacesModel_PartitionActionForIndex(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#requestTeardown)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn RequestTeardown(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KFilePlacesModel_RequestTeardown(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#requestEject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn RequestEject(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KFilePlacesModel_RequestEject(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#requestSetup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn RequestSetup(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KFilePlacesModel_RequestSetup(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#addPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn AddPlace(self: ?*anyopaque, text: []const u8, url: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFilePlacesModel_AddPlace(@ptrCast(self), text_str, @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#addPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` appName: []const u8 `
    ///
    /// ` after: QtC.QModelIndex `
    ///
    pub fn AddPlace2(self: ?*anyopaque, text: []const u8, url: ?*anyopaque, iconName: []const u8, appName: []const u8, after: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const appName_str = qtc.libqt_string{
            .len = appName.len,
            .data = appName.ptr,
        };
        qtc.KFilePlacesModel_AddPlace2(@ptrCast(self), text_str, @ptrCast(url), iconName_str, appName_str, @ptrCast(after));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#editPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn EditPlace(self: ?*anyopaque, index: ?*anyopaque, text: []const u8, url: ?*anyopaque) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        qtc.KFilePlacesModel_EditPlace(@ptrCast(self), @ptrCast(index), text_str, @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#removePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn RemovePlace(self: ?*anyopaque, index: ?*anyopaque) void {
        qtc.KFilePlacesModel_RemovePlace(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setPlaceHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetPlaceHidden(self: ?*anyopaque, index: ?*anyopaque, hidden: bool) void {
        qtc.KFilePlacesModel_SetPlaceHidden(@ptrCast(self), @ptrCast(index), hidden);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setGroupHidden)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` typeVal: kfileplacesmodel_enums.GroupType `
    ///
    /// ` hidden: bool `
    ///
    pub fn SetGroupHidden(self: ?*anyopaque, typeVal: i32, hidden: bool) void {
        qtc.KFilePlacesModel_SetGroupHidden(@ptrCast(self), @bitCast(typeVal), hidden);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#movePlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` itemRow: i32 `
    ///
    /// ` row: i32 `
    ///
    pub fn MovePlace(self: ?*anyopaque, itemRow: i32, row: i32) bool {
        return qtc.KFilePlacesModel_MovePlace(@ptrCast(self), @bitCast(itemRow), @bitCast(row));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#hiddenCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn HiddenCount(self: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_HiddenCount(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#data)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn Data(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.KFilePlacesModel_Data(@ptrCast(self), @ptrCast(index), @bitCast(role));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#data)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex, role: i32) callconv(.c) QtC.QVariant `
    ///
    pub fn OnData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32) callconv(.c) QtC.QVariant) void {
        qtc.KFilePlacesModel_OnData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperData` instead
    ///
    pub const QBaseData = SuperData;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#data)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperData(self: ?*anyopaque, index: ?*anyopaque, role: i32) QtC.QVariant {
        return qtc.KFilePlacesModel_SuperData(@ptrCast(self), @ptrCast(index), @bitCast(role));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#index)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn Index(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.KFilePlacesModel_Index(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#index)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KFilePlacesModel_OnIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperIndex` instead
    ///
    pub const QBaseIndex = SuperIndex;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#index)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperIndex(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) QtC.QModelIndex {
        return qtc.KFilePlacesModel_SuperIndex(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#parent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` child: QtC.QModelIndex `
    ///
    pub fn Parent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.KFilePlacesModel_Parent(@ptrCast(self), @ptrCast(child));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#parent)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, child: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnParent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KFilePlacesModel_OnParent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperParent` instead
    ///
    pub const QBaseParent = SuperParent;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#parent)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` child: QtC.QModelIndex `
    ///
    pub fn SuperParent(self: ?*anyopaque, child: ?*anyopaque) QtC.QModelIndex {
        return qtc.KFilePlacesModel_SuperParent(@ptrCast(self), @ptrCast(child));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#roleNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn RoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KFilePlacesModel_RoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kfileplacesmodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("kfileplacesmodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#roleNames)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of map_i32_u8 `
    ///
    pub fn OnRoleNames(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_map) void {
        qtc.KFilePlacesModel_OnRoleNames(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRoleNames` instead
    ///
    pub const QBaseRoleNames = SuperRoleNames;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#roleNames)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperRoleNames(self: ?*anyopaque, allocator: std.mem.Allocator) map_i32_u8 {
        const _map: qtc.libqt_map = qtc.KFilePlacesModel_SuperRoleNames(@ptrCast(self));
        var _ret: map_i32_u8 = .empty;
        defer {
            const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
            for (0.._map.len) |i| {
                qtc.libqt_free(_values[i].data);
            }
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]qtc.libqt_string = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            const _value_slice = allocator.alloc(u8, _value.len) catch @panic("kfileplacesmodel.RoleNames: Memory allocation failed");
            @memcpy(_value_slice, _value.data);
            _ret.put(allocator, _key, _value_slice) catch @panic("kfileplacesmodel.RoleNames: Memory allocation failed");
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#rowCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_RowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#rowCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnRowCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KFilePlacesModel_OnRowCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperRowCount` instead
    ///
    pub const QBaseRowCount = SuperRowCount;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#rowCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperRowCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SuperRowCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#columnCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn ColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_ColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#columnCount)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnColumnCount(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KFilePlacesModel_OnColumnCount(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperColumnCount` instead
    ///
    pub const QBaseColumnCount = SuperColumnCount;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#columnCount)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperColumnCount(self: ?*anyopaque, parent: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SuperColumnCount(@ptrCast(self), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#closestItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn ClosestItem(self: ?*anyopaque, url: ?*anyopaque) QtC.QModelIndex {
        return qtc.KFilePlacesModel_ClosestItem(@ptrCast(self), @ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedDropActions)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SupportedDropActions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedDropActions)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDropActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilePlacesModel_OnSupportedDropActions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperSupportedDropActions` instead
    ///
    pub const QBaseSupportedDropActions = SuperSupportedDropActions;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedDropActions)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDropActions(self: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SuperSupportedDropActions(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn Flags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_Flags(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#flags)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex) callconv(.c) i32 `
    ///
    pub fn OnFlags(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) i32) void {
        qtc.KFilePlacesModel_OnFlags(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperFlags` instead
    ///
    pub const QBaseFlags = SuperFlags;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#flags)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.ItemFlag `
    ///
    pub fn SuperFlags(self: ?*anyopaque, index: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SuperFlags(@ptrCast(self), @ptrCast(index));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFilePlacesModel_MimeTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfileplacesmodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfileplacesmodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeTypes)
    ///
    /// Allows for overriding the related default method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8 `
    ///
    pub fn OnMimeTypes(self: ?*anyopaque, callback: *const fn () callconv(.c) ?[*:null]?[*:0]const u8) void {
        qtc.KFilePlacesModel_OnMimeTypes(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimeTypes` instead
    ///
    pub const QBaseMimeTypes = SuperMimeTypes;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeTypes)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMimeTypes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFilePlacesModel_SuperMimeTypes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfileplacesmodel.MimeTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfileplacesmodel.MimeTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    pub fn MimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.KFilePlacesModel_MimeData(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, indexes: qtc.libqt_list ([]QtC.QModelIndex)) callconv(.c) QtC.QMimeData `
    ///
    pub fn OnMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) QtC.QMimeData) void {
        qtc.KFilePlacesModel_OnMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperMimeData` instead
    ///
    pub const QBaseMimeData = SuperMimeData;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#mimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    pub fn SuperMimeData(self: ?*anyopaque, indexes: []QtC.QModelIndex) QtC.QMimeData {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        return qtc.KFilePlacesModel_SuperMimeData(@ptrCast(self), indexes_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#dropMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn DropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_DropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#dropMimeData)
    ///
    /// Allows for overriding the related default method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnDropMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `SuperDropMimeData` instead
    ///
    pub const QBaseDropMimeData = SuperDropMimeData;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#dropMimeData)
    ///
    /// Base class method implementation
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperDropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#refresh)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn Refresh(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_Refresh(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#convertedUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` url: QtC.QUrl `
    ///
    pub fn ConvertedUrl(url: ?*anyopaque) QtC.QUrl {
        return qtc.KFilePlacesModel_ConvertedUrl(@ptrCast(url));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setSupportedSchemes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` schemes: []const []const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetSupportedSchemes(self: ?*anyopaque, schemes: []const []const u8, allocator: std.mem.Allocator) void {
        const schemes_arr = allocator.alloc(qtc.libqt_string, schemes.len) catch @panic("kfileplacesmodel.SetSupportedSchemes: Memory allocation failed");
        defer allocator.free(schemes_arr);
        for (schemes, 0..schemes.len) |item, i| {
            schemes_arr[i] = .{
                .len = item.len,
                .data = item.ptr,
            };
        }
        const schemes_list = qtc.libqt_list{
            .len = schemes.len,
            .data = schemes_arr.ptr,
        };
        qtc.KFilePlacesModel_SetSupportedSchemes(@ptrCast(self), schemes_list);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedSchemes)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SupportedSchemes(self: ?*anyopaque, allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KFilePlacesModel_SupportedSchemes(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kfileplacesmodel.SupportedSchemes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfileplacesmodel.SupportedSchemes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#errorMessage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` message: []const u8 `
    ///
    pub fn ErrorMessage(self: ?*anyopaque, message: []const u8) void {
        const message_str = qtc.libqt_string{
            .len = message.len,
            .data = message.ptr,
        };
        qtc.KFilePlacesModel_ErrorMessage(@ptrCast(self), message_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#errorMessage)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, message: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnErrorMessage(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.KFilePlacesModel_Connect_ErrorMessage(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setupDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` success: bool `
    ///
    pub fn SetupDone(self: ?*anyopaque, index: ?*anyopaque, success: bool) void {
        qtc.KFilePlacesModel_SetupDone(@ptrCast(self), @ptrCast(index), success);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#setupDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex, success: bool) callconv(.c) void `
    ///
    pub fn OnSetupDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, bool) callconv(.c) void) void {
        qtc.KFilePlacesModel_Connect_SetupDone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#teardownDone)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` errorVal: solidnamespace_enums.ErrorType `
    ///
    /// ` errorData: QtC.QVariant `
    ///
    pub fn TeardownDone(self: ?*anyopaque, index: ?*anyopaque, errorVal: i32, errorData: ?*anyopaque) void {
        qtc.KFilePlacesModel_TeardownDone(@ptrCast(self), @ptrCast(index), @bitCast(errorVal), @ptrCast(errorData));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#teardownDone)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex, errorVal: solidnamespace_enums.ErrorType, errorData: QtC.QVariant) callconv(.c) void `
    ///
    pub fn OnTeardownDone(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_Connect_TeardownDone(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#groupHiddenChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` group: kfileplacesmodel_enums.GroupType `
    ///
    /// ` hidden: bool `
    ///
    pub fn GroupHiddenChanged(self: ?*anyopaque, group: i32, hidden: bool) void {
        qtc.KFilePlacesModel_GroupHiddenChanged(@ptrCast(self), @bitCast(group), hidden);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#groupHiddenChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, group: kfileplacesmodel_enums.GroupType, hidden: bool) callconv(.c) void `
    ///
    pub fn OnGroupHiddenChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, bool) callconv(.c) void) void {
        qtc.KFilePlacesModel_Connect_GroupHiddenChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#reloaded)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn Reloaded(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_Reloaded(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#reloaded)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel) callconv(.c) void `
    ///
    pub fn OnReloaded(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_Connect_Reloaded(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedSchemesChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SupportedSchemesChanged(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SupportedSchemesChanged(@ptrCast(self));
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#supportedSchemesChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel) callconv(.c) void `
    ///
    pub fn OnSupportedSchemesChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_Connect_SupportedSchemesChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr2(s: [:0]const u8, c: [:0]const u8, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr2(s_Cstring, c_Cstring);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesmodel.Tr2: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#tr)
    ///
    /// ## Parameter(s):
    ///
    /// ` s: [:0]const u8 `
    ///
    /// ` c: [:0]const u8 `
    ///
    /// ` n: i32 `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Tr3(s: [:0]const u8, c: [:0]const u8, n: i32, allocator: std.mem.Allocator) []const u8 {
        const s_Cstring = s.ptr;
        const c_Cstring = c.ptr;
        var _str = qtc.QObject_Tr3(s_Cstring, c_Cstring, @bitCast(n));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesmodel.Tr3: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#addPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn AddPlace3(self: ?*anyopaque, text: []const u8, url: ?*anyopaque, iconName: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KFilePlacesModel_AddPlace3(@ptrCast(self), text_str, @ptrCast(url), iconName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#addPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` appName: []const u8 `
    ///
    pub fn AddPlace4(self: ?*anyopaque, text: []const u8, url: ?*anyopaque, iconName: []const u8, appName: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const appName_str = qtc.libqt_string{
            .len = appName.len,
            .data = appName.ptr,
        };
        qtc.KFilePlacesModel_AddPlace4(@ptrCast(self), text_str, @ptrCast(url), iconName_str, appName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#editPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` iconName: []const u8 `
    ///
    pub fn EditPlace4(self: ?*anyopaque, index: ?*anyopaque, text: []const u8, url: ?*anyopaque, iconName: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        qtc.KFilePlacesModel_EditPlace4(@ptrCast(self), @ptrCast(index), text_str, @ptrCast(url), iconName_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#editPlace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QtC.QUrl `
    ///
    /// ` iconName: []const u8 `
    ///
    /// ` appName: []const u8 `
    ///
    pub fn EditPlace5(self: ?*anyopaque, index: ?*anyopaque, text: []const u8, url: ?*anyopaque, iconName: []const u8, appName: []const u8) void {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        const iconName_str = qtc.libqt_string{
            .len = iconName.len,
            .data = iconName.ptr,
        };
        const appName_str = qtc.libqt_string{
            .len = appName.len,
            .data = appName.ptr,
        };
        qtc.KFilePlacesModel_EditPlace5(@ptrCast(self), @ptrCast(index), text_str, @ptrCast(url), iconName_str, appName_str);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn HasIndex(self: ?*anyopaque, row: i32, column: i32) bool {
        return qtc.QAbstractItemModel_HasIndex(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    pub fn InsertRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_InsertRow(@ptrCast(self), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    pub fn InsertColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_InsertColumn(@ptrCast(self), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    pub fn RemoveRow(self: ?*anyopaque, row: i32) bool {
        return qtc.QAbstractItemModel_RemoveRow(@ptrCast(self), @bitCast(row));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    pub fn RemoveColumn(self: ?*anyopaque, column: i32) bool {
        return qtc.QAbstractItemModel_RemoveColumn(@ptrCast(self), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRow(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveRow(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceRow), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumn(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.QAbstractItemModel_MoveColumn(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceColumn), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn CheckIndex(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_CheckIndex(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    pub fn DataChanged(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque) void {
        qtc.QAbstractItemModel_DataChanged(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn HeaderDataChanged(self: ?*anyopaque, orientation: i32, first: i32, last: i32) void {
        qtc.QAbstractItemModel_HeaderDataChanged(@ptrCast(self), @bitCast(orientation), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerDataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, orientation: qnamespace_enums.Orientation, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnHeaderDataChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_HeaderDataChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn LayoutChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel) callconv(.c) void `
    ///
    pub fn OnLayoutChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn LayoutAboutToBeChanged(self: ?*anyopaque) void {
        qtc.QAbstractItemModel_LayoutAboutToBeChanged(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn HasIndex3(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_HasIndex3(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertRow2(@ptrCast(self), @bitCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_InsertColumn2(@ptrCast(self), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRow)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveRow2(self: ?*anyopaque, row: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveRow2(@ptrCast(self), @bitCast(row), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumn)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveColumn2(self: ?*anyopaque, column: i32, parent: ?*anyopaque) bool {
        return qtc.QAbstractItemModel_RemoveColumn2(@ptrCast(self), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#checkIndex)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` options: flag of qabstractitemmodel_enums.CheckIndexOption `
    ///
    pub fn CheckIndex2(self: ?*anyopaque, index: ?*anyopaque, options: i32) bool {
        return qtc.QAbstractItemModel_CheckIndex2(@ptrCast(self), @ptrCast(index), @bitCast(options));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` topLeft: QtC.QModelIndex `
    ///
    /// ` bottomRight: QtC.QModelIndex `
    ///
    /// ` roles: []i32 `
    ///
    pub fn DataChanged3(self: ?*anyopaque, topLeft: ?*anyopaque, bottomRight: ?*anyopaque, roles: []i32) void {
        const roles_list = qtc.libqt_list{
            .len = roles.len,
            .data = roles.ptr,
        };
        qtc.QAbstractItemModel_DataChanged3(@ptrCast(self), @ptrCast(topLeft), @ptrCast(bottomRight), roles_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#dataChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, topLeft: QtC.QModelIndex, bottomRight: QtC.QModelIndex, roles: qtc.libqt_list ([]i32)) callconv(.c) void `
    ///
    pub fn OnDataChanged3(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_DataChanged3(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    pub fn LayoutChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutChanged2(@ptrCast(self), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutChanged2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    pub fn LayoutAboutToBeChanged1(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged1(@ptrCast(self), parents_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex)) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged1(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parents: []QtC.QPersistentModelIndex `
    ///
    /// ` hint: qabstractitemmodel_enums.LayoutChangeHint `
    ///
    pub fn LayoutAboutToBeChanged2(self: ?*anyopaque, parents: []QtC.QPersistentModelIndex, hint: i32) void {
        const parents_list = qtc.libqt_list{
            .len = parents.len,
            .data = @ptrCast(parents.ptr),
        };
        qtc.QAbstractItemModel_LayoutAboutToBeChanged2(@ptrCast(self), parents_list, @bitCast(hint));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#layoutAboutToBeChanged)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parents: qtc.libqt_list ([]QtC.QPersistentModelIndex), hint: qabstractitemmodel_enums.LayoutChangeHint) callconv(.c) void `
    ///
    pub fn OnLayoutAboutToBeChanged2(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_LayoutAboutToBeChanged2(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ObjectName(self: ?*anyopaque, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.QObject_ObjectName(@ptrCast(self));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kfileplacesmodel.ObjectName: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setObjectName)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` name: []const u8 `
    ///
    pub fn SetObjectName(self: ?*anyopaque, name: []const u8) void {
        qtc.QObject_SetObjectName(@ptrCast(self), name.ptr);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWidgetType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn IsWidgetType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWidgetType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isWindowType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn IsWindowType(self: ?*anyopaque) bool {
        return qtc.QObject_IsWindowType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isQuickItemType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn IsQuickItemType(self: ?*anyopaque) bool {
        return qtc.QObject_IsQuickItemType(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#signalsBlocked)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SignalsBlocked(self: ?*anyopaque) bool {
        return qtc.QObject_SignalsBlocked(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#blockSignals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` b: bool `
    ///
    pub fn BlockSignals(self: ?*anyopaque, b: bool) bool {
        return qtc.QObject_BlockSignals(@ptrCast(self), b);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#thread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn Thread(self: ?*anyopaque) QtC.QThread {
        return qtc.QObject_Thread(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#moveToThread)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` thread: QtC.QThread `
    ///
    pub fn MoveToThread(self: ?*anyopaque, thread: ?*anyopaque) bool {
        return qtc.QObject_MoveToThread(@ptrCast(self), @ptrCast(thread));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` interval: i32 `
    ///
    pub fn StartTimer(self: ?*anyopaque, interval: i32) i32 {
        return qtc.QObject_StartTimer(@ptrCast(self), @bitCast(interval));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    pub fn StartTimer2(self: ?*anyopaque, time: i64) i32 {
        return qtc.QObject_StartTimer2(@ptrCast(self), @bitCast(time));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` id: i32 `
    ///
    pub fn KillTimer(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#killTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` id: qnamespace_enums.TimerId `
    ///
    pub fn KillTimer2(self: ?*anyopaque, id: i32) void {
        qtc.QObject_KillTimer2(@ptrCast(self), @bitCast(id));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#children)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Children(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QObject {
        const _arr: qtc.libqt_list = qtc.QObject_Children(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QObject, _arr.len) catch @panic("kfileplacesmodel.Children: Memory allocation failed");
        const _data: [*]QtC.QObject = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QObject `
    ///
    pub fn SetParent(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.QObject_SetParent(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#installEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` filterObj: QtC.QObject `
    ///
    pub fn InstallEventFilter(self: ?*anyopaque, filterObj: ?*anyopaque) void {
        qtc.QObject_InstallEventFilter(@ptrCast(self), @ptrCast(filterObj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#removeEventFilter)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` obj: QtC.QObject `
    ///
    pub fn RemoveEventFilter(self: ?*anyopaque, obj: ?*anyopaque) void {
        qtc.QObject_RemoveEventFilter(@ptrCast(self), @ptrCast(obj));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    pub fn Connect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Connect3(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect3(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: QtC.QMetaMethod `
    ///
    pub fn Disconnect2(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, member: ?*anyopaque) bool {
        return qtc.QObject_Disconnect2(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(member));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn Disconnect3(self: ?*anyopaque) bool {
        return qtc.QObject_Disconnect3(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect4(self: ?*anyopaque, receiver: ?*anyopaque) bool {
        return qtc.QObject_Disconnect4(@ptrCast(self), @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QtC.QMetaObject__Connection `
    ///
    pub fn Disconnect5(param1: ?*anyopaque) bool {
        return qtc.QObject_Disconnect5(@ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectTree)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn DumpObjectTree(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectTree(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dumpObjectInfo)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn DumpObjectInfo(self: ?*anyopaque) void {
        qtc.QObject_DumpObjectInfo(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#setProperty)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    /// ` value: QtC.QVariant `
    ///
    pub fn SetProperty(self: ?*anyopaque, name: [:0]const u8, value: ?*anyopaque) bool {
        const name_Cstring = name.ptr;
        return qtc.QObject_SetProperty(@ptrCast(self), name_Cstring, @ptrCast(value));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#property)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` name: [:0]const u8 `
    ///
    pub fn Property(self: ?*anyopaque, name: [:0]const u8) QtC.QVariant {
        const name_Cstring = name.ptr;
        return qtc.QObject_Property(@ptrCast(self), name_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#dynamicPropertyNames)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn DynamicPropertyNames(self: ?*anyopaque, allocator: std.mem.Allocator) [][]u8 {
        const _arr: qtc.libqt_list = qtc.QObject_DynamicPropertyNames(@ptrCast(self));
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i| {
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            }
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]u8, _arr.len) catch @panic("kfileplacesmodel.DynamicPropertyNames: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kfileplacesmodel.DynamicPropertyNames: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn BindingStorage(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#bindingStorage)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn BindingStorage2(self: ?*anyopaque) QtC.QBindingStorage {
        return qtc.QObject_BindingStorage2(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn Destroyed(self: ?*anyopaque) void {
        qtc.QObject_Destroyed(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel) callconv(.c) void `
    ///
    pub fn OnDestroyed(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#inherits)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` classname: [:0]const u8 `
    ///
    pub fn Inherits(self: ?*anyopaque, classname: [:0]const u8) bool {
        const classname_Cstring = classname.ptr;
        return qtc.QObject_Inherits(@ptrCast(self), classname_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#deleteLater)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn DeleteLater(self: ?*anyopaque) void {
        qtc.QObject_DeleteLater(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` interval: i32 `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer22(self: ?*anyopaque, interval: i32, timerType: i32) i32 {
        return qtc.QObject_StartTimer22(@ptrCast(self), @bitCast(interval), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#startTimer)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` time: i64 of nanoseconds `
    ///
    /// ` timerType: qnamespace_enums.TimerType `
    ///
    pub fn StartTimer23(self: ?*anyopaque, time: i64, timerType: i32) i32 {
        return qtc.QObject_StartTimer23(@ptrCast(self), @bitCast(time), @bitCast(timerType));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` param5: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect5(sender: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8, param5: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect5(@ptrCast(sender), signal_Cstring, @ptrCast(receiver), member_Cstring, @bitCast(param5));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` method: QtC.QMetaMethod `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect52(sender: ?*anyopaque, signal: ?*anyopaque, receiver: ?*anyopaque, method: ?*anyopaque, typeVal: i32) QtC.QMetaObject__Connection {
        return qtc.QObject_Connect52(@ptrCast(sender), @ptrCast(signal), @ptrCast(receiver), @ptrCast(method), @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sender: QtC.QObject `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` member: [:0]const u8 `
    ///
    /// ` typeVal: qnamespace_enums.ConnectionType `
    ///
    pub fn Connect4(self: ?*anyopaque, sender: ?*anyopaque, signal: [:0]const u8, member: [:0]const u8, typeVal: i32) QtC.QMetaObject__Connection {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Connect4(@ptrCast(self), @ptrCast(sender), signal_Cstring, member_Cstring, @bitCast(typeVal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Disconnect1(self: ?*anyopaque, signal: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect1(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    pub fn Disconnect22(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque) bool {
        const signal_Cstring = signal.ptr;
        return qtc.QObject_Disconnect22(@ptrCast(self), signal_Cstring, @ptrCast(receiver));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect32(self: ?*anyopaque, signal: [:0]const u8, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const signal_Cstring = signal.ptr;
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect32(@ptrCast(self), signal_Cstring, @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnect)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` receiver: QtC.QObject `
    ///
    /// ` member: [:0]const u8 `
    ///
    pub fn Disconnect23(self: ?*anyopaque, receiver: ?*anyopaque, member: [:0]const u8) bool {
        const member_Cstring = member.ptr;
        return qtc.QObject_Disconnect23(@ptrCast(self), @ptrCast(receiver), member_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` param1: QtC.QObject `
    ///
    pub fn Destroyed1(self: ?*anyopaque, param1: ?*anyopaque) void {
        qtc.QObject_Destroyed1(@ptrCast(self), @ptrCast(param1));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#destroyed)
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, param1: QtC.QObject) callconv(.c) void `
    ///
    pub fn OnDestroyed1(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.QObject_Connect_Destroyed1(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QtC.QModelIndex `
    ///
    pub fn Sibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.KFilePlacesModel_Sibling(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(idx));
    }

    /// ### DEPRECATED: Use `SuperSibling` instead
    ///
    pub const QBaseSibling = SuperSibling;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` idx: QtC.QModelIndex `
    ///
    pub fn SuperSibling(self: ?*anyopaque, row: i32, column: i32, idx: ?*anyopaque) QtC.QModelIndex {
        return qtc.KFilePlacesModel_SuperSibling(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(idx));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sibling)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, row: i32, column: i32, idx: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnSibling(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KFilePlacesModel_OnSibling(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn HasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_HasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperHasChildren` instead
    ///
    pub const QBaseHasChildren = SuperHasChildren;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperHasChildren(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperHasChildren(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#hasChildren)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnHasChildren(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnHasChildren(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.KFilePlacesModel_SetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperSetData` instead
    ///
    pub const QBaseSetData = SuperSetData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetData(self: ?*anyopaque, index: ?*anyopaque, value: ?*anyopaque, role: i32) bool {
        return qtc.KFilePlacesModel_SuperSetData(@ptrCast(self), @ptrCast(index), @ptrCast(value), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex, value: QtC.QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnSetData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn HeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.KFilePlacesModel_HeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperHeaderData` instead
    ///
    pub const QBaseHeaderData = SuperHeaderData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperHeaderData(self: ?*anyopaque, section: i32, orientation: i32, role: i32) QtC.QVariant {
        return qtc.KFilePlacesModel_SuperHeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#headerData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, section: i32, orientation: qnamespace_enums.Orientation, role: i32) callconv(.c) QtC.QVariant `
    ///
    pub fn OnHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, i32) callconv(.c) QtC.QVariant) void {
        qtc.KFilePlacesModel_OnHeaderData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.KFilePlacesModel_SetHeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @ptrCast(value), @bitCast(role));
    }

    /// ### DEPRECATED: Use `SuperSetHeaderData` instead
    ///
    pub const QBaseSetHeaderData = SuperSetHeaderData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` section: i32 `
    ///
    /// ` orientation: qnamespace_enums.Orientation `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` role: i32 `
    ///
    pub fn SuperSetHeaderData(self: ?*anyopaque, section: i32, orientation: i32, value: ?*anyopaque, role: i32) bool {
        return qtc.KFilePlacesModel_SuperSetHeaderData(@ptrCast(self), @bitCast(section), @bitCast(orientation), @ptrCast(value), @bitCast(role));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setHeaderData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, section: i32, orientation: qnamespace_enums.Orientation, value: QtC.QVariant, role: i32) callconv(.c) bool `
    ///
    pub fn OnSetHeaderData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnSetHeaderData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn ItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) arraymap_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KFilePlacesModel_ItemData(@ptrCast(self), @ptrCast(index));
        var _ret: arraymap_i32_qtcqvariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, @ptrCast(_value)) catch @panic("kfileplacesmodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperItemData` instead
    ///
    pub const QBaseItemData = SuperItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperItemData(self: ?*anyopaque, index: ?*anyopaque, allocator: std.mem.Allocator) arraymap_i32_qtcqvariant {
        const _map: qtc.libqt_map = qtc.KFilePlacesModel_SuperItemData(@ptrCast(self), @ptrCast(index));
        var _ret: arraymap_i32_qtcqvariant = .empty;
        defer {
            qtc.libqt_free(_map.keys);
            qtc.libqt_free(_map.values);
        }
        const _keys: [*]i32 = @ptrCast(@alignCast(_map.keys));
        const _values: [*]QtC.QVariant = @ptrCast(@alignCast(_map.values));
        var i: usize = 0;
        while (i < _map.len) : (i += 1) {
            const _key = _keys[i];
            const _value = _values[i];
            _ret.put(allocator, _key, @ptrCast(_value)) catch @panic("kfileplacesmodel.ItemData: Memory allocation failed");
        }
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#itemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex) callconv(.c) qtc.libqt_map `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of arraymap_i32_qtcqvariant `
    ///
    pub fn OnItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) qtc.libqt_map) void {
        qtc.KFilePlacesModel_OnItemData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roles: arraymap_i32_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: arraymap_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("kfileplacesmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("kfileplacesmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.KFilePlacesModel_SetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// ### DEPRECATED: Use `SuperSetItemData` instead
    ///
    pub const QBaseSetItemData = SuperSetItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roles: arraymap_i32_qtcqvariant `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperSetItemData(self: ?*anyopaque, index: ?*anyopaque, roles: arraymap_i32_qtcqvariant, allocator: std.mem.Allocator) bool {
        const roles_count = roles.count();
        const roles_keys = allocator.alloc(i32, roles_count) catch @panic("kfileplacesmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_keys);
        const roles_values = allocator.alloc(QtC.QVariant, roles_count) catch @panic("kfileplacesmodel.SetItemData: Memory allocation failed");
        defer allocator.free(roles_values);
        var i: usize = 0;
        var roles_it = roles.iterator();
        while (roles_it.next()) |it_entry| : (i += 1) {
            const roles_key = it_entry.key_ptr.*;
            roles_keys[i] = @bitCast(roles_key);
            roles_values[i] = @ptrCast(it_entry.value_ptr.*);
        }
        const roles_map = qtc.libqt_map{
            .len = roles_count,
            .keys = @ptrCast(roles_keys.ptr),
            .values = @ptrCast(roles_values.ptr),
        };
        return qtc.KFilePlacesModel_SuperSetItemData(@ptrCast(self), @ptrCast(index), roles_map);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#setItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex, roles: qtc.libqt_map (arraymap_i32_qtcqvariant)) callconv(.c) bool `
    ///
    pub fn OnSetItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, qtc.libqt_map) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnSetItemData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn ClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_ClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// ### DEPRECATED: Use `SuperClearItemData` instead
    ///
    pub const QBaseClearItemData = SuperClearItemData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperClearItemData(self: ?*anyopaque, index: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperClearItemData(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#clearItemData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnClearItemData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnClearItemData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn CanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_CanDropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperCanDropMimeData` instead
    ///
    pub const QBaseCanDropMimeData = SuperCanDropMimeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` data: QtC.QMimeData `
    ///
    /// ` action: qnamespace_enums.DropAction `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperCanDropMimeData(self: ?*anyopaque, data: ?*anyopaque, action: i32, row: i32, column: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperCanDropMimeData(@ptrCast(self), @ptrCast(data), @bitCast(action), @bitCast(row), @bitCast(column), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canDropMimeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, data: QtC.QMimeData, action: qnamespace_enums.DropAction, row: i32, column: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanDropMimeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnCanDropMimeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SupportedDragActions(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSupportedDragActions` instead
    ///
    pub const QBaseSupportedDragActions = SuperSupportedDragActions;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ## Returns:
    ///
    /// ` flag of qnamespace_enums.DropAction `
    ///
    pub fn SuperSupportedDragActions(self: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SuperSupportedDragActions(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#supportedDragActions)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSupportedDragActions(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilePlacesModel_OnSupportedDragActions(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_InsertRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperInsertRows` instead
    ///
    pub const QBaseInsertRows = SuperInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperInsertRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperInsertRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnInsertRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn InsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_InsertColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperInsertColumns` instead
    ///
    pub const QBaseInsertColumns = SuperInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperInsertColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperInsertColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#insertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnInsertColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_RemoveRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperRemoveRows` instead
    ///
    pub const QBaseRemoveRows = SuperRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperRemoveRows(self: ?*anyopaque, row: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperRemoveRows(@ptrCast(self), @bitCast(row), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, row: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnRemoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn RemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_RemoveColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperRemoveColumns` instead
    ///
    pub const QBaseRemoveColumns = SuperRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperRemoveColumns(self: ?*anyopaque, column: i32, count: i32, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperRemoveColumns(@ptrCast(self), @bitCast(column), @bitCast(count), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#removeColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, column: i32, count: i32, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnRemoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KFilePlacesModel_MoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveRows` instead
    ///
    pub const QBaseMoveRows = SuperMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceRow: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn SuperMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceRow: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KFilePlacesModel_SuperMoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceRow), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, sourceParent: QtC.QModelIndex, sourceRow: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnMoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn MoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KFilePlacesModel_MoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// ### DEPRECATED: Use `SuperMoveColumns` instead
    ///
    pub const QBaseMoveColumns = SuperMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceColumn: i32 `
    ///
    /// ` count: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationChild: i32 `
    ///
    pub fn SuperMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceColumn: i32, count: i32, destinationParent: ?*anyopaque, destinationChild: i32) bool {
        return qtc.KFilePlacesModel_SuperMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceColumn), @bitCast(count), @ptrCast(destinationParent), @bitCast(destinationChild));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#moveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, sourceParent: QtC.QModelIndex, sourceColumn: i32, count: i32, destinationParent: QtC.QModelIndex, destinationChild: i32) callconv(.c) bool `
    ///
    pub fn OnMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnMoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn FetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.KFilePlacesModel_FetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperFetchMore` instead
    ///
    pub const QBaseFetchMore = SuperFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperFetchMore(self: ?*anyopaque, parent: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#fetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnFetchMore(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn CanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_CanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// ### DEPRECATED: Use `SuperCanFetchMore` instead
    ///
    pub const QBaseCanFetchMore = SuperCanFetchMore;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    pub fn SuperCanFetchMore(self: ?*anyopaque, parent: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperCanFetchMore(@ptrCast(self), @ptrCast(parent));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#canFetchMore)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex) callconv(.c) bool `
    ///
    pub fn OnCanFetchMore(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnCanFetchMore(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn Sort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.KFilePlacesModel_Sort(@ptrCast(self), @bitCast(column), @bitCast(order));
    }

    /// ### DEPRECATED: Use `SuperSort` instead
    ///
    pub const QBaseSort = SuperSort;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` column: i32 `
    ///
    /// ` order: qnamespace_enums.SortOrder `
    ///
    pub fn SuperSort(self: ?*anyopaque, column: i32, order: i32) void {
        qtc.KFilePlacesModel_SuperSort(@ptrCast(self), @bitCast(column), @bitCast(order));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#sort)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, column: i32, order: qnamespace_enums.SortOrder) callconv(.c) void `
    ///
    pub fn OnSort(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnSort(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Buddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.KFilePlacesModel_Buddy(@ptrCast(self), @ptrCast(index));
    }

    /// ### DEPRECATED: Use `SuperBuddy` instead
    ///
    pub const QBaseBuddy = SuperBuddy;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperBuddy(self: ?*anyopaque, index: ?*anyopaque) QtC.QModelIndex {
        return qtc.KFilePlacesModel_SuperBuddy(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#buddy)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnBuddy(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QModelIndex) void {
        qtc.KFilePlacesModel_OnBuddy(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` start: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Match(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KFilePlacesModel_Match(@ptrCast(self), @ptrCast(start), @bitCast(role), @ptrCast(value), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("kfileplacesmodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperMatch` instead
    ///
    pub const QBaseMatch = SuperMatch;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` start: QtC.QModelIndex `
    ///
    /// ` role: i32 `
    ///
    /// ` value: QtC.QVariant `
    ///
    /// ` hits: i32 `
    ///
    /// ` flags: flag of qnamespace_enums.MatchFlag `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperMatch(self: ?*anyopaque, start: ?*anyopaque, role: i32, value: ?*anyopaque, hits: i32, flags: i32, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KFilePlacesModel_SuperMatch(@ptrCast(self), @ptrCast(start), @bitCast(role), @ptrCast(value), @bitCast(hits), @bitCast(flags));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("kfileplacesmodel.Match: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#match)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, start: QtC.QModelIndex, role: i32, value: QtC.QVariant, hits: i32, flags: flag of qnamespace_enums.MatchFlag) callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QModelIndex `
    ///
    pub fn OnMatch(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, ?*anyopaque, i32, i32) callconv(.c) qtc.libqt_list) void {
        qtc.KFilePlacesModel_OnMatch(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn Span(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KFilePlacesModel_Span(@ptrCast(self), @ptrCast(index));
    }

    /// ### DEPRECATED: Use `SuperSpan` instead
    ///
    pub const QBaseSpan = SuperSpan;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    pub fn SuperSpan(self: ?*anyopaque, index: ?*anyopaque) QtC.QSize {
        return qtc.KFilePlacesModel_SuperSpan(@ptrCast(self), @ptrCast(index));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#span)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex) callconv(.c) QtC.QSize `
    ///
    pub fn OnSpan(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) QtC.QSize) void {
        qtc.KFilePlacesModel_OnSpan(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roleDataSpan: QtC.QModelRoleDataSpan `
    ///
    pub fn MultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.KFilePlacesModel_MultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// ### DEPRECATED: Use `SuperMultiData` instead
    ///
    pub const QBaseMultiData = SuperMultiData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` index: QtC.QModelIndex `
    ///
    /// ` roleDataSpan: QtC.QModelRoleDataSpan `
    ///
    pub fn SuperMultiData(self: ?*anyopaque, index: ?*anyopaque, roleDataSpan: QtC.QModelRoleDataSpan) void {
        qtc.KFilePlacesModel_SuperMultiData(@ptrCast(self), @ptrCast(index), @ptrCast(roleDataSpan));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#multiData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, index: QtC.QModelIndex, roleDataSpan: QtC.QModelRoleDataSpan) callconv(.c) void `
    ///
    pub fn OnMultiData(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, QtC.QModelRoleDataSpan) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnMultiData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn Submit(self: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_Submit(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSubmit` instead
    ///
    pub const QBaseSubmit = SuperSubmit;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperSubmit(self: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperSubmit(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#submit)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) bool `
    ///
    pub fn OnSubmit(self: ?*anyopaque, callback: *const fn () callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnSubmit(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn Revert(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_Revert(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperRevert` instead
    ///
    pub const QBaseRevert = SuperRevert;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperRevert(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperRevert(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#revert)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnRevert(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnRevert(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn ResetInternalData(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_ResetInternalData(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperResetInternalData` instead
    ///
    pub const QBaseResetInternalData = SuperResetInternalData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperResetInternalData(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperResetInternalData(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#resetInternalData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnResetInternalData(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnResetInternalData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn Event(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_Event(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEvent` instead
    ///
    pub const QBaseEvent = SuperEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEvent(self: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#event)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn EventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_EventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperEventFilter` instead
    ///
    pub const QBaseEventFilter = SuperEventFilter;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` watched: QtC.QObject `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperEventFilter(self: ?*anyopaque, watched: ?*anyopaque, event: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperEventFilter(@ptrCast(self), @ptrCast(watched), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#eventFilter)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, watched: QtC.QObject, event: QtC.QEvent) callconv(.c) bool `
    ///
    pub fn OnEventFilter(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnEventFilter(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn TimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFilePlacesModel_TimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperTimerEvent` instead
    ///
    pub const QBaseTimerEvent = SuperTimerEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` event: QtC.QTimerEvent `
    ///
    pub fn SuperTimerEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperTimerEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#timerEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, event: QtC.QTimerEvent) callconv(.c) void `
    ///
    pub fn OnTimerEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnTimerEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn ChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFilePlacesModel_ChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperChildEvent` instead
    ///
    pub const QBaseChildEvent = SuperChildEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` event: QtC.QChildEvent `
    ///
    pub fn SuperChildEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperChildEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#childEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, event: QtC.QChildEvent) callconv(.c) void `
    ///
    pub fn OnChildEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnChildEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn CustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFilePlacesModel_CustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// ### DEPRECATED: Use `SuperCustomEvent` instead
    ///
    pub const QBaseCustomEvent = SuperCustomEvent;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` event: QtC.QEvent `
    ///
    pub fn SuperCustomEvent(self: ?*anyopaque, event: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperCustomEvent(@ptrCast(self), @ptrCast(event));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#customEvent)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, event: QtC.QEvent) callconv(.c) void `
    ///
    pub fn OnCustomEvent(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnCustomEvent(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn ConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KFilePlacesModel_ConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperConnectNotify` instead
    ///
    pub const QBaseConnectNotify = SuperConnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperConnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperConnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#connectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnConnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnConnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn DisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KFilePlacesModel_DisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperDisconnectNotify` instead
    ///
    pub const QBaseDisconnectNotify = SuperDisconnectNotify;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperDisconnectNotify(self: ?*anyopaque, signal: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperDisconnectNotify(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#disconnectNotify)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, signal: QtC.QMetaMethod) callconv(.c) void `
    ///
    pub fn OnDisconnectNotify(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnDisconnectNotify(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn CreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.KFilePlacesModel_CreateIndex(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// ### DEPRECATED: Use `SuperCreateIndex` instead
    ///
    pub const QBaseCreateIndex = SuperCreateIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    pub fn SuperCreateIndex(self: ?*anyopaque, row: i32, column: i32) QtC.QModelIndex {
        return qtc.KFilePlacesModel_SuperCreateIndex(@ptrCast(self), @bitCast(row), @bitCast(column));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#createIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, row: i32, column: i32) callconv(.c) QtC.QModelIndex `
    ///
    pub fn OnCreateIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32) callconv(.c) QtC.QModelIndex) void {
        qtc.KFilePlacesModel_OnCreateIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn EncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.KFilePlacesModel_EncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// ### DEPRECATED: Use `SuperEncodeData` instead
    ///
    pub const QBaseEncodeData = SuperEncodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` indexes: []QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn SuperEncodeData(self: ?*anyopaque, indexes: []QtC.QModelIndex, stream: ?*anyopaque) void {
        const indexes_list = qtc.libqt_list{
            .len = indexes.len,
            .data = @ptrCast(indexes.ptr),
        };
        qtc.KFilePlacesModel_SuperEncodeData(@ptrCast(self), indexes_list, @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#encodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, indexes: qtc.libqt_list ([]QtC.QModelIndex), stream: QtC.QDataStream) callconv(.c) void `
    ///
    pub fn OnEncodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnEncodeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn DecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_DecodeData(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// ### DEPRECATED: Use `SuperDecodeData` instead
    ///
    pub const QBaseDecodeData = SuperDecodeData;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` row: i32 `
    ///
    /// ` column: i32 `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` stream: QtC.QDataStream `
    ///
    pub fn SuperDecodeData(self: ?*anyopaque, row: i32, column: i32, parent: ?*anyopaque, stream: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperDecodeData(@ptrCast(self), @bitCast(row), @bitCast(column), @ptrCast(parent), @ptrCast(stream));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#decodeData)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, row: i32, column: i32, parent: QtC.QModelIndex, stream: QtC.QDataStream) callconv(.c) bool `
    ///
    pub fn OnDecodeData(self: ?*anyopaque, callback: *const fn (?*anyopaque, i32, i32, ?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnDecodeData(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KFilePlacesModel_BeginInsertRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertRows` instead
    ///
    pub const QBaseBeginInsertRows = SuperBeginInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KFilePlacesModel_SuperBeginInsertRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnBeginInsertRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn EndInsertRows(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_EndInsertRows(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndInsertRows` instead
    ///
    pub const QBaseEndInsertRows = SuperEndInsertRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperEndInsertRows(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperEndInsertRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnEndInsertRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KFilePlacesModel_BeginRemoveRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveRows` instead
    ///
    pub const QBaseBeginRemoveRows = SuperBeginRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveRows(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KFilePlacesModel_SuperBeginRemoveRows(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnBeginRemoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn EndRemoveRows(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_EndRemoveRows(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveRows` instead
    ///
    pub const QBaseEndRemoveRows = SuperEndRemoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperEndRemoveRows(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperEndRemoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnEndRemoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn BeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.KFilePlacesModel_BeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationRow));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveRows` instead
    ///
    pub const QBaseBeginMoveRows = SuperBeginMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationRow: i32 `
    ///
    pub fn SuperBeginMoveRows(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationRow: i32) bool {
        return qtc.KFilePlacesModel_SuperBeginMoveRows(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationRow));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveRows(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnBeginMoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn EndMoveRows(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_EndMoveRows(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndMoveRows` instead
    ///
    pub const QBaseEndMoveRows = SuperEndMoveRows;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperEndMoveRows(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperEndMoveRows(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveRows)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveRows(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnEndMoveRows(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KFilePlacesModel_BeginInsertColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginInsertColumns` instead
    ///
    pub const QBaseBeginInsertColumns = SuperBeginInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginInsertColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KFilePlacesModel_SuperBeginInsertColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginInsertColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnBeginInsertColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn EndInsertColumns(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_EndInsertColumns(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndInsertColumns` instead
    ///
    pub const QBaseEndInsertColumns = SuperEndInsertColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperEndInsertColumns(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperEndInsertColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endInsertColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndInsertColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnEndInsertColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn BeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KFilePlacesModel_BeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// ### DEPRECATED: Use `SuperBeginRemoveColumns` instead
    ///
    pub const QBaseBeginRemoveColumns = SuperBeginRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` parent: QtC.QModelIndex `
    ///
    /// ` first: i32 `
    ///
    /// ` last: i32 `
    ///
    pub fn SuperBeginRemoveColumns(self: ?*anyopaque, parent: ?*anyopaque, first: i32, last: i32) void {
        qtc.KFilePlacesModel_SuperBeginRemoveColumns(@ptrCast(self), @ptrCast(parent), @bitCast(first), @bitCast(last));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnBeginRemoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnBeginRemoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn EndRemoveColumns(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_EndRemoveColumns(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndRemoveColumns` instead
    ///
    pub const QBaseEndRemoveColumns = SuperEndRemoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperEndRemoveColumns(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperEndRemoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endRemoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndRemoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnEndRemoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn BeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.KFilePlacesModel_BeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationColumn));
    }

    /// ### DEPRECATED: Use `SuperBeginMoveColumns` instead
    ///
    pub const QBaseBeginMoveColumns = SuperBeginMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` sourceParent: QtC.QModelIndex `
    ///
    /// ` sourceFirst: i32 `
    ///
    /// ` sourceLast: i32 `
    ///
    /// ` destinationParent: QtC.QModelIndex `
    ///
    /// ` destinationColumn: i32 `
    ///
    pub fn SuperBeginMoveColumns(self: ?*anyopaque, sourceParent: ?*anyopaque, sourceFirst: i32, sourceLast: i32, destinationParent: ?*anyopaque, destinationColumn: i32) bool {
        return qtc.KFilePlacesModel_SuperBeginMoveColumns(@ptrCast(self), @ptrCast(sourceParent), @bitCast(sourceFirst), @bitCast(sourceLast), @ptrCast(destinationParent), @bitCast(destinationColumn));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, sourceParent: QtC.QModelIndex, sourceFirst: i32, sourceLast: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) bool `
    ///
    pub fn OnBeginMoveColumns(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnBeginMoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn EndMoveColumns(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_EndMoveColumns(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndMoveColumns` instead
    ///
    pub const QBaseEndMoveColumns = SuperEndMoveColumns;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperEndMoveColumns(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperEndMoveColumns(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endMoveColumns)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndMoveColumns(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnEndMoveColumns(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn BeginResetModel(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_BeginResetModel(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperBeginResetModel` instead
    ///
    pub const QBaseBeginResetModel = SuperBeginResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperBeginResetModel(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperBeginResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#beginResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnBeginResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnBeginResetModel(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn EndResetModel(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_EndResetModel(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperEndResetModel` instead
    ///
    pub const QBaseEndResetModel = SuperEndResetModel;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperEndResetModel(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperEndResetModel(@ptrCast(self));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#endResetModel)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) void `
    ///
    pub fn OnEndResetModel(self: ?*anyopaque, callback: *const fn () callconv(.c) void) void {
        qtc.KFilePlacesModel_OnEndResetModel(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` from: QtC.QModelIndex `
    ///
    /// ` to: QtC.QModelIndex `
    ///
    pub fn ChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.KFilePlacesModel_ChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndex` instead
    ///
    pub const QBaseChangePersistentIndex = SuperChangePersistentIndex;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` from: QtC.QModelIndex `
    ///
    /// ` to: QtC.QModelIndex `
    ///
    pub fn SuperChangePersistentIndex(self: ?*anyopaque, from: ?*anyopaque, to: ?*anyopaque) void {
        qtc.KFilePlacesModel_SuperChangePersistentIndex(@ptrCast(self), @ptrCast(from), @ptrCast(to));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, from: QtC.QModelIndex, to: QtC.QModelIndex) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndex(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, ?*anyopaque) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnChangePersistentIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` from: []QtC.QModelIndex `
    ///
    /// ` to: []QtC.QModelIndex `
    ///
    pub fn ChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KFilePlacesModel_ChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// ### DEPRECATED: Use `SuperChangePersistentIndexList` instead
    ///
    pub const QBaseChangePersistentIndexList = SuperChangePersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` from: []QtC.QModelIndex `
    ///
    /// ` to: []QtC.QModelIndex `
    ///
    pub fn SuperChangePersistentIndexList(self: ?*anyopaque, from: []QtC.QModelIndex, to: []QtC.QModelIndex) void {
        const from_list = qtc.libqt_list{
            .len = from.len,
            .data = @ptrCast(from.ptr),
        };
        const to_list = qtc.libqt_list{
            .len = to.len,
            .data = @ptrCast(to.ptr),
        };
        qtc.KFilePlacesModel_SuperChangePersistentIndexList(@ptrCast(self), from_list, to_list);
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#changePersistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, from: qtc.libqt_list ([]QtC.QModelIndex), to: qtc.libqt_list ([]QtC.QModelIndex)) callconv(.c) void `
    ///
    pub fn OnChangePersistentIndexList(self: ?*anyopaque, callback: *const fn (?*anyopaque, qtc.libqt_list, qtc.libqt_list) callconv(.c) void) void {
        qtc.KFilePlacesModel_OnChangePersistentIndexList(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn PersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KFilePlacesModel_PersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("kfileplacesmodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `SuperPersistentIndexList` instead
    ///
    pub const QBasePersistentIndexList = SuperPersistentIndexList;

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn SuperPersistentIndexList(self: ?*anyopaque, allocator: std.mem.Allocator) []QtC.QModelIndex {
        const _arr: qtc.libqt_list = qtc.KFilePlacesModel_SuperPersistentIndexList(@ptrCast(self));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QtC.QModelIndex, _arr.len) catch @panic("kfileplacesmodel.PersistentIndexList: Memory allocation failed");
        const _data: [*]QtC.QModelIndex = @ptrCast(@alignCast(_arr.data));
        @memcpy(_ret, _data[0.._arr.len]);
        return _ret;
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#persistentIndexList)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// **Warning:** Memory for the returned type of the callback must be allocated using `std.heap.c_allocator`, as the library handles deallocation.
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) qtc.libqt_list `
    ///
    /// ## Callback Returns:
    ///
    /// ` C ABI representation of []QtC.QModelIndex `
    ///
    pub fn OnPersistentIndexList(self: ?*anyopaque, callback: *const fn () callconv(.c) qtc.libqt_list) void {
        qtc.KFilePlacesModel_OnPersistentIndexList(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn Sender(self: ?*anyopaque) QtC.QObject {
        return qtc.KFilePlacesModel_Sender(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSender` instead
    ///
    pub const QBaseSender = SuperSender;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperSender(self: ?*anyopaque) QtC.QObject {
        return qtc.KFilePlacesModel_SuperSender(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#sender)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) QtC.QObject `
    ///
    pub fn OnSender(self: ?*anyopaque, callback: *const fn () callconv(.c) QtC.QObject) void {
        qtc.KFilePlacesModel_OnSender(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SenderSignalIndex(@ptrCast(self));
    }

    /// ### DEPRECATED: Use `SuperSenderSignalIndex` instead
    ///
    pub const QBaseSenderSignalIndex = SuperSenderSignalIndex;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn SuperSenderSignalIndex(self: ?*anyopaque) i32 {
        return qtc.KFilePlacesModel_SuperSenderSignalIndex(@ptrCast(self));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#senderSignalIndex)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn () callconv(.c) i32 `
    ///
    pub fn OnSenderSignalIndex(self: ?*anyopaque, callback: *const fn () callconv(.c) i32) void {
        qtc.KFilePlacesModel_OnSenderSignalIndex(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn Receivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFilePlacesModel_Receivers(@ptrCast(self), signal_Cstring);
    }

    /// ### DEPRECATED: Use `SuperReceivers` instead
    ///
    pub const QBaseReceivers = SuperReceivers;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: [:0]const u8 `
    ///
    pub fn SuperReceivers(self: ?*anyopaque, signal: [:0]const u8) i32 {
        const signal_Cstring = signal.ptr;
        return qtc.KFilePlacesModel_SuperReceivers(@ptrCast(self), signal_Cstring);
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#receivers)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, signal: [*:0]const u8) callconv(.c) i32 `
    ///
    pub fn OnReceivers(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) i32) void {
        qtc.KFilePlacesModel_OnReceivers(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn IsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_IsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// ### DEPRECATED: Use `SuperIsSignalConnected` instead
    ///
    pub const QBaseIsSignalConnected = SuperIsSignalConnected;

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow calling base class virtual or protected method
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` signal: QtC.QMetaMethod `
    ///
    pub fn SuperIsSignalConnected(self: ?*anyopaque, signal: ?*anyopaque) bool {
        return qtc.KFilePlacesModel_SuperIsSignalConnected(@ptrCast(self), @ptrCast(signal));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#isSignalConnected)
    ///
    /// Wrapper to allow overriding base class virtual or protected method
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel`
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, signal: QtC.QMetaMethod) callconv(.c) bool `
    ///
    pub fn OnIsSignalConnected(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool) void {
        qtc.KFilePlacesModel_OnIsSignalConnected(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnRowsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsInserted)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsInserted(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsInserted(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsRemoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, parent: QtC.QModelIndex, first: i32, last: i32) callconv(.c) void `
    ///
    pub fn OnColumnsRemoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsRemoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelAboutToBeReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel) callconv(.c) void `
    ///
    pub fn OnModelAboutToBeReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelAboutToBeReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#modelReset)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel) callconv(.c) void `
    ///
    pub fn OnModelReset(self: ?*anyopaque, callback: *const fn (?*anyopaque) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ModelReset(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsAboutToBeMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#rowsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationRow: i32) callconv(.c) void `
    ///
    pub fn OnRowsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_RowsMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsAboutToBeMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsAboutToBeMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsAboutToBeMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QAbstractItemModel
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qabstractitemmodel.html#columnsMoved)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, sourceParent: QtC.QModelIndex, sourceStart: i32, sourceEnd: i32, destinationParent: QtC.QModelIndex, destinationColumn: i32) callconv(.c) void `
    ///
    pub fn OnColumnsMoved(self: ?*anyopaque, callback: *const fn (?*anyopaque, ?*anyopaque, i32, i32, ?*anyopaque, i32) callconv(.c) void) void {
        qtc.QAbstractItemModel_Connect_ColumnsMoved(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// Inherited from QObject
    ///
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#objectNameChanged)
    ///
    /// Wrapper to allow calling private signal
    ///
    /// ## Parameters:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    /// ` callback: *const fn (self: QtC.KFilePlacesModel, objectName: [*:0]const u8) callconv(.c) void `
    ///
    pub fn OnObjectNameChanged(self: ?*anyopaque, callback: *const fn (?*anyopaque, [*:0]const u8) callconv(.c) void) void {
        qtc.QObject_Connect_ObjectNameChanged(@ptrCast(self), @bitCast(@intFromPtr(callback)));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#dtor.KFilePlacesModel)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFilePlacesModel `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KFilePlacesModel_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfileplacesmodel.html#public-types)
pub const enums = struct {
    pub const AdditionalRoles = enum(i32) {
        pub const UrlRole: i32 = 110940459;
        pub const HiddenRole: i32 = 121752236;
        pub const SetupNeededRole: i32 = 94016349;
        pub const FixedDeviceRole: i32 = 858298049;
        pub const CapacityBarRecommendedRole: i32 = 357090756;
        pub const GroupRole: i32 = 173761774;
        pub const IconNameRole: i32 = 10771456;
        pub const GroupHiddenRole: i32 = 564443446;
        pub const TeardownAllowedRole: i32 = 39007076;
        pub const EjectAllowedRole: i32 = 169258075;
        pub const TeardownOverlayRecommendedRole: i32 = 53402830;
        pub const DeviceAccessibilityRole: i32 = 37748115;
    };

    pub const GroupType = enum(i32) {
        pub const PlacesType: i32 = 0;
        pub const RemoteType: i32 = 1;
        pub const RecentlySavedType: i32 = 2;
        pub const SearchForType: i32 = 3;
        pub const DevicesType: i32 = 4;
        pub const RemovableDevicesType: i32 = 5;
        pub const UnknownType: i32 = 6;
        pub const TagsType: i32 = 7;
    };

    pub const DeviceAccessibility = enum(i32) {
        pub const SetupNeeded: i32 = 0;
        pub const SetupInProgress: i32 = 1;
        pub const Accessible: i32 = 2;
        pub const TeardownInProgress: i32 = 3;
    };
};
