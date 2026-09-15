/// ### [Upstream resources](https://doc.qt.io/qt-6/qqmlprivate.html#public-types)
pub const enums = struct {
    pub const SingletonConstructionMode = enum {
        pub const None: i32 = 0;
        pub const Constructor: i32 = 1;
        pub const Factory: i32 = 2;
        pub const FactoryWrapper: i32 = 3;
    };

    pub const AutoParentResult = enum {
        pub const Parented: i32 = 0;
        pub const IncompatibleObject: i32 = 1;
        pub const IncompatibleParent: i32 = 2;
    };

    pub const ValueTypeCreationMethod = enum {
        pub const None: i32 = 0;
        pub const Construct: i32 = 1;
        pub const Structured: i32 = 2;
    };

    pub const RegistrationType = enum {
        pub const TypeRegistration: i32 = 0;
        pub const InterfaceRegistration: i32 = 1;
        pub const AutoParentRegistration: i32 = 2;
        pub const SingletonRegistration: i32 = 3;
        pub const CompositeRegistration: i32 = 4;
        pub const CompositeSingletonRegistration: i32 = 5;
        pub const QmlUnitCacheHookRegistration: i32 = 6;
        pub const TypeAndRevisionsRegistration: i32 = 7;
        pub const SingletonAndRevisionsRegistration: i32 = 8;
        pub const SequentialContainerRegistration: i32 = 9;
        pub const SequentialContainerAndRevisionsRegistration: i32 = 10;
    };

    pub const QmlRegistrationWarning = enum {
        pub const UnconstructibleType: i32 = 0;
        pub const UnconstructibleSingleton: i32 = 1;
        pub const NonQObjectWithAtached: i32 = 2;
    };

    pub const StructVersion = enum {
        pub const Base: i32 = 0;
        pub const FinalizerCast: i32 = 1;
        pub const CreationMethod: i32 = 2;
        pub const CurrentVersion: i32 = 2;
    };

    pub const QQmlPrivate__AOTCompiledContext = enum {
        pub const InvalidStringId: u32 = 4294967295;
    };
};
