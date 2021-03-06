// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Street View Publish API (streetviewpublish/v1)
// Description:
//   Publishes 360 photos to Google Maps, along with position, orientation, and
//   connectivity metadata. Apps can offer an interface for positioning,
//   connecting, and uploading user-generated Street View images.
// Documentation:
//   https://developers.google.com/streetview/publish/

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRStreetViewPublish_Connection;
@class GTLRStreetViewPublish_LatLng;
@class GTLRStreetViewPublish_Level;
@class GTLRStreetViewPublish_Photo;
@class GTLRStreetViewPublish_PhotoId;
@class GTLRStreetViewPublish_PhotoResponse;
@class GTLRStreetViewPublish_Place;
@class GTLRStreetViewPublish_Pose;
@class GTLRStreetViewPublish_Status;
@class GTLRStreetViewPublish_Status_Details_Item;
@class GTLRStreetViewPublish_UpdatePhotoRequest;
@class GTLRStreetViewPublish_UploadRef;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  Request to delete multiple Photos.
 */
@interface GTLRStreetViewPublish_BatchDeletePhotosRequest : GTLRObject

/**
 *  Required. IDs of the Photos. For HTTP
 *  GET requests, the URL query parameter should be
 *  `photoIds=<id1>&photoIds=<id2>&...`.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *photoIds;

@end


/**
 *  Response to batch delete of one or more
 *  Photos.
 */
@interface GTLRStreetViewPublish_BatchDeletePhotosResponse : GTLRObject

/**
 *  The status for the operation to delete a single
 *  Photo in the batch request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStreetViewPublish_Status *> *status;

@end


/**
 *  Response to batch get of Photos.
 */
@interface GTLRStreetViewPublish_BatchGetPhotosResponse : GTLRObject

/**
 *  List of results for each individual
 *  Photo requested, in the same order as
 *  the requests in
 *  BatchGetPhotos.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStreetViewPublish_PhotoResponse *> *results;

@end


/**
 *  Request to update the metadata of photos.
 *  Updating the pixels of photos is not supported.
 */
@interface GTLRStreetViewPublish_BatchUpdatePhotosRequest : GTLRObject

/**
 *  Required. List of
 *  UpdatePhotoRequests.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStreetViewPublish_UpdatePhotoRequest *> *updatePhotoRequests;

@end


/**
 *  Response to batch update of metadata of one or more
 *  Photos.
 */
@interface GTLRStreetViewPublish_BatchUpdatePhotosResponse : GTLRObject

/**
 *  List of results for each individual
 *  Photo updated, in the same order as
 *  the request.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStreetViewPublish_PhotoResponse *> *results;

@end


/**
 *  A connection is the link from a source photo to a destination photo.
 */
@interface GTLRStreetViewPublish_Connection : GTLRObject

/**
 *  Required. The destination of the connection from the containing photo to
 *  another photo.
 */
@property(nonatomic, strong, nullable) GTLRStreetViewPublish_PhotoId *target;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance:
 *  service Foo {
 *  rpc Bar(google.protobuf.Empty) returns (google.protobuf.Empty);
 *  }
 *  The JSON representation for `Empty` is empty JSON object `{}`.
 */
@interface GTLRStreetViewPublish_Empty : GTLRObject
@end


