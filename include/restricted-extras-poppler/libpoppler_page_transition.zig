const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const poppler_page_transition_enums = enums;

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
pub const Poppler__PageTransition = extern struct {
    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// The pointer to the underlying Qt C++ object
    ///
    ptr: QtC.Poppler__PageTransition,

    pub const _is_Poppler__PageTransition = {};

    /// New constructs a new Poppler::PageTransition object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt: Poppler__PageTransition `
    ///
    pub fn New(pt: anytype) Poppler__PageTransition {
        comptime _ = @TypeOf(pt)._is_Poppler__PageTransition;
        return .{ .ptr = qtc.Poppler__PageTransition_new(@ptrCast(pt.ptr)) };
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PageTransition `
    ///
    /// ` other: Poppler__PageTransition `
    ///
    pub fn OperatorAssign(self: Poppler__PageTransition, other: anytype) void {
        comptime _ = @TypeOf(other)._is_Poppler__PageTransition;
        qtc.Poppler__PageTransition_OperatorAssign(@ptrCast(self.ptr), @ptrCast(other.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PageTransition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_page_transition_enums.Type `
    ///
    pub fn Type(self: Poppler__PageTransition) i32 {
        return qtc.Poppler__PageTransition_Type(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PageTransition `
    ///
    pub fn DurationReal(self: Poppler__PageTransition) f64 {
        return qtc.Poppler__PageTransition_DurationReal(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PageTransition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_page_transition_enums.Alignment `
    ///
    pub fn Alignment(self: Poppler__PageTransition) i32 {
        return qtc.Poppler__PageTransition_Alignment(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PageTransition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_page_transition_enums.Direction `
    ///
    pub fn Direction(self: Poppler__PageTransition) i32 {
        return qtc.Poppler__PageTransition_Direction(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PageTransition `
    ///
    pub fn Angle(self: Poppler__PageTransition) i32 {
        return qtc.Poppler__PageTransition_Angle(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PageTransition `
    ///
    pub fn Scale(self: Poppler__PageTransition) f64 {
        return qtc.Poppler__PageTransition_Scale(@ptrCast(self.ptr));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: Poppler__PageTransition `
    ///
    pub fn IsRectangular(self: Poppler__PageTransition) bool {
        return qtc.Poppler__PageTransition_IsRectangular(@ptrCast(self.ptr));
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: Poppler__PageTransition `
    ///
    pub fn Delete(self: Poppler__PageTransition) void {
        qtc.Poppler__PageTransition_Delete(@ptrCast(self.ptr));
    }
};

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
pub const enums = struct {
    pub const Type = enum(i32) {
        pub const Replace: i32 = 0;
        pub const Split: i32 = 1;
        pub const Blinds: i32 = 2;
        pub const Box: i32 = 3;
        pub const Wipe: i32 = 4;
        pub const Dissolve: i32 = 5;
        pub const Glitter: i32 = 6;
        pub const Fly: i32 = 7;
        pub const Push: i32 = 8;
        pub const Cover: i32 = 9;
        pub const Uncover: i32 = 10;
        pub const Fade: i32 = 11;
    };

    pub const Alignment = enum(i32) {
        pub const Horizontal: i32 = 0;
        pub const Vertical: i32 = 1;
    };

    pub const Direction = enum(i32) {
        pub const Inward: i32 = 0;
        pub const Outward: i32 = 1;
    };
};
