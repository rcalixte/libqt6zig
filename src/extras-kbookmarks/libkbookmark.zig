const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDomDocument = @import("libqt6").QDomDocument;
const QDomElement = @import("libqt6").QDomElement;
const QDomNode = @import("libqt6").QDomNode;
const QMimeData = @import("libqt6").QMimeData;
const QUrl = @import("libqt6").QUrl;
const kbookmark_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://api.kde.org/kbookmark.html)
pub const KBookmark = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBookmark,

    pub const _is_KBookmark = {};

    /// New constructs a new KBookmark object.
    ///
    pub fn New() KBookmark {
        return .{ .ptr = qtc.KBookmark_new() };
    }

    /// New2 constructs a new KBookmark object.
    ///
    /// ## Parameter(s):
    ///
    /// ` elem: QDomElement `
    ///
    pub fn New2(elem: anytype) KBookmark {
        comptime _ = @TypeOf(elem)._is_QDomElement;
        return .{ .ptr = qtc.KBookmark_new2(@ptrCast(elem.ptr)) };
    }

    /// New3 constructs a new KBookmark object.
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KBookmark `
    ///
    pub fn New3(param1: anytype) KBookmark {
        comptime _ = @TypeOf(param1)._is_KBookmark;
        return .{ .ptr = qtc.KBookmark_new3(@ptrCast(param1.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#standaloneBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QUrl `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn StandaloneBookmark(text: []const u8, url: anytype, icon: []const u8) KBookmark {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        return .{ .ptr = qtc.KBookmark_StandaloneBookmark(text_str, @ptrCast(url.ptr), icon_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn IsGroup(self: KBookmark) bool {
        return qtc.KBookmark_IsGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn IsSeparator(self: KBookmark) bool {
        return qtc.KBookmark_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn IsNull(self: KBookmark) bool {
        return qtc.KBookmark_IsNull(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#hasParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn HasParent(self: KBookmark) bool {
        return qtc.KBookmark_HasParent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#fullText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FullText(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_FullText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.FullText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setFullText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` fullText: []const u8 `
    ///
    pub fn SetFullText(self: KBookmark, fullText: []const u8) void {
        const fullText_str = qtc.libqt_string{
            .len = fullText.len,
            .data = fullText.ptr,
        };
        qtc.KBookmark_SetFullText(@ptrCast(self.ptr), fullText_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn Url(self: KBookmark) QUrl {
        return .{ .ptr = qtc.KBookmark_Url(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: KBookmark, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KBookmark_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetIcon(self: KBookmark, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KBookmark_SetIcon(@ptrCast(self.ptr), icon_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: KBookmark, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.KBookmark_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn SetMimeType(self: KBookmark, mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.KBookmark_SetMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#showInToolbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn ShowInToolbar(self: KBookmark) bool {
        return qtc.KBookmark_ShowInToolbar(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setShowInToolbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` show: bool `
    ///
    pub fn SetShowInToolbar(self: KBookmark, show: bool) void {
        qtc.KBookmark_SetShowInToolbar(@ptrCast(self.ptr), show);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#parentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn ParentGroup(self: KBookmark) KBookmarkGroup {
        return .{ .ptr = qtc.KBookmark_ParentGroup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#toGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn ToGroup(self: KBookmark) KBookmarkGroup {
        return .{ .ptr = qtc.KBookmark_ToGroup(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Address(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Address(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.Address: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn PositionInParent(self: KBookmark) i32 {
        return qtc.KBookmark_PositionInParent(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#internalElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn InternalElement(self: KBookmark) QDomElement {
        return .{ .ptr = qtc.KBookmark_InternalElement(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#updateAccessMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn UpdateAccessMetadata(self: KBookmark) void {
        qtc.KBookmark_UpdateAccessMetadata(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#parentAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []const u8 `
    ///
    pub fn ParentAddress(allocator: std.mem.Allocator, address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _str = qtc.KBookmark_ParentAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.ParentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    pub fn PositionInParent2(address: []const u8) u32 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        return qtc.KBookmark_PositionInParent2(address_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#previousAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []const u8 `
    ///
    pub fn PreviousAddress(allocator: std.mem.Allocator, address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _str = qtc.KBookmark_PreviousAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.PreviousAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#nextAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []const u8 `
    ///
    pub fn NextAddress(allocator: std.mem.Allocator, address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _str = qtc.KBookmark_NextAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.NextAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#commonParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` A: []const u8 `
    ///
    /// ` B: []const u8 `
    ///
    pub fn CommonParent(allocator: std.mem.Allocator, A: []const u8, B: []const u8) []const u8 {
        const A_str = qtc.libqt_string{
            .len = A.len,
            .data = A.ptr,
        };
        const B_str = qtc.libqt_string{
            .len = B.len,
            .data = B.ptr,
        };
        var _str = qtc.KBookmark_CommonParent(A_str, B_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.CommonParent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` owner: []const u8 `
    ///
    /// ` create: bool `
    ///
    pub fn MetaData(self: KBookmark, owner: []const u8, create: bool) QDomNode {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        return .{ .ptr = qtc.KBookmark_MetaData(@ptrCast(self.ptr), owner_str, create) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#metaDataItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn MetaDataItem(self: KBookmark, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KBookmark_MetaDataItem(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmark.MetaDataItem: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setMetaDataItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetMetaDataItem(self: KBookmark, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KBookmark_SetMetaDataItem(@ptrCast(self.ptr), key_str, value_str);
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#populateMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn PopulateMimeData(self: KBookmark, mimeData: anytype) void {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        qtc.KBookmark_PopulateMimeData(@ptrCast(self.ptr), @ptrCast(mimeData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` rhs: KBookmark `
    ///
    pub fn OperatorEqual(self: KBookmark, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KBookmark;
        return qtc.KBookmark_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setMetaDataItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    /// ` mode: kbookmark_enums.MetaDataOverwriteMode `
    ///
    pub fn SetMetaDataItem3(self: KBookmark, key: []const u8, value: []const u8, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KBookmark_SetMetaDataItem3(@ptrCast(self.ptr), key_str, value_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#dtor.KBookmark)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmark `
    ///
    pub fn Delete(self: KBookmark) void {
        qtc.KBookmark_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html)
pub const KBookmarkGroup = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBookmarkGroup,

    pub const _is_KBookmarkGroup = {};
    pub const _is_KBookmark = {};

    /// New constructs a new KBookmarkGroup object.
    ///
    pub fn New() KBookmarkGroup {
        return .{ .ptr = qtc.KBookmarkGroup_new() };
    }

    /// New2 constructs a new KBookmarkGroup object.
    ///
    /// ## Parameter(s):
    ///
    /// ` elem: QDomElement `
    ///
    pub fn New2(elem: anytype) KBookmarkGroup {
        comptime _ = @TypeOf(elem)._is_QDomElement;
        return .{ .ptr = qtc.KBookmarkGroup_new2(@ptrCast(elem.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn IsOpen(self: KBookmarkGroup) bool {
        return qtc.KBookmarkGroup_IsOpen(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn First(self: KBookmarkGroup) KBookmark {
        return .{ .ptr = qtc.KBookmarkGroup_First(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#previous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` current: KBookmark `
    ///
    pub fn Previous(self: KBookmarkGroup, current: anytype) KBookmark {
        comptime _ = @TypeOf(current)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkGroup_Previous(@ptrCast(self.ptr), @ptrCast(current.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` current: KBookmark `
    ///
    pub fn Next(self: KBookmarkGroup, current: anytype) KBookmark {
        comptime _ = @TypeOf(current)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkGroup_Next(@ptrCast(self.ptr), @ptrCast(current.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` child: KBookmark `
    ///
    pub fn IndexOf(self: KBookmarkGroup, child: anytype) i32 {
        comptime _ = @TypeOf(child)._is_KBookmark;
        return qtc.KBookmarkGroup_IndexOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#createNewFolder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` text: []const u8 `
    ///
    pub fn CreateNewFolder(self: KBookmarkGroup, text: []const u8) KBookmarkGroup {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        return .{ .ptr = qtc.KBookmarkGroup_CreateNewFolder(@ptrCast(self.ptr), text_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#createNewSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn CreateNewSeparator(self: KBookmarkGroup) KBookmark {
        return .{ .ptr = qtc.KBookmarkGroup_CreateNewSeparator(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#addBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn AddBookmark(self: KBookmarkGroup, bm: anytype) KBookmark {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkGroup_AddBookmark(@ptrCast(self.ptr), @ptrCast(bm.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#addBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QUrl `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn AddBookmark2(self: KBookmarkGroup, text: []const u8, url: anytype, icon: []const u8) KBookmark {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        return .{ .ptr = qtc.KBookmarkGroup_AddBookmark2(@ptrCast(self.ptr), text_str, @ptrCast(url.ptr), icon_str) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#moveBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` bookmark: KBookmark `
    ///
    /// ` after: KBookmark `
    ///
    pub fn MoveBookmark(self: KBookmarkGroup, bookmark: anytype, after: anytype) bool {
        comptime _ = @TypeOf(bookmark)._is_KBookmark;
        comptime _ = @TypeOf(after)._is_KBookmark;
        return qtc.KBookmarkGroup_MoveBookmark(@ptrCast(self.ptr), @ptrCast(bookmark.ptr), @ptrCast(after.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#deleteBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` bk: KBookmark `
    ///
    pub fn DeleteBookmark(self: KBookmarkGroup, bk: anytype) void {
        comptime _ = @TypeOf(bk)._is_KBookmark;
        qtc.KBookmarkGroup_DeleteBookmark(@ptrCast(self.ptr), @ptrCast(bk.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#isToolbarGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn IsToolbarGroup(self: KBookmarkGroup) bool {
        return qtc.KBookmarkGroup_IsToolbarGroup(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#findToolbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn FindToolbar(self: KBookmarkGroup) QDomElement {
        return .{ .ptr = qtc.KBookmarkGroup_FindToolbar(@ptrCast(self.ptr)) };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#groupUrlList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn GroupUrlList(self: KBookmarkGroup, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KBookmarkGroup_GroupUrlList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("kbookmarkgroup.GroupUrlList: Memory allocation failed");
        const _data: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |ii|
            _ret[ii] = .{ .ptr = _data[ii] };
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#standaloneBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` text: []const u8 `
    ///
    /// ` url: QUrl `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn StandaloneBookmark(text: []const u8, url: anytype, icon: []const u8) KBookmark {
        const text_str = qtc.libqt_string{
            .len = text.len,
            .data = text.ptr,
        };
        comptime _ = @TypeOf(url)._is_QUrl;
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        return .{ .ptr = qtc.KBookmark_StandaloneBookmark(text_str, @ptrCast(url.ptr), icon_str) };
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn IsGroup(self: KBookmarkGroup) bool {
        return qtc.KBookmark_IsGroup(@ptrCast(self.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn IsSeparator(self: KBookmarkGroup) bool {
        return qtc.KBookmark_IsSeparator(@ptrCast(self.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn IsNull(self: KBookmarkGroup) bool {
        return qtc.KBookmark_IsNull(@ptrCast(self.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#hasParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn HasParent(self: KBookmarkGroup) bool {
        return qtc.KBookmark_HasParent(@ptrCast(self.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Text(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.Text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#fullText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn FullText(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_FullText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.FullText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setFullText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` fullText: []const u8 `
    ///
    pub fn SetFullText(self: KBookmarkGroup, fullText: []const u8) void {
        const fullText_str = qtc.libqt_string{
            .len = fullText.len,
            .data = fullText.ptr,
        };
        qtc.KBookmark_SetFullText(@ptrCast(self.ptr), fullText_str);
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn Url(self: KBookmarkGroup) QUrl {
        return .{ .ptr = qtc.KBookmark_Url(@ptrCast(self.ptr)) };
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` url: QUrl `
    ///
    pub fn SetUrl(self: KBookmarkGroup, url: anytype) void {
        comptime _ = @TypeOf(url)._is_QUrl;
        qtc.KBookmark_SetUrl(@ptrCast(self.ptr), @ptrCast(url.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Icon(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.Icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` icon: []const u8 `
    ///
    pub fn SetIcon(self: KBookmarkGroup, icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = icon.len,
            .data = icon.ptr,
        };
        qtc.KBookmark_SetIcon(@ptrCast(self.ptr), icon_str);
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Description(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.Description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` description: []const u8 `
    ///
    pub fn SetDescription(self: KBookmarkGroup, description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = description.len,
            .data = description.ptr,
        };
        qtc.KBookmark_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeType(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.MimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` mimeType: []const u8 `
    ///
    pub fn SetMimeType(self: KBookmarkGroup, mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = mimeType.len,
            .data = mimeType.ptr,
        };
        qtc.KBookmark_SetMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#showInToolbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn ShowInToolbar(self: KBookmarkGroup) bool {
        return qtc.KBookmark_ShowInToolbar(@ptrCast(self.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setShowInToolbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` show: bool `
    ///
    pub fn SetShowInToolbar(self: KBookmarkGroup, show: bool) void {
        qtc.KBookmark_SetShowInToolbar(@ptrCast(self.ptr), show);
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#parentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn ParentGroup(self: KBookmarkGroup) KBookmarkGroup {
        return .{ .ptr = qtc.KBookmark_ParentGroup(@ptrCast(self.ptr)) };
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#toGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn ToGroup(self: KBookmarkGroup) KBookmarkGroup {
        return .{ .ptr = qtc.KBookmark_ToGroup(@ptrCast(self.ptr)) };
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn Address(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Address(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.Address: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn PositionInParent(self: KBookmarkGroup) i32 {
        return qtc.KBookmark_PositionInParent(@ptrCast(self.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#internalElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn InternalElement(self: KBookmarkGroup) QDomElement {
        return .{ .ptr = qtc.KBookmark_InternalElement(@ptrCast(self.ptr)) };
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#updateAccessMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn UpdateAccessMetadata(self: KBookmarkGroup) void {
        qtc.KBookmark_UpdateAccessMetadata(@ptrCast(self.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#parentAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []const u8 `
    ///
    pub fn ParentAddress(allocator: std.mem.Allocator, address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _str = qtc.KBookmark_ParentAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.ParentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` address: []const u8 `
    ///
    pub fn PositionInParent2(address: []const u8) u32 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        return qtc.KBookmark_PositionInParent2(address_str);
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#previousAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []const u8 `
    ///
    pub fn PreviousAddress(allocator: std.mem.Allocator, address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _str = qtc.KBookmark_PreviousAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.PreviousAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#nextAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` address: []const u8 `
    ///
    pub fn NextAddress(allocator: std.mem.Allocator, address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = address.len,
            .data = address.ptr,
        };
        var _str = qtc.KBookmark_NextAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.NextAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#commonParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` A: []const u8 `
    ///
    /// ` B: []const u8 `
    ///
    pub fn CommonParent(allocator: std.mem.Allocator, A: []const u8, B: []const u8) []const u8 {
        const A_str = qtc.libqt_string{
            .len = A.len,
            .data = A.ptr,
        };
        const B_str = qtc.libqt_string{
            .len = B.len,
            .data = B.ptr,
        };
        var _str = qtc.KBookmark_CommonParent(A_str, B_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.CommonParent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#metaData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` owner: []const u8 `
    ///
    /// ` create: bool `
    ///
    pub fn MetaData(self: KBookmarkGroup, owner: []const u8, create: bool) QDomNode {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        return .{ .ptr = qtc.KBookmark_MetaData(@ptrCast(self.ptr), owner_str, create) };
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#metaDataItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` key: []const u8 `
    ///
    pub fn MetaDataItem(self: KBookmarkGroup, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KBookmark_MetaDataItem(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("kbookmarkgroup.MetaDataItem: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setMetaDataItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    pub fn SetMetaDataItem(self: KBookmarkGroup, key: []const u8, value: []const u8) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KBookmark_SetMetaDataItem(@ptrCast(self.ptr), key_str, value_str);
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#populateMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn PopulateMimeData(self: KBookmarkGroup, mimeData: anytype) void {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        qtc.KBookmark_PopulateMimeData(@ptrCast(self.ptr), @ptrCast(mimeData.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` rhs: KBookmark `
    ///
    pub fn OperatorEqual(self: KBookmarkGroup, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KBookmark;
        return qtc.KBookmark_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setMetaDataItem)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` key: []const u8 `
    ///
    /// ` value: []const u8 `
    ///
    /// ` mode: kbookmark_enums.MetaDataOverwriteMode `
    ///
    pub fn SetMetaDataItem3(self: KBookmarkGroup, key: []const u8, value: []const u8, mode: i32) void {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        const value_str = qtc.libqt_string{
            .len = value.len,
            .data = value.ptr,
        };
        qtc.KBookmark_SetMetaDataItem3(@ptrCast(self.ptr), key_str, value_str, @bitCast(mode));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#dtor.KBookmarkGroup)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn Delete(self: KBookmarkGroup) void {
        qtc.KBookmarkGroup_Delete(@ptrCast(self.ptr));
    }
};

// Also inherits unprojectable QList<KBookmark>

/// ### [Upstream resources](https://api.kde.org/kbookmark-list.html)
pub const KBookmark__List = extern struct {
    /// ### [Upstream resources](https://api.kde.org/kbookmark-list.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.KBookmark__List,

    pub const _is_KBookmark__List = {};

    /// New constructs a new KBookmark::List object.
    ///
    pub fn New() KBookmark__List {
        return .{ .ptr = qtc.KBookmark__List_new() };
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark-list.html#populateMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark__List `
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn PopulateMimeData(self: KBookmark__List, mimeData: anytype) void {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        qtc.KBookmark__List_PopulateMimeData(@ptrCast(self.ptr), @ptrCast(mimeData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark-list.html#canDecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn CanDecode(mimeData: anytype) bool {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        return qtc.KBookmark__List_CanDecode(@ptrCast(mimeData.ptr));
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark-list.html#mimeDataTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn MimeDataTypes(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KBookmark__List_MimeDataTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("kbookmark__list.MimeDataTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data = _str[i];
            const _buf = allocator.alloc(u8, _data.len) catch @panic("kbookmark__list.MimeDataTypes: Memory allocation failed");
            @memcpy(_buf, _data.data[0.._data.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### [Upstream resources](https://api.kde.org/kbookmark-list.html#fromMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    /// ` parentDocument: QDomDocument `
    ///
    pub fn FromMimeData(mimeData: anytype, parentDocument: anytype) KBookmark__List {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        comptime _ = @TypeOf(parentDocument)._is_QDomDocument;
        return .{ .ptr = qtc.KBookmark__List_FromMimeData(@ptrCast(mimeData.ptr), @ptrCast(parentDocument.ptr)) };
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmark__List `
    ///
    pub fn Delete(self: KBookmark__List) void {
        qtc.KBookmark__List_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://api.kde.org/kbookmark.html#public-types)
pub const enums = struct {
    pub const MetaDataOverwriteMode = enum(i32) {
        pub const OverwriteMetaData: i32 = 0;
        pub const DontOverwriteMetaData: i32 = 1;
    };
};