/**
 *  An object representing a latitude/longitude pair. This is expressed as a
 *  pair
 *  of doubles representing degrees latitude and degrees longitude. Unless
 *  specified otherwise, this must conform to the
 *  <a href="http://www.unoosa.org/pdf/icg/2012/template/WGS_84.pdf">WGS84
 *  standard</a>. Values must be within normalized ranges.
 *  Example of normalization code in Python:
 *  def NormalizeLongitude(longitude):
 *  """Wraps decimal degrees longitude to [-180.0, 180.0]."""
 *  q, r = divmod(longitude, 360.0)
 *  if r > 180.0 or (r == 180.0 and q <= -1.0):
 *  return r - 360.0
 *  return r
 *  def NormalizeLatLng(latitude, longitude):
 *  """Wraps decimal degrees latitude and longitude to
 *  [-90.0, 90.0] and [-180.0, 180.0], respectively."""
 *  r = latitude % 360.0
 *  if r <= 90.0:
 *  return r, NormalizeLongitude(longitude)
 *  elif r >= 270.0:
 *  return r - 360, NormalizeLongitude(longitude)
 *  else:
 *  return 180 - r, NormalizeLongitude(longitude + 180.0)
 *  assert 180.0 == NormalizeLongitude(180.0)
 *  assert -180.0 == NormalizeLongitude(-180.0)
 *  assert -179.0 == NormalizeLongitude(181.0)
 *  assert (0.0, 0.0) == NormalizeLatLng(360.0, 0.0)
 *  assert (0.0, 0.0) == NormalizeLatLng(-360.0, 0.0)
 *  assert (85.0, 180.0) == NormalizeLatLng(95.0, 0.0)
 *  assert (-85.0, -170.0) == NormalizeLatLng(-95.0, 10.0)
 *  assert (90.0, 10.0) == NormalizeLatLng(90.0, 10.0)
 *  assert (-90.0, -10.0) == NormalizeLatLng(-90.0, -10.0)
 *  assert (0.0, -170.0) == NormalizeLatLng(-180.0, 10.0)
 *  assert (0.0, -170.0) == NormalizeLatLng(180.0, 10.0)
 *  assert (-90.0, 10.0) == NormalizeLatLng(270.0, 10.0)
 *  assert (90.0, 10.0) == NormalizeLatLng(-270.0, 10.0)
 */
@interface GTLRStreetViewPublish_LatLng : GTLRObject

/**
 *  The latitude in degrees. It must be in the range [-90.0, +90.0].
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *latitude;

/**
 *  The longitude in degrees. It must be in the range [-180.0, +180.0].
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *longitude;

@end


/**
 *  Level information containing level number and its corresponding name.
 */
@interface GTLRStreetViewPublish_Level : GTLRObject

/**
 *  Required. A name assigned to this Level, restricted to 3 characters.
 *  Consider how the elevator buttons would be labeled for this level if there
 *  was an elevator.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Floor number, used for ordering. 0 indicates the ground level, 1 indicates
 *  the first level above ground level, -1 indicates the first level under
 *  ground level. Non-integer values are OK.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *number;

@end


/**
 *  Response to list all photos that belong to a user.
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "photos" property. If returned as the result of a query, it should
 *        support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRStreetViewPublish_ListPhotosResponse : GTLRCollectionObject

/**
 *  Token to retrieve the next page of results, or empty if there are no more
 *  results in the list.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

/**
 *  List of photos. The maximum number of items returned is based on the
 *  pageSize field
 *  in the request.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStreetViewPublish_Photo *> *photos;

@end


/**
 *  Photo is used to store 360 photos along with photo metadata.
 */
@interface GTLRStreetViewPublish_Photo : GTLRObject

/**
 *  Absolute time when the photo was captured.
 *  When the photo has no exif timestamp, this is used to set a timestamp in
 *  the photo metadata.
 */
@property(nonatomic, strong, nullable) GTLRDateTime *captureTime;

/**
 *  Connections to other photos. A connection represents the link from this
 *  photo to another photo.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStreetViewPublish_Connection *> *connections;

/**
 *  Output only. The download URL for the photo bytes. This field is set only
 *  when
 *  GetPhotoRequest.view
 *  is set to
 *  PhotoView.INCLUDE_DOWNLOAD_URL.
 */
@property(nonatomic, copy, nullable) NSString *downloadUrl;

/**
 *  Required when updating photo. Output only when creating photo.
 *  Identifier for the photo, which is unique among all photos in
 *  Google.
 */
@property(nonatomic, strong, nullable) GTLRStreetViewPublish_PhotoId *photoId;

/** Places where this photo belongs. */
@property(nonatomic, strong, nullable) NSArray<GTLRStreetViewPublish_Place *> *places;

/** Pose of the photo. */
@property(nonatomic, strong, nullable) GTLRStreetViewPublish_Pose *pose;

/** Output only. The share link for the photo. */
@property(nonatomic, copy, nullable) NSString *shareLink;

