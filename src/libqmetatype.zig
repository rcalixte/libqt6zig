const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const QDataStream = @import("libqt6").QDataStream;
const QDebug = @import("libqt6").QDebug;
const QMetaObject = @import("libqt6").QMetaObject;
const QPartialOrdering = @import("libqt6").QPartialOrdering;
const qmetatype_enums = enums;
const std = @import("std");

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html)
pub const QMetaType = extern struct {
    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.QMetaType,

    pub const _is_QMetaType = {};

    /// ### DEPRECATED: Use `new` instead
    ///
    pub const New = new;

    /// Allocate a new QMetaType object in C++ memory
    ///
    pub fn new() QMetaType {
        return .{ .ptr = qtc.QMetaType_new() };
    }

    /// ### DEPRECATED: Use `new2` instead
    ///
    pub const New2 = new2;

    /// Allocate a new QMetaType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaType `
    ///
    pub fn new2(other: anytype) QMetaType {
        comptime _ = @TypeOf(other)._is_QMetaType;
        return .{ .ptr = qtc.QMetaType_new2(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new3` instead
    ///
    pub const New3 = new3;

    /// Allocate a new QMetaType object and invalidate the source QMetaType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` other: QMetaType `
    ///
    pub fn new3(other: anytype) QMetaType {
        comptime _ = @TypeOf(other)._is_QMetaType;
        return .{ .ptr = qtc.QMetaType_new3(@ptrCast(other.ptr)) };
    }

    /// ### DEPRECATED: Use `new4` instead
    ///
    pub const New4 = new4;

    /// Allocate a new QMetaType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn new4(typeVal: i32) QMetaType {
        return .{ .ptr = qtc.QMetaType_new4(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `new5` instead
    ///
    pub const New5 = new5;

    /// Allocate a new QMetaType object in C++ memory
    ///
    /// ## Parameter(s):
    ///
    /// ` param1: QMetaType `
    ///
    pub fn new5(param1: anytype) QMetaType {
        comptime _ = @TypeOf(param1)._is_QMetaType;
        return .{ .ptr = qtc.QMetaType_new5(@ptrCast(param1.ptr)) };
    }

    /// ### DEPRECATED: Use `copyAssign` instead
    ///
    pub const CopyAssign = copyAssign;
    /// Shallow copy `other` into `self` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaType `
    ///
    /// ` other: QMetaType `
    ///
    pub fn copyAssign(self: QMetaType, other: QMetaType) void {
        qtc.QMetaType_CopyAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `moveAssign` instead
    ///
    pub const MoveAssign = moveAssign;
    /// Move `other` into `self` and invalidate `other` in C++ memory
    ///
    /// ## Parameters:
    ///
    /// ` self: QMetaType `
    ///
    /// ` other: QMetaType `
    ///
    pub fn moveAssign(self: QMetaType, other: QMetaType) void {
        qtc.QMetaType_MoveAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### DEPRECATED: Use `registerNormalizedTypedef` instead
    ///
    pub const RegisterNormalizedTypedef = registerNormalizedTypedef;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#registerNormalizedTypedef)
    ///
    /// ## Parameter(s):
    ///
    /// ` normalizedTypeName: []u8 `
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn registerNormalizedTypedef(normalizedTypeName: []u8, typeVal: anytype) void {
        const normalizedTypeName_str = qtc.libqt_string{
            .len = normalizedTypeName.len,
            .data = normalizedTypeName.ptr,
        };
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        qtc.QMetaType_RegisterNormalizedTypedef(normalizedTypeName_str, @ptrCast(typeVal.ptr));
    }

    /// ### DEPRECATED: Use `type0` instead
    ///
    pub const Type = type0;

    pub const @"type" = type0;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` _typeName: [:0]const u8 `
    ///
    pub fn type0(_typeName: [:0]const u8) i32 {
        const typeName_Cstring = _typeName.ptr;
        return qtc.QMetaType_Type(typeName_Cstring);
    }

    /// ### DEPRECATED: Use `type2` instead
    ///
    pub const Type2 = type2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#type)
    ///
    /// ## Parameter(s):
    ///
    /// ` _typeName: []u8 `
    ///
    pub fn type2(_typeName: []u8) i32 {
        const typeName_str = qtc.libqt_string{
            .len = _typeName.len,
            .data = _typeName.ptr,
        };
        return qtc.QMetaType_Type2(typeName_str);
    }

    /// ### DEPRECATED: Use `typeName` instead
    ///
    pub const TypeName = typeName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#typeName)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn typeName(typeVal: i32) [:0]const u8 {
        const _ret = qtc.QMetaType_TypeName(@bitCast(typeVal));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `sizeOf` instead
    ///
    pub const SizeOf = sizeOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#sizeOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn sizeOf(typeVal: i32) i32 {
        return qtc.QMetaType_SizeOf(@bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `typeFlags` instead
    ///
    pub const TypeFlags = typeFlags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#typeFlags)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ## Returns:
    ///
    /// ` flag of qmetatype_enums.TypeFlag `
    ///
    pub fn typeFlags(typeVal: i32) i32 {
        return qtc.QMetaType_TypeFlags(@bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `metaObjectForType` instead
    ///
    pub const MetaObjectForType = metaObjectForType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#metaObjectForType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn metaObjectForType(typeVal: i32) QMetaObject {
        return .{ .ptr = qtc.QMetaType_MetaObjectForType(@bitCast(typeVal)) };
    }

    /// ### DEPRECATED: Use `create` instead
    ///
    pub const Create = create;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn create(typeVal: i32) ?*anyopaque {
        return qtc.QMetaType_Create(@bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `destroy` instead
    ///
    pub const Destroy = destroy;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn destroy(typeVal: i32, data: ?*anyopaque) void {
        qtc.QMetaType_Destroy(@bitCast(typeVal), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `construct` instead
    ///
    pub const Construct = construct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#construct)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` where: ?*anyopaque `
    ///
    /// ` copy: ?*const anyopaque `
    ///
    pub fn construct(typeVal: i32, where: ?*anyopaque, copy: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaType_Construct(@bitCast(typeVal), @ptrCast(where), @ptrCast(copy));
    }

    /// ### DEPRECATED: Use `destruct` instead
    ///
    pub const Destruct = destruct;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#destruct)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` where: ?*anyopaque `
    ///
    pub fn destruct(typeVal: i32, where: ?*anyopaque) void {
        qtc.QMetaType_Destruct(@bitCast(typeVal), @ptrCast(where));
    }

    /// ### DEPRECATED: Use `isRegistered` instead
    ///
    pub const IsRegistered = isRegistered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isRegistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    pub fn isRegistered(typeVal: i32) bool {
        return qtc.QMetaType_IsRegistered(@bitCast(typeVal));
    }

    /// ### DEPRECATED: Use `isValid` instead
    ///
    pub const IsValid = isValid;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isValid)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn isValid(self: QMetaType) bool {
        return qtc.QMetaType_IsValid(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isRegistered2` instead
    ///
    pub const IsRegistered2 = isRegistered2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isRegistered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn isRegistered2(self: QMetaType) bool {
        return qtc.QMetaType_IsRegistered2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `registerType` instead
    ///
    pub const RegisterType = registerType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#registerType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn registerType(self: QMetaType) void {
        qtc.QMetaType_RegisterType(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `id` instead
    ///
    pub const Id = id;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn id(self: QMetaType) i32 {
        return qtc.QMetaType_Id(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `sizeOf2` instead
    ///
    pub const SizeOf2 = sizeOf2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#sizeOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn sizeOf2(self: QMetaType) isize {
        return qtc.QMetaType_SizeOf2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `alignOf` instead
    ///
    pub const AlignOf = alignOf;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#alignOf)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn alignOf(self: QMetaType) isize {
        return qtc.QMetaType_AlignOf(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `flags` instead
    ///
    pub const Flags = flags;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#flags)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ## Returns:
    ///
    /// ` flag of qmetatype_enums.TypeFlag `
    ///
    pub fn flags(self: QMetaType) i32 {
        return qtc.QMetaType_Flags(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `metaObject` instead
    ///
    pub const MetaObject = metaObject;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qobject.html#metaObject)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn metaObject(self: QMetaType) QMetaObject {
        return .{ .ptr = qtc.QMetaType_MetaObject(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `name` instead
    ///
    pub const Name = name;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#name)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn name(self: QMetaType) [:0]const u8 {
        const _ret = qtc.QMetaType_Name(@ptrCast(self.ptr));
        return std.mem.span(_ret);
    }

    /// ### DEPRECATED: Use `create2` instead
    ///
    pub const Create2 = create2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn create2(self: QMetaType) ?*anyopaque {
        return qtc.QMetaType_Create2(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `destroy2` instead
    ///
    pub const Destroy2 = destroy2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#destroy)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn destroy2(self: QMetaType, data: ?*anyopaque) void {
        qtc.QMetaType_Destroy2(@ptrCast(self.ptr), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `construct2` instead
    ///
    pub const Construct2 = construct2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#construct)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` where: ?*anyopaque `
    ///
    pub fn construct2(self: QMetaType, where: ?*anyopaque) ?*anyopaque {
        return qtc.QMetaType_Construct2(@ptrCast(self.ptr), @ptrCast(where));
    }

    /// ### DEPRECATED: Use `destruct2` instead
    ///
    pub const Destruct2 = destruct2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#destruct)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn destruct2(self: QMetaType, data: ?*anyopaque) void {
        qtc.QMetaType_Destruct2(@ptrCast(self.ptr), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `compare` instead
    ///
    pub const Compare = compare;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` lhs: ?*const anyopaque `
    ///
    /// ` rhs: ?*const anyopaque `
    ///
    pub fn compare(self: QMetaType, lhs: ?*const anyopaque, rhs: ?*const anyopaque) QPartialOrdering {
        return .{ .ptr = qtc.QMetaType_Compare(@ptrCast(self.ptr), @ptrCast(lhs), @ptrCast(rhs)) };
    }

    /// ### DEPRECATED: Use `equals` instead
    ///
    pub const Equals = equals;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#equals)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` lhs: ?*const anyopaque `
    ///
    /// ` rhs: ?*const anyopaque `
    ///
    pub fn equals(self: QMetaType, lhs: ?*const anyopaque, rhs: ?*const anyopaque) bool {
        return qtc.QMetaType_Equals(@ptrCast(self.ptr), @ptrCast(lhs), @ptrCast(rhs));
    }

    /// ### DEPRECATED: Use `isDefaultConstructible` instead
    ///
    pub const IsDefaultConstructible = isDefaultConstructible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isDefaultConstructible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn isDefaultConstructible(self: QMetaType) bool {
        return qtc.QMetaType_IsDefaultConstructible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isCopyConstructible` instead
    ///
    pub const IsCopyConstructible = isCopyConstructible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isCopyConstructible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn isCopyConstructible(self: QMetaType) bool {
        return qtc.QMetaType_IsCopyConstructible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isMoveConstructible` instead
    ///
    pub const IsMoveConstructible = isMoveConstructible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isMoveConstructible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn isMoveConstructible(self: QMetaType) bool {
        return qtc.QMetaType_IsMoveConstructible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isDestructible` instead
    ///
    pub const IsDestructible = isDestructible;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isDestructible)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn isDestructible(self: QMetaType) bool {
        return qtc.QMetaType_IsDestructible(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isEqualityComparable` instead
    ///
    pub const IsEqualityComparable = isEqualityComparable;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isEqualityComparable)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn isEqualityComparable(self: QMetaType) bool {
        return qtc.QMetaType_IsEqualityComparable(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `isOrdered` instead
    ///
    pub const IsOrdered = isOrdered;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#isOrdered)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn isOrdered(self: QMetaType) bool {
        return qtc.QMetaType_IsOrdered(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `save` instead
    ///
    pub const Save = save;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` stream: QDataStream `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn save(self: QMetaType, stream: anytype, data: ?*const anyopaque) bool {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QMetaType_Save(@ptrCast(self.ptr), @ptrCast(stream.ptr), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `load` instead
    ///
    pub const Load = load;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` stream: QDataStream `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn load(self: QMetaType, stream: anytype, data: ?*anyopaque) bool {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QMetaType_Load(@ptrCast(self.ptr), @ptrCast(stream.ptr), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `hasRegisteredDataStreamOperators` instead
    ///
    pub const HasRegisteredDataStreamOperators = hasRegisteredDataStreamOperators;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDataStreamOperators)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn hasRegisteredDataStreamOperators(self: QMetaType) bool {
        return qtc.QMetaType_HasRegisteredDataStreamOperators(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `save2` instead
    ///
    pub const Save2 = save2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#save)
    ///
    /// ## Parameter(s):
    ///
    /// ` stream: QDataStream `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` data: ?*const anyopaque `
    ///
    pub fn save2(stream: anytype, typeVal: i32, data: ?*const anyopaque) bool {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QMetaType_Save2(@ptrCast(stream.ptr), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `load2` instead
    ///
    pub const Load2 = load2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#load)
    ///
    /// ## Parameter(s):
    ///
    /// ` stream: QDataStream `
    ///
    /// ` typeVal: i32 `
    ///
    /// ` data: ?*anyopaque `
    ///
    pub fn load2(stream: anytype, typeVal: i32, data: ?*anyopaque) bool {
        comptime _ = @TypeOf(stream)._is_QDataStream;
        return qtc.QMetaType_Load2(@ptrCast(stream.ptr), @bitCast(typeVal), @ptrCast(data));
    }

    /// ### DEPRECATED: Use `underlyingType` instead
    ///
    pub const UnderlyingType = underlyingType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#underlyingType)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn underlyingType(self: QMetaType) QMetaType {
        return .{ .ptr = qtc.QMetaType_UnderlyingType(@ptrCast(self.ptr)) };
    }

    /// ### DEPRECATED: Use `fromName` instead
    ///
    pub const FromName = fromName;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#fromName)
    ///
    /// ## Parameter(s):
    ///
    /// ` _name: []u8 `
    ///
    pub fn fromName(_name: []u8) QMetaType {
        const name_str = qtc.libqt_string{
            .len = _name.len,
            .data = _name.ptr,
        };
        return .{ .ptr = qtc.QMetaType_FromName(name_str) };
    }

    /// ### DEPRECATED: Use `debugStream` instead
    ///
    pub const DebugStream = debugStream;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#debugStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` dbg: QDebug `
    ///
    /// ` rhs: ?*const anyopaque `
    ///
    pub fn debugStream(self: QMetaType, dbg: anytype, rhs: ?*const anyopaque) bool {
        comptime _ = @TypeOf(dbg)._is_QDebug;
        return qtc.QMetaType_DebugStream(@ptrCast(self.ptr), @ptrCast(dbg.ptr), @ptrCast(rhs));
    }

    /// ### DEPRECATED: Use `hasRegisteredDebugStreamOperator` instead
    ///
    pub const HasRegisteredDebugStreamOperator = hasRegisteredDebugStreamOperator;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDebugStreamOperator)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    pub fn hasRegisteredDebugStreamOperator(self: QMetaType) bool {
        return qtc.QMetaType_HasRegisteredDebugStreamOperator(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `debugStream2` instead
    ///
    pub const DebugStream2 = debugStream2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#debugStream)
    ///
    /// ## Parameter(s):
    ///
    /// ` dbg: QDebug `
    ///
    /// ` rhs: ?*const anyopaque `
    ///
    /// ` typeId: i32 `
    ///
    pub fn debugStream2(dbg: anytype, rhs: ?*const anyopaque, typeId: i32) bool {
        comptime _ = @TypeOf(dbg)._is_QDebug;
        return qtc.QMetaType_DebugStream2(@ptrCast(dbg.ptr), @ptrCast(rhs), @bitCast(typeId));
    }

    /// ### DEPRECATED: Use `hasRegisteredDebugStreamOperator2` instead
    ///
    pub const HasRegisteredDebugStreamOperator2 = hasRegisteredDebugStreamOperator2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredDebugStreamOperator)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeId: i32 `
    ///
    pub fn hasRegisteredDebugStreamOperator2(typeId: i32) bool {
        return qtc.QMetaType_HasRegisteredDebugStreamOperator2(@bitCast(typeId));
    }

    /// ### DEPRECATED: Use `convert` instead
    ///
    pub const Convert = convert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` fromType: QMetaType `
    ///
    /// ` from: ?*const anyopaque `
    ///
    /// ` toType: QMetaType `
    ///
    /// ` to: ?*anyopaque `
    ///
    pub fn convert(fromType: anytype, from: ?*const anyopaque, toType: anytype, to: ?*anyopaque) bool {
        comptime _ = @TypeOf(fromType)._is_QMetaType;
        comptime _ = @TypeOf(toType)._is_QMetaType;
        return qtc.QMetaType_Convert(@ptrCast(fromType.ptr), @ptrCast(from), @ptrCast(toType.ptr), @ptrCast(to));
    }

    /// ### DEPRECATED: Use `canConvert` instead
    ///
    pub const CanConvert = canConvert;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#canConvert)
    ///
    /// ## Parameter(s):
    ///
    /// ` fromType: QMetaType `
    ///
    /// ` toType: QMetaType `
    ///
    pub fn canConvert(fromType: anytype, toType: anytype) bool {
        comptime _ = @TypeOf(fromType)._is_QMetaType;
        comptime _ = @TypeOf(toType)._is_QMetaType;
        return qtc.QMetaType_CanConvert(@ptrCast(fromType.ptr), @ptrCast(toType.ptr));
    }

    /// ### DEPRECATED: Use `view` instead
    ///
    pub const View = view;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#view)
    ///
    /// ## Parameter(s):
    ///
    /// ` fromType: QMetaType `
    ///
    /// ` from: ?*anyopaque `
    ///
    /// ` toType: QMetaType `
    ///
    /// ` to: ?*anyopaque `
    ///
    pub fn view(fromType: anytype, from: ?*anyopaque, toType: anytype, to: ?*anyopaque) bool {
        comptime _ = @TypeOf(fromType)._is_QMetaType;
        comptime _ = @TypeOf(toType)._is_QMetaType;
        return qtc.QMetaType_View(@ptrCast(fromType.ptr), @ptrCast(from), @ptrCast(toType.ptr), @ptrCast(to));
    }

    /// ### DEPRECATED: Use `canView` instead
    ///
    pub const CanView = canView;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#canView)
    ///
    /// ## Parameter(s):
    ///
    /// ` fromType: QMetaType `
    ///
    /// ` toType: QMetaType `
    ///
    pub fn canView(fromType: anytype, toType: anytype) bool {
        comptime _ = @TypeOf(fromType)._is_QMetaType;
        comptime _ = @TypeOf(toType)._is_QMetaType;
        return qtc.QMetaType_CanView(@ptrCast(fromType.ptr), @ptrCast(toType.ptr));
    }

    /// ### DEPRECATED: Use `convert2` instead
    ///
    pub const Convert2 = convert2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#convert)
    ///
    /// ## Parameter(s):
    ///
    /// ` from: ?*const anyopaque `
    ///
    /// ` fromTypeId: i32 `
    ///
    /// ` to: ?*anyopaque `
    ///
    /// ` toTypeId: i32 `
    ///
    pub fn convert2(from: ?*const anyopaque, fromTypeId: i32, to: ?*anyopaque, toTypeId: i32) bool {
        return qtc.QMetaType_Convert2(@ptrCast(from), @bitCast(fromTypeId), @ptrCast(to), @bitCast(toTypeId));
    }

    /// ### DEPRECATED: Use `compare2` instead
    ///
    pub const Compare2 = compare2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#compare)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: ?*const anyopaque `
    ///
    /// ` rhs: ?*const anyopaque `
    ///
    /// ` typeId: i32 `
    ///
    /// ` result: *i32 `
    ///
    pub fn compare2(lhs: ?*const anyopaque, rhs: ?*const anyopaque, typeId: i32, result: *i32) bool {
        return qtc.QMetaType_Compare2(@ptrCast(lhs), @ptrCast(rhs), @bitCast(typeId), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `equals2` instead
    ///
    pub const Equals2 = equals2;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#equals)
    ///
    /// ## Parameter(s):
    ///
    /// ` lhs: ?*const anyopaque `
    ///
    /// ` rhs: ?*const anyopaque `
    ///
    /// ` typeId: i32 `
    ///
    /// ` result: *i32 `
    ///
    pub fn equals2(lhs: ?*const anyopaque, rhs: ?*const anyopaque, typeId: i32, result: *i32) bool {
        return qtc.QMetaType_Equals2(@ptrCast(lhs), @ptrCast(rhs), @bitCast(typeId), @ptrCast(result));
    }

    /// ### DEPRECATED: Use `hasRegisteredConverterFunction` instead
    ///
    pub const HasRegisteredConverterFunction = hasRegisteredConverterFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredConverterFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` fromType: QMetaType `
    ///
    /// ` toType: QMetaType `
    ///
    pub fn hasRegisteredConverterFunction(fromType: anytype, toType: anytype) bool {
        comptime _ = @TypeOf(fromType)._is_QMetaType;
        comptime _ = @TypeOf(toType)._is_QMetaType;
        return qtc.QMetaType_HasRegisteredConverterFunction(@ptrCast(fromType.ptr), @ptrCast(toType.ptr));
    }

    /// ### DEPRECATED: Use `hasRegisteredMutableViewFunction` instead
    ///
    pub const HasRegisteredMutableViewFunction = hasRegisteredMutableViewFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#hasRegisteredMutableViewFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` fromType: QMetaType `
    ///
    /// ` toType: QMetaType `
    ///
    pub fn hasRegisteredMutableViewFunction(fromType: anytype, toType: anytype) bool {
        comptime _ = @TypeOf(fromType)._is_QMetaType;
        comptime _ = @TypeOf(toType)._is_QMetaType;
        return qtc.QMetaType_HasRegisteredMutableViewFunction(@ptrCast(fromType.ptr), @ptrCast(toType.ptr));
    }

    /// ### DEPRECATED: Use `registerConverterFunction` instead
    ///
    pub const RegisterConverterFunction = registerConverterFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#registerConverterFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: *const fn (funcparam1: ?*const anyopaque, funcparam2: ?*anyopaque) callconv(.c) bool `
    ///
    /// ` from: QMetaType `
    ///
    /// ` to: QMetaType `
    ///
    pub fn registerConverterFunction(f: *const fn (?*const anyopaque, ?*anyopaque) callconv(.c) bool, from: anytype, to: anytype) bool {
        comptime _ = @TypeOf(from)._is_QMetaType;
        comptime _ = @TypeOf(to)._is_QMetaType;
        return qtc.QMetaType_RegisterConverterFunction(@bitCast(@intFromPtr(f)), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `unregisterConverterFunction` instead
    ///
    pub const UnregisterConverterFunction = unregisterConverterFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#unregisterConverterFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` from: QMetaType `
    ///
    /// ` to: QMetaType `
    ///
    pub fn unregisterConverterFunction(from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QMetaType;
        comptime _ = @TypeOf(to)._is_QMetaType;
        qtc.QMetaType_UnregisterConverterFunction(@ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `registerMutableViewFunction` instead
    ///
    pub const RegisterMutableViewFunction = registerMutableViewFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#registerMutableViewFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` f: *const fn (funcparam1: ?*anyopaque, funcparam2: ?*anyopaque) callconv(.c) bool `
    ///
    /// ` from: QMetaType `
    ///
    /// ` to: QMetaType `
    ///
    pub fn registerMutableViewFunction(f: *const fn (?*anyopaque, ?*anyopaque) callconv(.c) bool, from: anytype, to: anytype) bool {
        comptime _ = @TypeOf(from)._is_QMetaType;
        comptime _ = @TypeOf(to)._is_QMetaType;
        return qtc.QMetaType_RegisterMutableViewFunction(@bitCast(@intFromPtr(f)), @ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `unregisterMutableViewFunction` instead
    ///
    pub const UnregisterMutableViewFunction = unregisterMutableViewFunction;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#unregisterMutableViewFunction)
    ///
    /// ## Parameter(s):
    ///
    /// ` from: QMetaType `
    ///
    /// ` to: QMetaType `
    ///
    pub fn unregisterMutableViewFunction(from: anytype, to: anytype) void {
        comptime _ = @TypeOf(from)._is_QMetaType;
        comptime _ = @TypeOf(to)._is_QMetaType;
        qtc.QMetaType_UnregisterMutableViewFunction(@ptrCast(from.ptr), @ptrCast(to.ptr));
    }

    /// ### DEPRECATED: Use `unregisterMetaType` instead
    ///
    pub const UnregisterMetaType = unregisterMetaType;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#unregisterMetaType)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: QMetaType `
    ///
    pub fn unregisterMetaType(typeVal: anytype) void {
        comptime _ = @TypeOf(typeVal)._is_QMetaType;
        qtc.QMetaType_UnregisterMetaType(@ptrCast(typeVal.ptr));
    }

    /// ### DEPRECATED: Use `create22` instead
    ///
    pub const Create22 = create22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` typeVal: i32 `
    ///
    /// ` copy: ?*const anyopaque `
    ///
    pub fn create22(typeVal: i32, copy: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaType_Create22(@bitCast(typeVal), @ptrCast(copy));
    }

    /// ### DEPRECATED: Use `id1` instead
    ///
    pub const Id1 = id1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#id)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` param1: i32 `
    ///
    pub fn id1(self: QMetaType, param1: i32) i32 {
        return qtc.QMetaType_Id1(@ptrCast(self.ptr), @bitCast(param1));
    }

    /// ### DEPRECATED: Use `create1` instead
    ///
    pub const Create1 = create1;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#create)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` copy: ?*const anyopaque `
    ///
    pub fn create1(self: QMetaType, copy: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaType_Create1(@ptrCast(self.ptr), @ptrCast(copy));
    }

    /// ### DEPRECATED: Use `construct22` instead
    ///
    pub const Construct22 = construct22;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#construct)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QMetaType `
    ///
    /// ` where: ?*anyopaque `
    ///
    /// ` copy: ?*const anyopaque `
    ///
    pub fn construct22(self: QMetaType, where: ?*anyopaque, copy: ?*const anyopaque) ?*anyopaque {
        return qtc.QMetaType_Construct22(@ptrCast(self.ptr), @ptrCast(where), @ptrCast(copy));
    }

    /// ### DEPRECATED: Use `delete` instead
    ///
    pub const Delete = delete;

    /// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#dtor.QMetaType)
    ///
    /// Delete this object from C++ memory
    ///
    /// ## Parameter:
    ///
    /// ` self: QMetaType `
    ///
    pub fn delete(self: QMetaType) void {
        qtc.QMetaType_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://doc.qt.io/qt-6/qmetatype.html#public-types)
pub const enums = struct {
    pub const QCborSimpleType = enum(u8) { _ };

    pub const Type = enum {
        pub const Bool: i32 = 1;
        pub const Int: i32 = 2;
        pub const UInt: i32 = 3;
        pub const LongLong: i32 = 4;
        pub const ULongLong: i32 = 5;
        pub const Double: i32 = 6;
        pub const Long: i32 = 32;
        pub const Short: i32 = 33;
        pub const Char: i32 = 34;
        pub const Char16: i32 = 56;
        pub const Char32: i32 = 57;
        pub const ULong: i32 = 35;
        pub const UShort: i32 = 36;
        pub const UChar: i32 = 37;
        pub const Float: i32 = 38;
        pub const SChar: i32 = 40;
        pub const Nullptr: i32 = 51;
        pub const QCborSimpleType: i32 = 52;
        pub const Void: i32 = 43;
        pub const VoidStar: i32 = 31;
        pub const QChar: i32 = 7;
        pub const QString: i32 = 10;
        pub const QByteArray: i32 = 12;
        pub const QBitArray: i32 = 13;
        pub const QDate: i32 = 14;
        pub const QTime: i32 = 15;
        pub const QDateTime: i32 = 16;
        pub const QUrl: i32 = 17;
        pub const QLocale: i32 = 18;
        pub const QRect: i32 = 19;
        pub const QRectF: i32 = 20;
        pub const QSize: i32 = 21;
        pub const QSizeF: i32 = 22;
        pub const QLine: i32 = 23;
        pub const QLineF: i32 = 24;
        pub const QPoint: i32 = 25;
        pub const QPointF: i32 = 26;
        pub const QEasingCurve: i32 = 29;
        pub const QUuid: i32 = 30;
        pub const QVariant: i32 = 41;
        pub const QRegularExpression: i32 = 44;
        pub const QJsonValue: i32 = 45;
        pub const QJsonObject: i32 = 46;
        pub const QJsonArray: i32 = 47;
        pub const QJsonDocument: i32 = 48;
        pub const QCborValue: i32 = 53;
        pub const QCborArray: i32 = 54;
        pub const QCborMap: i32 = 55;
        pub const Float16: i32 = 63;
        pub const QModelIndex: i32 = 42;
        pub const QPersistentModelIndex: i32 = 50;
        pub const QObjectStar: i32 = 39;
        pub const QVariantMap: i32 = 8;
        pub const QVariantList: i32 = 9;
        pub const QVariantHash: i32 = 28;
        pub const QVariantPair: i32 = 58;
        pub const QByteArrayList: i32 = 49;
        pub const QStringList: i32 = 11;
        pub const QFont: i32 = 4096;
        pub const QPixmap: i32 = 4097;
        pub const QBrush: i32 = 4098;
        pub const QColor: i32 = 4099;
        pub const QPalette: i32 = 4100;
        pub const QIcon: i32 = 4101;
        pub const QImage: i32 = 4102;
        pub const QPolygon: i32 = 4103;
        pub const QRegion: i32 = 4104;
        pub const QBitmap: i32 = 4105;
        pub const QCursor: i32 = 4106;
        pub const QKeySequence: i32 = 4107;
        pub const QPen: i32 = 4108;
        pub const QTextLength: i32 = 4109;
        pub const QTextFormat: i32 = 4110;
        pub const QTransform: i32 = 4112;
        pub const QMatrix4x4: i32 = 4113;
        pub const QVector2D: i32 = 4114;
        pub const QVector3D: i32 = 4115;
        pub const QVector4D: i32 = 4116;
        pub const QQuaternion: i32 = 4117;
        pub const QPolygonF: i32 = 4118;
        pub const QColorSpace: i32 = 4119;
        pub const QSizePolicy: i32 = 8192;
        pub const FirstCoreType: i32 = 1;
        pub const LastCoreType: i32 = 63;
        pub const FirstGuiType: i32 = 4096;
        pub const LastGuiType: i32 = 4119;
        pub const FirstWidgetsType: i32 = 8192;
        pub const LastWidgetsType: i32 = 8192;
        pub const HighestInternalId: i32 = 8192;
        pub const QReal: i32 = 6;
        pub const UnknownType: i32 = 0;
        pub const User: i32 = 65536;
    };

    pub const TypeFlag = enum {
        pub const NeedsConstruction: i32 = 1;
        pub const NeedsDestruction: i32 = 2;
        pub const RelocatableType: i32 = 4;
        pub const MovableType: i32 = 4;
        pub const PointerToQObject: i32 = 8;
        pub const IsEnumeration: i32 = 16;
        pub const SharedPointerToQObject: i32 = 32;
        pub const WeakPointerToQObject: i32 = 64;
        pub const TrackingPointerToQObject: i32 = 128;
        pub const IsUnsignedEnumeration: i32 = 256;
        pub const IsGadget: i32 = 512;
        pub const PointerToGadget: i32 = 1024;
        pub const IsPointer: i32 = 2048;
        pub const IsQmlList: i32 = 4096;
        pub const IsConst: i32 = 8192;
        pub const NeedsCopyConstruction: i32 = 16384;
        pub const NeedsMoveConstruction: i32 = 32768;
    };
};
