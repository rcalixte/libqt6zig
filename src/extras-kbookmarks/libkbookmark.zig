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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KBookmark object in C++ memory
    ///
    pub fn new() KBookmark {
        return .{ .ptr = qtc.KBookmark_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KBookmark object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` elem: QDomElement `
    ///
    pub fn new2(elem: anytype) KBookmark {
        comptime _ = @TypeOf(elem)._is_QDomElement;
        return .{ .ptr = qtc.KBookmark_new2(@ptrCast(elem.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new KBookmark object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: KBookmark `
    ///
    pub fn new3(param1: anytype) KBookmark {
        comptime _ = @TypeOf(param1)._is_KBookmark;
        return .{ .ptr = qtc.KBookmark_new3(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `standaloneBookmark` instead
    ///
    pub const StandaloneBookmark = standaloneBookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#standaloneBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _url: QUrl `
    ///
    /// ` _icon: []const u8 `
    ///
    pub fn standaloneBookmark(_text: []const u8, _url: anytype, _icon: []const u8) KBookmark {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_url)._is_QUrl;
        const icon_str = qtc.libqt_string{
            .len = _icon.len,
            .data = _icon.ptr,
        };
        return .{ .ptr = qtc.KBookmark_StandaloneBookmark(text_str, @ptrCast(_url.ptr), icon_str) };
    }

    /// ### DEPRECATED: Use `isGroup` instead
    ///
    pub const IsGroup = isGroup;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn isGroup(self: KBookmark) bool {
        return qtc.KBookmark_IsGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn isSeparator(self: KBookmark) bool {
        return qtc.KBookmark_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn isNull(self: KBookmark) bool {
        return qtc.KBookmark_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasParent` instead
    ///
    pub const HasParent = hasParent;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#hasParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn hasParent(self: KBookmark) bool {
        return qtc.KBookmark_HasParent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#text)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn text(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fullText` instead
    ///
    pub const FullText = fullText;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#fullText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn fullText(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_FullText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.fullText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFullText` instead
    ///
    pub const SetFullText = setFullText;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setFullText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` _fullText: []const u8 `
    ///
    pub fn setFullText(self: KBookmark, _fullText: []const u8) void {
        const fullText_str = qtc.libqt_string{
            .len = _fullText.len,
            .data = _fullText.ptr,
        };
        qtc.KBookmark_SetFullText(@ptrCast(self.ptr), fullText_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn url(self: KBookmark) QUrl {
        return .{ .ptr = qtc.KBookmark_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: KBookmark, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KBookmark_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#icon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn icon(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` _icon: []const u8 `
    ///
    pub fn setIcon(self: KBookmark, _icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = _icon.len,
            .data = _icon.ptr,
        };
        qtc.KBookmark_SetIcon(@ptrCast(self.ptr), icon_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#description)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn description(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: KBookmark, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.KBookmark_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#mimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeType(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.mimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMimeType` instead
    ///
    pub const SetMimeType = setMimeType;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` _mimeType: []const u8 `
    ///
    pub fn setMimeType(self: KBookmark, _mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = _mimeType.len,
            .data = _mimeType.ptr,
        };
        qtc.KBookmark_SetMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// ### DEPRECATED: Use `showInToolbar` instead
    ///
    pub const ShowInToolbar = showInToolbar;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#showInToolbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn showInToolbar(self: KBookmark) bool {
        return qtc.KBookmark_ShowInToolbar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowInToolbar` instead
    ///
    pub const SetShowInToolbar = setShowInToolbar;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setShowInToolbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` show: bool `
    ///
    pub fn setShowInToolbar(self: KBookmark, show: bool) void {
        qtc.KBookmark_SetShowInToolbar(@ptrCast(self.ptr), show);
    }

    /// ### DEPRECATED: Use `parentGroup` instead
    ///
    pub const ParentGroup = parentGroup;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#parentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn parentGroup(self: KBookmark) KBookmarkGroup {
        return .{ .ptr = qtc.KBookmark_ParentGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toGroup` instead
    ///
    pub const ToGroup = toGroup;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#toGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn toGroup(self: KBookmark) KBookmarkGroup {
        return .{ .ptr = qtc.KBookmark_ToGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `address` instead
    ///
    pub const Address = address;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#address)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn address(self: KBookmark, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Address(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.address: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `positionInParent` instead
    ///
    pub const PositionInParent = positionInParent;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn positionInParent(self: KBookmark) i32 {
        return qtc.KBookmark_PositionInParent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `internalElement` instead
    ///
    pub const InternalElement = internalElement;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#internalElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn internalElement(self: KBookmark) QDomElement {
        return .{ .ptr = qtc.KBookmark_InternalElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `updateAccessMetadata` instead
    ///
    pub const UpdateAccessMetadata = updateAccessMetadata;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#updateAccessMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    pub fn updateAccessMetadata(self: KBookmark) void {
        qtc.KBookmark_UpdateAccessMetadata(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parentAddress` instead
    ///
    pub const ParentAddress = parentAddress;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#parentAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _address: []const u8 `
    ///
    pub fn parentAddress(allocator: std.mem.Allocator, _address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = _address.len,
            .data = _address.ptr,
        };
        var _str = qtc.KBookmark_ParentAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.parentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `positionInParent2` instead
    ///
    pub const PositionInParent2 = positionInParent2;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` _address: []const u8 `
    ///
    pub fn positionInParent2(_address: []const u8) u32 {
        const address_str = qtc.libqt_string{
            .len = _address.len,
            .data = _address.ptr,
        };
        return qtc.KBookmark_PositionInParent2(address_str);
    }

    /// ### DEPRECATED: Use `previousAddress` instead
    ///
    pub const PreviousAddress = previousAddress;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#previousAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _address: []const u8 `
    ///
    pub fn previousAddress(allocator: std.mem.Allocator, _address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = _address.len,
            .data = _address.ptr,
        };
        var _str = qtc.KBookmark_PreviousAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.previousAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nextAddress` instead
    ///
    pub const NextAddress = nextAddress;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#nextAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _address: []const u8 `
    ///
    pub fn nextAddress(allocator: std.mem.Allocator, _address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = _address.len,
            .data = _address.ptr,
        };
        var _str = qtc.KBookmark_NextAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.nextAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `commonParent` instead
    ///
    pub const CommonParent = commonParent;

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
    pub fn commonParent(allocator: std.mem.Allocator, A: []const u8, B: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.commonParent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

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
    pub fn metaData(self: KBookmark, owner: []const u8, create: bool) QDomNode {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        return .{ .ptr = qtc.KBookmark_MetaData(@ptrCast(self.ptr), owner_str, create) };
    }

    /// ### DEPRECATED: Use `metaDataItem` instead
    ///
    pub const MetaDataItem = metaDataItem;

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
    pub fn metaDataItem(self: KBookmark, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KBookmark_MetaDataItem(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmark.metaDataItem: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMetaDataItem` instead
    ///
    pub const SetMetaDataItem = setMetaDataItem;

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
    pub fn setMetaDataItem(self: KBookmark, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `populateMimeData` instead
    ///
    pub const PopulateMimeData = populateMimeData;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#populateMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn populateMimeData(self: KBookmark, mimeData: anytype) void {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        qtc.KBookmark_PopulateMimeData(@ptrCast(self.ptr), @ptrCast(mimeData.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark `
    ///
    /// ` rhs: KBookmark `
    ///
    pub fn operatorEqual(self: KBookmark, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KBookmark;
        return qtc.KBookmark_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `setMetaDataItem3` instead
    ///
    pub const SetMetaDataItem3 = setMetaDataItem3;

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
    pub fn setMetaDataItem3(self: KBookmark, key: []const u8, value: []const u8, mode: i32) void {
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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#dtor.KBookmark)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmark `
    ///
    pub fn delete(self: KBookmark) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KBookmarkGroup object in C++ memory
    ///
    pub fn new() KBookmarkGroup {
        return .{ .ptr = qtc.KBookmarkGroup_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new KBookmarkGroup object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` elem: QDomElement `
    ///
    pub fn new2(elem: anytype) KBookmarkGroup {
        comptime _ = @TypeOf(elem)._is_QDomElement;
        return .{ .ptr = qtc.KBookmarkGroup_new2(@ptrCast(elem.ptr)) };
    }

    /// ### DEPRECATED: Use `isOpen` instead
    ///
    pub const IsOpen = isOpen;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#isOpen)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn isOpen(self: KBookmarkGroup) bool {
        return qtc.KBookmarkGroup_IsOpen(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `first` instead
    ///
    pub const First = first;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#first)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn first(self: KBookmarkGroup) KBookmark {
        return .{ .ptr = qtc.KBookmarkGroup_First(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `previous` instead
    ///
    pub const Previous = previous;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#previous)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` current: KBookmark `
    ///
    pub fn previous(self: KBookmarkGroup, current: anytype) KBookmark {
        comptime _ = @TypeOf(current)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkGroup_Previous(@ptrCast(self.ptr), @ptrCast(current.ptr)) };
    }

    /// ### DEPRECATED: Use `next` instead
    ///
    pub const Next = next;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#next)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` current: KBookmark `
    ///
    pub fn next(self: KBookmarkGroup, current: anytype) KBookmark {
        comptime _ = @TypeOf(current)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkGroup_Next(@ptrCast(self.ptr), @ptrCast(current.ptr)) };
    }

    /// ### DEPRECATED: Use `indexOf` instead
    ///
    pub const IndexOf = indexOf;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#indexOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` child: KBookmark `
    ///
    pub fn indexOf(self: KBookmarkGroup, child: anytype) i32 {
        comptime _ = @TypeOf(child)._is_KBookmark;
        return qtc.KBookmarkGroup_IndexOf(@ptrCast(self.ptr), @ptrCast(child.ptr));
    }

    /// ### DEPRECATED: Use `createNewFolder` instead
    ///
    pub const CreateNewFolder = createNewFolder;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#createNewFolder)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` _text: []const u8 `
    ///
    pub fn createNewFolder(self: KBookmarkGroup, _text: []const u8) KBookmarkGroup {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        return .{ .ptr = qtc.KBookmarkGroup_CreateNewFolder(@ptrCast(self.ptr), text_str) };
    }

    /// ### DEPRECATED: Use `createNewSeparator` instead
    ///
    pub const CreateNewSeparator = createNewSeparator;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#createNewSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn createNewSeparator(self: KBookmarkGroup) KBookmark {
        return .{ .ptr = qtc.KBookmarkGroup_CreateNewSeparator(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `addBookmark` instead
    ///
    pub const AddBookmark = addBookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#addBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` bm: KBookmark `
    ///
    pub fn addBookmark(self: KBookmarkGroup, bm: anytype) KBookmark {
        comptime _ = @TypeOf(bm)._is_KBookmark;
        return .{ .ptr = qtc.KBookmarkGroup_AddBookmark(@ptrCast(self.ptr), @ptrCast(bm.ptr)) };
    }

    /// ### DEPRECATED: Use `addBookmark2` instead
    ///
    pub const AddBookmark2 = addBookmark2;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#addBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _url: QUrl `
    ///
    /// ` _icon: []const u8 `
    ///
    pub fn addBookmark2(self: KBookmarkGroup, _text: []const u8, _url: anytype, _icon: []const u8) KBookmark {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_url)._is_QUrl;
        const icon_str = qtc.libqt_string{
            .len = _icon.len,
            .data = _icon.ptr,
        };
        return .{ .ptr = qtc.KBookmarkGroup_AddBookmark2(@ptrCast(self.ptr), text_str, @ptrCast(_url.ptr), icon_str) };
    }

    /// ### DEPRECATED: Use `moveBookmark` instead
    ///
    pub const MoveBookmark = moveBookmark;

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
    pub fn moveBookmark(self: KBookmarkGroup, bookmark: anytype, after: anytype) bool {
        comptime _ = @TypeOf(bookmark)._is_KBookmark;
        comptime _ = @TypeOf(after)._is_KBookmark;
        return qtc.KBookmarkGroup_MoveBookmark(@ptrCast(self.ptr), @ptrCast(bookmark.ptr), @ptrCast(after.ptr));
    }

    /// ### DEPRECATED: Use `deleteBookmark` instead
    ///
    pub const DeleteBookmark = deleteBookmark;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#deleteBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` bk: KBookmark `
    ///
    pub fn deleteBookmark(self: KBookmarkGroup, bk: anytype) void {
        comptime _ = @TypeOf(bk)._is_KBookmark;
        qtc.KBookmarkGroup_DeleteBookmark(@ptrCast(self.ptr), @ptrCast(bk.ptr));
    }

    /// ### DEPRECATED: Use `isToolbarGroup` instead
    ///
    pub const IsToolbarGroup = isToolbarGroup;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#isToolbarGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn isToolbarGroup(self: KBookmarkGroup) bool {
        return qtc.KBookmarkGroup_IsToolbarGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `findToolbar` instead
    ///
    pub const FindToolbar = findToolbar;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#findToolbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn findToolbar(self: KBookmarkGroup) QDomElement {
        return .{ .ptr = qtc.KBookmarkGroup_FindToolbar(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `groupUrlList` instead
    ///
    pub const GroupUrlList = groupUrlList;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#groupUrlList)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn groupUrlList(self: KBookmarkGroup, allocator: std.mem.Allocator) []QUrl {
        const _arr: qtc.libqt_list = qtc.KBookmarkGroup_GroupUrlList(@ptrCast(self.ptr));
        defer qtc.libqt_free(_arr.data);
        const _ret = allocator.alloc(QUrl, _arr.len) catch @panic("KBookmarkGroup.groupUrlList: Memory allocation failed");
        const _data_val: [*]QtC.QUrl = @ptrCast(@alignCast(_arr.data));
        for (0.._arr.len) |j|
            _ret[j] = .{ .ptr = _data_val[j] };
        return _ret;
    }

    /// ### DEPRECATED: Use `standaloneBookmark` instead
    ///
    pub const StandaloneBookmark = standaloneBookmark;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#standaloneBookmark)
    ///
    /// ## Parameter(s):
    ///
    /// ` _text: []const u8 `
    ///
    /// ` _url: QUrl `
    ///
    /// ` _icon: []const u8 `
    ///
    pub fn standaloneBookmark(_text: []const u8, _url: anytype, _icon: []const u8) KBookmark {
        const text_str = qtc.libqt_string{
            .len = _text.len,
            .data = _text.ptr,
        };
        comptime _ = @TypeOf(_url)._is_QUrl;
        const icon_str = qtc.libqt_string{
            .len = _icon.len,
            .data = _icon.ptr,
        };
        return .{ .ptr = qtc.KBookmark_StandaloneBookmark(text_str, @ptrCast(_url.ptr), icon_str) };
    }

    /// ### DEPRECATED: Use `isGroup` instead
    ///
    pub const IsGroup = isGroup;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn isGroup(self: KBookmarkGroup) bool {
        return qtc.KBookmark_IsGroup(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isSeparator` instead
    ///
    pub const IsSeparator = isSeparator;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isSeparator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn isSeparator(self: KBookmarkGroup) bool {
        return qtc.KBookmark_IsSeparator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isNull` instead
    ///
    pub const IsNull = isNull;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#isNull)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn isNull(self: KBookmarkGroup) bool {
        return qtc.KBookmark_IsNull(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `hasParent` instead
    ///
    pub const HasParent = hasParent;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#hasParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn hasParent(self: KBookmarkGroup) bool {
        return qtc.KBookmark_HasParent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `text` instead
    ///
    pub const Text = text;

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
    pub fn text(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Text(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.text: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `fullText` instead
    ///
    pub const FullText = fullText;

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
    pub fn fullText(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_FullText(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.fullText: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setFullText` instead
    ///
    pub const SetFullText = setFullText;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setFullText)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` _fullText: []const u8 `
    ///
    pub fn setFullText(self: KBookmarkGroup, _fullText: []const u8) void {
        const fullText_str = qtc.libqt_string{
            .len = _fullText.len,
            .data = _fullText.ptr,
        };
        qtc.KBookmark_SetFullText(@ptrCast(self.ptr), fullText_str);
    }

    /// ### DEPRECATED: Use `url` instead
    ///
    pub const Url = url;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#url)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn url(self: KBookmarkGroup) QUrl {
        return .{ .ptr = qtc.KBookmark_Url(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `setUrl` instead
    ///
    pub const SetUrl = setUrl;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setUrl)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` _url: QUrl `
    ///
    pub fn setUrl(self: KBookmarkGroup, _url: anytype) void {
        comptime _ = @TypeOf(_url)._is_QUrl;
        qtc.KBookmark_SetUrl(@ptrCast(self.ptr), @ptrCast(_url.ptr));
    }

    /// ### DEPRECATED: Use `icon` instead
    ///
    pub const Icon = icon;

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
    pub fn icon(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Icon(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.icon: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setIcon` instead
    ///
    pub const SetIcon = setIcon;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setIcon)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` _icon: []const u8 `
    ///
    pub fn setIcon(self: KBookmarkGroup, _icon: []const u8) void {
        const icon_str = qtc.libqt_string{
            .len = _icon.len,
            .data = _icon.ptr,
        };
        qtc.KBookmark_SetIcon(@ptrCast(self.ptr), icon_str);
    }

    /// ### DEPRECATED: Use `description` instead
    ///
    pub const Description = description;

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
    pub fn description(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Description(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.description: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setDescription` instead
    ///
    pub const SetDescription = setDescription;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setDescription)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` _description: []const u8 `
    ///
    pub fn setDescription(self: KBookmarkGroup, _description: []const u8) void {
        const description_str = qtc.libqt_string{
            .len = _description.len,
            .data = _description.ptr,
        };
        qtc.KBookmark_SetDescription(@ptrCast(self.ptr), description_str);
    }

    /// ### DEPRECATED: Use `mimeType` instead
    ///
    pub const MimeType = mimeType;

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
    pub fn mimeType(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_MimeType(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.mimeType: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMimeType` instead
    ///
    pub const SetMimeType = setMimeType;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#setMimeType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    /// ` _mimeType: []const u8 `
    ///
    pub fn setMimeType(self: KBookmarkGroup, _mimeType: []const u8) void {
        const mimeType_str = qtc.libqt_string{
            .len = _mimeType.len,
            .data = _mimeType.ptr,
        };
        qtc.KBookmark_SetMimeType(@ptrCast(self.ptr), mimeType_str);
    }

    /// ### DEPRECATED: Use `showInToolbar` instead
    ///
    pub const ShowInToolbar = showInToolbar;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#showInToolbar)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn showInToolbar(self: KBookmarkGroup) bool {
        return qtc.KBookmark_ShowInToolbar(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `setShowInToolbar` instead
    ///
    pub const SetShowInToolbar = setShowInToolbar;

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
    pub fn setShowInToolbar(self: KBookmarkGroup, show: bool) void {
        qtc.KBookmark_SetShowInToolbar(@ptrCast(self.ptr), show);
    }

    /// ### DEPRECATED: Use `parentGroup` instead
    ///
    pub const ParentGroup = parentGroup;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#parentGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn parentGroup(self: KBookmarkGroup) KBookmarkGroup {
        return .{ .ptr = qtc.KBookmark_ParentGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `toGroup` instead
    ///
    pub const ToGroup = toGroup;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#toGroup)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn toGroup(self: KBookmarkGroup) KBookmarkGroup {
        return .{ .ptr = qtc.KBookmark_ToGroup(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `address` instead
    ///
    pub const Address = address;

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
    pub fn address(self: KBookmarkGroup, allocator: std.mem.Allocator) []const u8 {
        var _str = qtc.KBookmark_Address(@ptrCast(self.ptr));
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.address: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `positionInParent` instead
    ///
    pub const PositionInParent = positionInParent;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn positionInParent(self: KBookmarkGroup) i32 {
        return qtc.KBookmark_PositionInParent(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `internalElement` instead
    ///
    pub const InternalElement = internalElement;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#internalElement)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn internalElement(self: KBookmarkGroup) QDomElement {
        return .{ .ptr = qtc.KBookmark_InternalElement(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `updateAccessMetadata` instead
    ///
    pub const UpdateAccessMetadata = updateAccessMetadata;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#updateAccessMetadata)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn updateAccessMetadata(self: KBookmarkGroup) void {
        qtc.KBookmark_UpdateAccessMetadata(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `parentAddress` instead
    ///
    pub const ParentAddress = parentAddress;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#parentAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _address: []const u8 `
    ///
    pub fn parentAddress(allocator: std.mem.Allocator, _address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = _address.len,
            .data = _address.ptr,
        };
        var _str = qtc.KBookmark_ParentAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.parentAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `positionInParent2` instead
    ///
    pub const PositionInParent2 = positionInParent2;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#positionInParent)
    ///
    /// ## Parameter(s):
    ///
    /// ` _address: []const u8 `
    ///
    pub fn positionInParent2(_address: []const u8) u32 {
        const address_str = qtc.libqt_string{
            .len = _address.len,
            .data = _address.ptr,
        };
        return qtc.KBookmark_PositionInParent2(address_str);
    }

    /// ### DEPRECATED: Use `previousAddress` instead
    ///
    pub const PreviousAddress = previousAddress;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#previousAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _address: []const u8 `
    ///
    pub fn previousAddress(allocator: std.mem.Allocator, _address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = _address.len,
            .data = _address.ptr,
        };
        var _str = qtc.KBookmark_PreviousAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.previousAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `nextAddress` instead
    ///
    pub const NextAddress = nextAddress;

    /// Inherited from KBookmark
    ///
    /// ### [Upstream resources](https://api.kde.org/kbookmark.html#nextAddress)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    /// ` _address: []const u8 `
    ///
    pub fn nextAddress(allocator: std.mem.Allocator, _address: []const u8) []const u8 {
        const address_str = qtc.libqt_string{
            .len = _address.len,
            .data = _address.ptr,
        };
        var _str = qtc.KBookmark_NextAddress(address_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.nextAddress: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `commonParent` instead
    ///
    pub const CommonParent = commonParent;

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
    pub fn commonParent(allocator: std.mem.Allocator, A: []const u8, B: []const u8) []const u8 {
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
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.commonParent: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `metaData` instead
    ///
    pub const MetaData = metaData;

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
    pub fn metaData(self: KBookmarkGroup, owner: []const u8, create: bool) QDomNode {
        const owner_str = qtc.libqt_string{
            .len = owner.len,
            .data = owner.ptr,
        };
        return .{ .ptr = qtc.KBookmark_MetaData(@ptrCast(self.ptr), owner_str, create) };
    }

    /// ### DEPRECATED: Use `metaDataItem` instead
    ///
    pub const MetaDataItem = metaDataItem;

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
    pub fn metaDataItem(self: KBookmarkGroup, allocator: std.mem.Allocator, key: []const u8) []const u8 {
        const key_str = qtc.libqt_string{
            .len = key.len,
            .data = key.ptr,
        };
        var _str = qtc.KBookmark_MetaDataItem(@ptrCast(self.ptr), key_str);
        defer qtc.libqt_string_free(&_str);
        const _ret = allocator.alloc(u8, _str.len) catch @panic("KBookmarkGroup.metaDataItem: Memory allocation failed");
        @memcpy(_ret, _str.data[0.._str.len]);
        return _ret;
    }

    /// ### DEPRECATED: Use `setMetaDataItem` instead
    ///
    pub const SetMetaDataItem = setMetaDataItem;

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
    pub fn setMetaDataItem(self: KBookmarkGroup, key: []const u8, value: []const u8) void {
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

    /// ### DEPRECATED: Use `populateMimeData` instead
    ///
    pub const PopulateMimeData = populateMimeData;

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
    pub fn populateMimeData(self: KBookmarkGroup, mimeData: anytype) void {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        qtc.KBookmark_PopulateMimeData(@ptrCast(self.ptr), @ptrCast(mimeData.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

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
    pub fn operatorEqual(self: KBookmarkGroup, rhs: anytype) bool {
        comptime _ = @TypeOf(rhs)._is_KBookmark;
        return qtc.KBookmark_OperatorEqual(@ptrCast(self.ptr), @ptrCast(rhs.ptr));
    }

    /// ### DEPRECATED: Use `setMetaDataItem3` instead
    ///
    pub const SetMetaDataItem3 = setMetaDataItem3;

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
    pub fn setMetaDataItem3(self: KBookmarkGroup, key: []const u8, value: []const u8, mode: i32) void {
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

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://api.kde.org/kbookmarkgroup.html#dtor.KBookmarkGroup)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmarkGroup `
    ///
    pub fn delete(self: KBookmarkGroup) void {
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

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new KBookmark::List object in C++ memory
    ///
    pub fn new() KBookmark__List {
        return .{ .ptr = qtc.KBookmark__List_new() };
    }

    /// ### DEPRECATED: Use `populateMimeData` instead
    ///
    pub const PopulateMimeData = populateMimeData;

    /// ### [Upstream resources](https://api.kde.org/kbookmark-list.html#populateMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: KBookmark__List `
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn populateMimeData(self: KBookmark__List, mimeData: anytype) void {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        qtc.KBookmark__List_PopulateMimeData(@ptrCast(self.ptr), @ptrCast(mimeData.ptr));
    }

    /// ### DEPRECATED: Use `canDecode` instead
    ///
    pub const CanDecode = canDecode;

    /// ### [Upstream resources](https://api.kde.org/kbookmark-list.html#canDecode)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    pub fn canDecode(mimeData: anytype) bool {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        return qtc.KBookmark__List_CanDecode(@ptrCast(mimeData.ptr));
    }

    /// ### DEPRECATED: Use `mimeDataTypes` instead
    ///
    pub const MimeDataTypes = mimeDataTypes;

    /// ### [Upstream resources](https://api.kde.org/kbookmark-list.html#mimeDataTypes)
    ///
    /// ## Parameter(s):
    ///
    /// ` allocator: std.mem.Allocator `
    ///
    pub fn mimeDataTypes(allocator: std.mem.Allocator) []const []const u8 {
        const _arr: qtc.libqt_list = qtc.KBookmark__List_MimeDataTypes();
        var _str: [*]qtc.libqt_string = @ptrCast(@alignCast(_arr.data));
        defer {
            for (0.._arr.len) |i|
                qtc.libqt_string_free(@ptrCast(&_str[i]));
            qtc.libqt_free(_arr.data);
        }
        const _ret = allocator.alloc([]const u8, _arr.len) catch @panic("KBookmark__List.mimeDataTypes: Memory allocation failed");
        for (0.._arr.len) |i| {
            const _data_val = _str[i];
            const _buf = allocator.alloc(u8, _data_val.len) catch @panic("KBookmark__List.mimeDataTypes: Memory allocation failed");
            @memcpy(_buf, _data_val.data[0.._data_val.len]);
            _ret[i] = _buf;
        }
        return _ret;
    }

    /// ### DEPRECATED: Use `fromMimeData` instead
    ///
    pub const FromMimeData = fromMimeData;

    /// ### [Upstream resources](https://api.kde.org/kbookmark-list.html#fromMimeData)
    ///
    /// ## Parameter(s):
    ///
    /// ` mimeData: QMimeData `
    ///
    /// ` parentDocument: QDomDocument `
    ///
    pub fn fromMimeData(mimeData: anytype, parentDocument: anytype) KBookmark__List {
        comptime _ = @TypeOf(mimeData)._is_QMimeData;
        comptime _ = @TypeOf(parentDocument)._is_QDomDocument;
        return .{ .ptr = qtc.KBookmark__List_FromMimeData(@ptrCast(mimeData.ptr), @ptrCast(parentDocument.ptr)) };
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: KBookmark__List `
    ///
    pub fn delete(self: KBookmark__List) void {
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