/**
 *  Output only. The thumbnail URL for showing a preview of the given photo.
 */
@property(nonatomic, copy, nullable) NSString *thumbnailUrl;

/**
 *  Required when creating photo. Input only. The resource URL where the photo
 *  bytes are uploaded to.
 */
@property(nonatomic, strong, nullable) GTLRStreetViewPublish_UploadRef *uploadReference;

/**
 *  Output only. View count of the photo.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *viewCount;

@end


/**
 *  Identifier for a Photo.
 */
@interface GTLRStreetViewPublish_PhotoId : GTLRObject

/**
 *  Required. A base64 encoded identifier.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

@end


/**
 *  Response payload for a single
 *  Photo
 *  in batch operations including
 *  BatchGetPhotos
 *  and
 *  BatchUpdatePhotos.
 */
@interface GTLRStreetViewPublish_PhotoResponse : GTLRObject

/**
 *  The Photo resource, if the request
 *  was successful.
 */
@property(nonatomic, strong, nullable) GTLRStreetViewPublish_Photo *photo;

/**
 *  The status for the operation to get or update a single photo in the batch
 *  request.
 */
@property(nonatomic, strong, nullable) GTLRStreetViewPublish_Status *status;

@end


/**
 *  Place metadata for an entity.
 */
@interface GTLRStreetViewPublish_Place : GTLRObject

/**
 *  Required. Place identifier, as described in
 *  https://developers.google.com/places/place-id.
 */
@property(nonatomic, copy, nullable) NSString *placeId;

@end


/**
 *  Raw pose measurement for an entity.
 */
@interface GTLRStreetViewPublish_Pose : GTLRObject

/**
 *  Altitude of the pose in meters above ground level (as defined by WGS84).
 *  NaN indicates an unmeasured quantity.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *altitude;

/**
 *  Compass heading, measured at the center of the photo in degrees clockwise
 *  from North. Value must be >=0 and <360.
 *  NaN indicates an unmeasured quantity.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *heading;

/**
 *  Latitude and longitude pair of the pose, as explained here:
 *  https://cloud.google.com/datastore/docs/reference/rest/Shared.Types/LatLng
 *  When creating a Photo, if the
 *  latitude and longitude pair are not provided here, the geolocation from the
 *  exif header will be used. If the latitude and longitude pair is not
 *  provided and cannot be found in the exif header, the create photo process
 *  will fail.
 */
@property(nonatomic, strong, nullable) GTLRStreetViewPublish_LatLng *latLngPair;

/** Level (the floor in a building) used to configure vertical navigation. */
@property(nonatomic, strong, nullable) GTLRStreetViewPublish_Level *level;

/**
 *  Pitch, measured at the center of the photo in degrees. Value must be >=-90
 *  and <= 90. A value of -90 means looking directly down, and a value of 90
 *  means looking directly up.
 *  NaN indicates an unmeasured quantity.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *pitch;

/**
 *  Roll, measured in degrees. Value must be >= 0 and <360. A value of 0
 *  means level with the horizon.
 *  NaN indicates an unmeasured quantity.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *roll;

@end


/**
 *  The `Status` type defines a logical error model that is suitable for
 *  different
 *  programming environments, including REST APIs and RPC APIs. It is used by
 *  [gRPC](https://github.com/grpc). The error model is designed to be:
 *  - Simple to use and understand for most users
 *  - Flexible enough to meet unexpected needs
 *  # Overview
 *  The `Status` message contains three pieces of data: error code, error
 *  message,
 *  and error details. The error code should be an enum value of
 *  google.rpc.Code, but it may accept additional error codes if needed. The
 *  error message should be a developer-facing English message that helps
 *  developers *understand* and *resolve* the error. If a localized user-facing
 *  error message is needed, put the localized message in the error details or
 *  localize it in the client. The optional error details may contain arbitrary
 *  information about the error. There is a predefined set of error detail types
 *  in the package `google.rpc` that can be used for common error conditions.
 *  # Language mapping
 *  The `Status` message is the logical representation of the error model, but
 *  it
 *  is not necessarily the actual wire format. When the `Status` message is
 *  exposed in different client libraries and different wire protocols, it can
 *  be
 *  mapped differently. For example, it will likely be mapped to some exceptions
 *  in Java, but more likely mapped to some error codes in C.
 *  # Other uses
 *  The error model and the `Status` message can be used in a variety of
 *  environments, either with or without APIs, to provide a
 *  consistent developer experience across different environments.
 *  Example uses of this error model include:
 *  - Partial errors. If a service needs to return partial errors to the client,
 *  it may embed the `Status` in the normal response to indicate the partial
 *  errors.
 *  - Workflow errors. A typical workflow has multiple steps. Each step may
 *  have a `Status` message for error reporting.
 *  - Batch operations. If a client uses batch request and batch response, the
 *  `Status` message should be used directly inside batch response, one for
 *  each error sub-response.
 *  - Asynchronous operations. If an API call embeds asynchronous operation
 *  results in its response, the status of those operations should be
 *  represented directly using the `Status` message.
 *  - Logging. If some API errors are stored in logs, the message `Status` could
 *  be used directly after any stripping needed for security/privacy reasons.
 */
