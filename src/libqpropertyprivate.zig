const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// https://doc.qt.io/qt-6/quntypedpropertydata.html
pub const quntypedpropertydata = struct {
    /// New constructs a new QUntypedPropertyData object.
    ///
    /// ``` other: QtC.QUntypedPropertyData ```
    pub fn New(other: ?*anyopaque) QtC.QUntypedPropertyData {
        return qtc.QUntypedPropertyData_new(@ptrCast(other));
    }

    /// New2 constructs a new QUntypedPropertyData object and invalidates the source QUntypedPropertyData object.
    ///
    /// ``` other: QtC.QUntypedPropertyData ```
    pub fn New2(other: ?*anyopaque) QtC.QUntypedPropertyData {
        return qtc.QUntypedPropertyData_new2(@ptrCast(other));
    }

    /// CopyAssign shallow copies `other` into `self`.
    ///
    /// ``` self: QtC.QUntypedPropertyData, other: QtC.QUntypedPropertyData ```
    pub fn CopyAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedPropertyData_CopyAssign(@ptrCast(self), @ptrCast(other));
    }

    /// MoveAssign moves `other` into `self` and invalidates `other`.
    ///
    /// ``` self: QtC.QUntypedPropertyData, other: QtC.QUntypedPropertyData ```
    pub fn MoveAssign(self: ?*anyopaque, other: ?*anyopaque) void {
        qtc.QUntypedPropertyData_MoveAssign(@ptrCast(self), @ptrCast(other));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/quntypedpropertydata.html#dtor.QUntypedPropertyData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QUntypedPropertyData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QUntypedPropertyData_Delete(@ptrCast(self));
    }
};

/// https://doc.qt.io/qt-6/qpropertyproxybindingdata.html
pub const qpropertyproxybindingdata = struct {
    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#d_ptr-var)
    ///
    /// ``` self: QtC.QPropertyProxyBindingData ```
    pub fn DPtr(self: ?*anyopaque) usize {
        return qtc.QPropertyProxyBindingData_DPtr(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#d_ptr-var)
    ///
    /// ``` self: QtC.QPropertyProxyBindingData, d_ptr: usize ```
    pub fn SetDPtr(self: ?*anyopaque, d_ptr: usize) void {
        qtc.QPropertyProxyBindingData_SetDPtr(@ptrCast(self), @intCast(d_ptr));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#propertyData-var)
    ///
    /// ``` self: QtC.QPropertyProxyBindingData ```
    pub fn PropertyData(self: ?*anyopaque) QtC.QUntypedPropertyData {
        return qtc.QPropertyProxyBindingData_PropertyData(@ptrCast(self));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#propertyData-var)
    ///
    /// ``` self: QtC.QPropertyProxyBindingData, propertyData: QtC.QUntypedPropertyData ```
    pub fn SetPropertyData(self: ?*anyopaque, propertyData: ?*anyopaque) void {
        qtc.QPropertyProxyBindingData_SetPropertyData(@ptrCast(self), @ptrCast(propertyData));
    }

    /// [Qt documentation](https://doc.qt.io/qt-6/qpropertyproxybindingdata.html#dtor.QPropertyProxyBindingData)
    ///
    /// Delete this object from C++ memory.
    ///
    /// ``` self: QtC.QPropertyProxyBindingData ```
    pub fn QDelete(self: ?*anyopaque) void {
        qtc.QPropertyProxyBindingData_Delete(@ptrCast(self));
    }
};
