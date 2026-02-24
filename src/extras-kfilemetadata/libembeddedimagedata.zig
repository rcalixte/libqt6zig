const QtC = @import("qt6zig");
const qtc = @import("qt6c");

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-embeddedimagedata.html)
pub const kfilemetadata__embeddedimagedata = struct {
    /// New constructs a new KFileMetaData::EmbeddedImageData object.
    ///
    pub fn New() QtC.KFileMetaData__EmbeddedImageData {
        return qtc.KFileMetaData__EmbeddedImageData_new();
    }

    /// ### DEPRECATED: Use `Delete` instead
    ///
    pub const QDelete = Delete;

    /// Delete this object from C++ memory.
    ///
    /// ## Parameter:
    ///
    /// ` self: QtC.KFileMetaData__EmbeddedImageData `
    ///
    pub fn Delete(self: ?*anyopaque) void {
        qtc.KFileMetaData__EmbeddedImageData_Delete(@ptrCast(self));
    }
};

/// ### [Upstream resources](https://api.kde.org/kfilemetadata-embeddedimagedata.html#public-types)
pub const enums = struct {
    pub const ImageType = enum(i32) {
        pub const FrontCover: i32 = 1;
        pub const Other: i32 = 2;
        pub const FileIcon: i32 = 4;
        pub const OtherFileIcon: i32 = 8;
        pub const BackCover: i32 = 16;
        pub const LeafletPage: i32 = 32;
        pub const Media: i32 = 64;
        pub const LeadArtist: i32 = 128;
        pub const Artist: i32 = 256;
        pub const Conductor: i32 = 512;
        pub const Band: i32 = 1024;
        pub const Composer: i32 = 2048;
        pub const Lyricist: i32 = 4096;
        pub const RecordingLocation: i32 = 8192;
        pub const DuringRecording: i32 = 16384;
        pub const DuringPerformance: i32 = 32768;
        pub const MovieScreenCapture: i32 = 65536;
        pub const ColouredFish: i32 = 131072;
        pub const Illustration: i32 = 262144;
        pub const BandLogo: i32 = 524288;
        pub const PublisherLogo: i32 = 1048576;
        pub const Unknown: i32 = 1073741824;
        pub const AllImages: i32 = 2147483647;
    };
};