@interface GTLRStreetViewPublish_Status : GTLRObject

/**
 *  The status code, which should be an enum value of google.rpc.Code.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *code;

/**
 *  A list of messages that carry the error details. There is a common set of
 *  message types for APIs to use.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRStreetViewPublish_Status_Details_Item *> *details;

/**
 *  A developer-facing error message, which should be in English. Any
 *  user-facing error message should be localized and sent in the
 *  google.rpc.Status.details field, or localized by the client.
 */
@property(nonatomic, copy, nullable) NSString *message;

@end


/**
 *  GTLRStreetViewPublish_Status_Details_Item
 *
 *  @note This class is documented as having more properties of any valid JSON
 *        type. Use @c -additionalJSONKeys and @c -additionalPropertyForName: to
 *        get the list of properties and then fetch them; or @c
 *        -additionalProperties to fetch them all at once.
 */
@interface GTLRStreetViewPublish_Status_Details_Item : GTLRObject
@end


/**
 *  Request to update the metadata of a
 *  Photo. Updating the pixels of a photo
 *  is not supported.
 */
@interface GTLRStreetViewPublish_UpdatePhotoRequest : GTLRObject

/**
 *  Required. Photo object containing the
 *  new metadata. Only the fields specified in
 *  updateMask
 *  field are used. If `updateMask` is not present, the update applies to all
 *  fields. <aside class="note"><b>Note:</b> To update
 *  Pose.altitude,
 *  Pose.latLngPair has to be
 *  filled as well. Otherwise, the request will fail.
 */
@property(nonatomic, strong, nullable) GTLRStreetViewPublish_Photo *photo;

/**
 *  Mask that identifies fields on the photo metadata to update.
 *  If not present, the old Photo metadata will be entirely replaced with the
 *  new Photo metadata in this request. The update fails if invalid fields are
 *  specified. Multiple fields can be specified in a comma-delimited list.
 *  The following fields are valid:
 *  * `pose.heading`
 *  * `pose.latlngpair`
 *  * `pose.pitch`
 *  * `pose.roll`
 *  * `pose.level`
 *  * `pose.altitude`
 *  * `connections`
 *  * `places`
 *  <aside class="note"><b>Note:</b> Repeated fields in
 *  updateMask
 *  mean the entire set of repeated values will be replaced with the new
 *  contents. For example, if
 *  updateMask
 *  contains `connections` and
 *  google.streetview.publish.v1.UpdatePhotoRequest.photo.connections is
 *  empty, all connections will be removed.</aside>
 *
 *  String format is a comma-separated list of fields.
 */
@property(nonatomic, copy, nullable) NSString *updateMask;

@end


/**
 *  Upload reference for media files.
 */
@interface GTLRStreetViewPublish_UploadRef : GTLRObject

/**
 *  Required. An upload reference should be unique for each user. It follows
 *  the form:
 *  "https://streetviewpublish.googleapis.com/media/user/{account_id}/photo/{upload_reference}"
 */
@property(nonatomic, copy, nullable) NSString *uploadUrl;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
