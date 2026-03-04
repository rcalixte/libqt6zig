const QtC = @import("qt6zig");
const qtc = @import("qt6c");
const poppler_page_transition_enums = enums;

/// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
pub const poppler__pagetransition = struct {
    /// New constructs a new Poppler::PageTransition object.
    ///
    /// ## Parameter(s):
    ///
    /// ` pt: QtC.Poppler__PageTransition `
    ///
    pub fn New(pt: ?*anyopaque) QtC.Poppler__PageTransition {
        return qtc.Poppler__PageTransition_new(@ptrCast(pt));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PageTransition `
    ///
    /// ` other: QtC.Poppler__PageTransition `
    ///
    pub fn OperatorAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.Poppler__PageTransition_OperatorAssign(@ptrCast(self), @ptrCast(other));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PageTransition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_page_transition_enums.Type `
    ///
    pub fn Type(self: ?*anyopaque) i32 {
        return qtc.Poppler__PageTransition_Type(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PageTransition `
    ///
    pub fn DurationReal(self: ?*anyopaque) f64 {
        return qtc.Poppler__PageTransition_DurationReal(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PageTransition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_page_transition_enums.Alignment `
    ///
    pub fn Alignment(self: ?*anyopaque) i32 {
        return qtc.Poppler__PageTransition_Alignment(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PageTransition `
    ///
    /// ## Returns:
    ///
    /// ` poppler_page_transition_enums.Direction `
    ///
    pub fn Direction(self: ?*anyopaque) i32 {
        return qtc.Poppler__PageTransition_Direction(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PageTransition `
    ///
    pub fn Angle(self: ?*anyopaque) i32 {
        return qtc.Poppler__PageTransition_Angle(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PageTransition `
    ///
    pub fn Scale(self: ?*anyopaque) f64 {
        return qtc.Poppler__PageTransition_Scale(@ptrCast(self));
    }

    /// ### [Upstream resources](https://poppler.freedesktop.org/api/qt6/classPoppler_1_1PageTransition.html)
    ///
    /// ## Parameter(s):
    ///
    /// ` self: QtC.Poppler__PageTransition `
    ///
    pub fn IsRectangular(self: ?*anyopaque) bool {
        return qtc.Poppler__PageTransition_IsRectangular(@ptrCast(self));
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
    /// ` self: QtC.Poppler__PageTransition `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.Poppler__PageTransition_Delete(@ptrCast(self));
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
