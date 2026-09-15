const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QMetaObject = @import("libqt6").QMetaObject;
const QObject = @import("libqt6").QObject;
const QQmlEngine = @import("libqt6").QQmlEngine;
const QVariant = @import("libqt6").QVariant;

/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)
pub const QQmlListReference = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QQmlListReference,

    pub const _is_QQmlListReference = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QQmlListReference object in C++ memory
    ///
    pub fn new() QQmlListReference {
        return .{ .ptr = qtc.QQmlListReference_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QQmlListReference object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn new2(variant: anytype) QQmlListReference {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QQmlListReference_new2(@ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QQmlListReference object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QObject `
    ///
    /// ` property: [:0]const u8 `
    ///
    pub fn new3(o: anytype, property: [:0]const u8) QQmlListReference {
        comptime _ = @TypeOf(o)._is_QObject;
        const property_Cstring = property.ptr;
        return .{ .ptr = qtc.QQmlListReference_new3(@ptrCast(o.ptr), property_Cstring) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QQmlListReference object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    pub fn new4(variant: anytype) QQmlListReference {
        comptime _ = @TypeOf(variant)._is_QVariant;
        return .{ .ptr = qtc.QQmlListReference_new4(@ptrCast(variant.ptr)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QQmlListReference object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QObject `
    ///
    /// ` property: [:0]const u8 `
    ///
    pub fn new5(o: anytype, property: [:0]const u8) QQmlListReference {
        comptime _ = @TypeOf(o)._is_QObject;
        const property_Cstring = property.ptr;
        return .{ .ptr = qtc.QQmlListReference_new5(@ptrCast(o.ptr), property_Cstring) };
    }

    /// ### DEPRECATED: Use `new6` instead
    ///
    pub const New6 = new6;

    /// Allocate a new QQmlListReference object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QQmlListReference `
    ///
    pub fn new6(param1: anytype) QQmlListReference {
        comptime _ = @TypeOf(param1)._is_QQmlListReference;
        return .{ .ptr = qtc.QQmlListReference_new6(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `new7` instead
    ///
    pub const New7 = new7;

    /// Allocate a new QQmlListReference object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` variant: QVariant `
    ///
    /// ` engine: QQmlEngine `
    ///
    pub fn new7(variant: anytype, engine: anytype) QQmlListReference {
        comptime _ = @TypeOf(variant)._is_QVariant;
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        return .{ .ptr = qtc.QQmlListReference_new7(@ptrCast(variant.ptr), @ptrCast(engine.ptr)) };
    }

    /// ### DEPRECATED: Use `new8` instead
    ///
    pub const New8 = new8;

    /// Allocate a new QQmlListReference object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` o: QObject `
    ///
    /// ` property: [:0]const u8 `
    ///
    /// ` engine: QQmlEngine `
    ///
    pub fn new8(o: anytype, property: [:0]const u8, engine: anytype) QQmlListReference {
        comptime _ = @TypeOf(o)._is_QObject;
        const property_Cstring = property.ptr;
        comptime _ = @TypeOf(engine)._is_QQmlEngine;
        return .{ .ptr = qtc.QQmlListReference_new8(@ptrCast(o.ptr), property_Cstring, @ptrCast(engine.ptr)) };
    }

    /// ### DEPRECATED: Use `operatorAssign` instead
    ///
    pub const OperatorAssign = operatorAssign;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#operator-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    /// ` param1: QQmlListReference `
    ///
    pub fn operatorAssign(self: QQmlListReference, param1: anytype) void {
        comptime _ = @TypeOf(param1)._is_QQmlListReference;
        qtc.QQmlListReference_OperatorAssign(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn isValid(self: QQmlListReference) bool {
        return qtc.QQmlListReference_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `object` instead
    ///
    pub const Object = object;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#object)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn object(self: QQmlListReference) QObject {
        return .{ .ptr = qtc.QQmlListReference_Object(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `listElementType` instead
    ///
    pub const ListElementType = listElementType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#listElementType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn listElementType(self: QQmlListReference) QMetaObject {
        return .{ .ptr = qtc.QQmlListReference_ListElementType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `canAppend` instead
    ///
    pub const CanAppend = canAppend;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canAppend)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn canAppend(self: QQmlListReference) bool {
        return qtc.QQmlListReference_CanAppend(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canAt` instead
    ///
    pub const CanAt = canAt;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canAt)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn canAt(self: QQmlListReference) bool {
        return qtc.QQmlListReference_CanAt(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canClear` instead
    ///
    pub const CanClear = canClear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canClear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn canClear(self: QQmlListReference) bool {
        return qtc.QQmlListReference_CanClear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canCount` instead
    ///
    pub const CanCount = canCount;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canCount)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn canCount(self: QQmlListReference) bool {
        return qtc.QQmlListReference_CanCount(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canReplace` instead
    ///
    pub const CanReplace = canReplace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canReplace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn canReplace(self: QQmlListReference) bool {
        return qtc.QQmlListReference_CanReplace(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `canRemoveLast` instead
    ///
    pub const CanRemoveLast = canRemoveLast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#canRemoveLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn canRemoveLast(self: QQmlListReference) bool {
        return qtc.QQmlListReference_CanRemoveLast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isManipulable` instead
    ///
    pub const IsManipulable = isManipulable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#isManipulable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn isManipulable(self: QQmlListReference) bool {
        return qtc.QQmlListReference_IsManipulable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isReadable` instead
    ///
    pub const IsReadable = isReadable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#isReadable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn isReadable(self: QQmlListReference) bool {
        return qtc.QQmlListReference_IsReadable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `append` instead
    ///
    pub const Append = append;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#append)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    /// ` param1: QObject `
    ///
    pub fn append(self: QQmlListReference, param1: anytype) bool {
        comptime _ = @TypeOf(param1)._is_QObject;
        return qtc.QQmlListReference_Append(@ptrCast(self.ptr), @ptrCast(param1.ptr));
    }

    /// ### DEPRECATED: Use `at` instead
    ///
    pub const At = at;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#at)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    /// ` param1: isize `
    ///
    pub fn at(self: QQmlListReference, param1: isize) QObject {
        return .{ .ptr = qtc.QQmlListReference_At(@ptrCast(self.ptr), @bitCast(param1)) };
    }

    /// ### DEPRECATED: Use `clear` instead
    ///
    pub const Clear = clear;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#clear)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn clear(self: QQmlListReference) bool {
        return qtc.QQmlListReference_Clear(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `count` instead
    ///
    pub const Count = count;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#count)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn count(self: QQmlListReference) isize {
        return qtc.QQmlListReference_Count(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `size` instead
    ///
    pub const Size = size;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#size)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn size(self: QQmlListReference) isize {
        return qtc.QQmlListReference_Size(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `replace` instead
    ///
    pub const Replace = replace;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#replace)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    /// ` param1: isize `
    ///
    /// ` param2: QObject `
    ///
    pub fn replace(self: QQmlListReference, param1: isize, param2: anytype) bool {
        comptime _ = @TypeOf(param2)._is_QObject;
        return qtc.QQmlListReference_Replace(@ptrCast(self.ptr), @bitCast(param1), @ptrCast(param2.ptr));
    }

    /// ### DEPRECATED: Use `removeLast` instead
    ///
    pub const RemoveLast = removeLast;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#removeLast)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn removeLast(self: QQmlListReference) bool {
        return qtc.QQmlListReference_RemoveLast(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `operatorEqual` instead
    ///
    pub const OperatorEqual = operatorEqual;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#operator-eq-eq)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QQmlListReference `
    ///
    /// ` other: QQmlListReference `
    ///
    pub fn operatorEqual(self: QQmlListReference, other: anytype) bool {
        comptime _ = @TypeOf(other)._is_QQmlListReference;
        return qtc.QQmlListReference_OperatorEqual(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qqmllistreference.html#dtor.QQmlListReference)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QQmlListReference `
    ///
    pub fn delete(self: QQmlListReference) void {
        qtc.QQmlListReference_Delete(@ptrCast(self.ptr));
    }
};
