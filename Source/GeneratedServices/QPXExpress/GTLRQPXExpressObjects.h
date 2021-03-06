// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   QPX Express API (qpxExpress/v1)
// Description:
//   Finds the least expensive flights between an origin and a destination.
// Documentation:
//   http://developers.google.com/qpx-express

#if GTLR_BUILT_AS_FRAMEWORK
  #import "GTLR/GTLRObject.h"
#else
  #import "GTLRObject.h"
#endif

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRQPXExpress_AircraftData;
@class GTLRQPXExpress_AirportData;
@class GTLRQPXExpress_BagDescriptor;
@class GTLRQPXExpress_CarrierData;
@class GTLRQPXExpress_CityData;
@class GTLRQPXExpress_Data;
@class GTLRQPXExpress_FareInfo;
@class GTLRQPXExpress_FlightInfo;
@class GTLRQPXExpress_FreeBaggageAllowance;
@class GTLRQPXExpress_LegInfo;
@class GTLRQPXExpress_PassengerCounts;
@class GTLRQPXExpress_PricingInfo;
@class GTLRQPXExpress_SegmentInfo;
@class GTLRQPXExpress_SegmentPricing;
@class GTLRQPXExpress_SliceInfo;
@class GTLRQPXExpress_SliceInput;
@class GTLRQPXExpress_TaxData;
@class GTLRQPXExpress_TaxInfo;
@class GTLRQPXExpress_TimeOfDayRange;
@class GTLRQPXExpress_TripOption;
@class GTLRQPXExpress_TripOptionsRequest;
@class GTLRQPXExpress_TripOptionsResponse;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

/**
 *  The make, model, and type of an aircraft.
 */
@interface GTLRQPXExpress_AircraftData : GTLRObject

/** The aircraft code. For example, for a Boeing 777 the code would be 777. */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  Identifies this as an aircraftData object. Value: the fixed string
 *  qpxexpress#aircraftData
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The name of an aircraft, for example Boeing 777. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  An airport.
 */
@interface GTLRQPXExpress_AirportData : GTLRObject

/**
 *  The city code an airport is located in. For example, for JFK airport, this
 *  is NYC.
 */
@property(nonatomic, copy, nullable) NSString *city;

/** An airport's code. For example, for Boston Logan airport, this is BOS. */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  Identifies this as an airport object. Value: the fixed string
 *  qpxexpress#airportData.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The name of an airport. For example, for airport BOS the name is "Boston
 *  Logan International".
 */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Information about an item of baggage.
 */
@interface GTLRQPXExpress_BagDescriptor : GTLRObject

/** Provides the commercial name for an optional service. */
@property(nonatomic, copy, nullable) NSString *commercialName;

/**
 *  How many of this type of bag will be checked on this flight.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *count;

/**
 *  A description of the baggage.
 *
 *  Remapped to 'descriptionProperty' to avoid NSObject's 'description'.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *descriptionProperty;

/**
 *  Identifies this as a baggage object. Value: the fixed string
 *  qpxexpress#bagDescriptor.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The standard IATA subcode used to identify this optional service. */
@property(nonatomic, copy, nullable) NSString *subcode;

@end


/**
 *  Information about a carrier (ie. an airline, bus line, railroad, etc) that
 *  might be useful to display to an end-user.
 */
@interface GTLRQPXExpress_CarrierData : GTLRObject

/**
 *  The IATA designator of a carrier (airline, etc). For example, for American
 *  Airlines, the code is AA.
 */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  Identifies this as a kind of carrier (ie. an airline, bus line, railroad,
 *  etc). Value: the fixed string qpxexpress#carrierData.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The long, full name of a carrier. For example: American Airlines. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Information about a city that might be useful to an end-user; typically the
 *  city of an airport.
 */
@interface GTLRQPXExpress_CityData : GTLRObject

/** The IATA character ID of a city. For example, for Boston this is BOS. */
@property(nonatomic, copy, nullable) NSString *code;

/**
 *  The two-character country code of the country the city is located in. For
 *  example, US for the United States of America.
 */
@property(nonatomic, copy, nullable) NSString *country;

/**
 *  Identifies this as a city, typically with one or more airports. Value: the
 *  fixed string qpxexpress#cityData.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The full name of a city. An example would be: New York. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Detailed information about components found in the solutions of this
 *  response, including a trip's airport, city, taxes, airline, and aircraft.
 */
@interface GTLRQPXExpress_Data : GTLRObject

/** The aircraft that is flying between an origin and destination. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_AircraftData *> *aircraft;

/** The airport of an origin or destination. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_AirportData *> *airport;

/**
 *  The airline carrier of the aircraft flying between an origin and
 *  destination. Allowed values are IATA carrier codes.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_CarrierData *> *carrier;

/** The city that is either the origin or destination of part of a trip. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_CityData *> *city;

/**
 *  Identifies this as QPX Express response resource, including a trip's
 *  airport, city, taxes, airline, and aircraft. Value: the fixed string
 *  qpxexpress#data.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The taxes due for flying between an origin and a destination. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_TaxData *> *tax;

@end


/**
 *  Complete information about a fare used in the solution to a low-fare search
 *  query. In the airline industry a fare is a price an airline charges for
 *  one-way travel between two points. A fare typically contains a carrier code,
 *  two city codes, a price, and a fare basis. (A fare basis is a one-to-eight
 *  character alphanumeric code used to identify a fare.)
 */
@interface GTLRQPXExpress_FareInfo : GTLRObject

@property(nonatomic, copy, nullable) NSString *basisCode;

/**
 *  The carrier of the aircraft or other vehicle commuting between two points.
 */
@property(nonatomic, copy, nullable) NSString *carrier;

/** The city code of the city the trip ends at. */
@property(nonatomic, copy, nullable) NSString *destination;

/**
 *  A unique identifier of the fare.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies this as a fare object. Value: the fixed string
 *  qpxexpress#fareInfo.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The city code of the city the trip begins at. */
@property(nonatomic, copy, nullable) NSString *origin;

/**
 *  Whether this is a private fare, for example one offered only to select
 *  customers rather than the general public.
 *
 *  Remapped to 'privateProperty' to avoid language reserved word 'private'.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *privateProperty;

@end


/**
 *  A flight is a sequence of legs with the same airline carrier and flight
 *  number. (A leg is the smallest unit of travel, in the case of a flight a
 *  takeoff immediately followed by a landing at two set points on a particular
 *  carrier with a particular flight number.) The naive view is that a flight is
 *  scheduled travel of an aircraft between two points, with possibly
 *  intermediate stops, but carriers will frequently list flights that require a
 *  change of aircraft between legs.
 */
@interface GTLRQPXExpress_FlightInfo : GTLRObject

@property(nonatomic, copy, nullable) NSString *carrier;

/** The flight number. */
@property(nonatomic, copy, nullable) NSString *number;

@end


/**
 *  Information about free baggage allowed on one segment of a trip.
 */
@interface GTLRQPXExpress_FreeBaggageAllowance : GTLRObject

/**
 *  A representation of a type of bag, such as an ATPCo subcode, Commercial
 *  Name, or other description.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_BagDescriptor *> *bagDescriptor;

/**
 *  The maximum number of kilos all the free baggage together may weigh.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *kilos;

/**
 *  The maximum number of kilos any one piece of baggage may weigh.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *kilosPerPiece;

/**
 *  Identifies this as free baggage object, allowed on one segment of a trip.
 *  Value: the fixed string qpxexpress#freeBaggageAllowance.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The number of free pieces of baggage allowed.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *pieces;

/**
 *  The number of pounds of free baggage allowed.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *pounds;

@end


/**
 *  Information about a leg. (A leg is the smallest unit of travel, in the case
 *  of a flight a takeoff immediately followed by a landing at two set points on
 *  a particular carrier with a particular flight number.)
 */
@interface GTLRQPXExpress_LegInfo : GTLRObject

/**
 *  The aircraft (or bus, ferry, railcar, etc) travelling between the two points
 *  of this leg.
 */
@property(nonatomic, copy, nullable) NSString *aircraft;

/**
 *  The scheduled time of arrival at the destination of the leg, local to the
 *  point of arrival.
 */
@property(nonatomic, copy, nullable) NSString *arrivalTime;

/**
 *  Whether you have to change planes following this leg. Only applies to the
 *  next leg.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *changePlane;

/**
 *  Duration of a connection following this leg, in minutes.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *connectionDuration;

/**
 *  The scheduled departure time of the leg, local to the point of departure.
 */
@property(nonatomic, copy, nullable) NSString *departureTime;

/** The leg destination as a city and airport. */
@property(nonatomic, copy, nullable) NSString *destination;

/** The terminal the flight is scheduled to arrive at. */
@property(nonatomic, copy, nullable) NSString *destinationTerminal;

/**
 *  The scheduled travelling time from the origin to the destination.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *duration;

/**
 *  An identifier that uniquely identifies this leg in the solution.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies this as a leg object. A leg is the smallest unit of travel, in
 *  the case of a flight a takeoff immediately followed by a landing at two set
 *  points on a particular carrier with a particular flight number. Value: the
 *  fixed string qpxexpress#legInfo.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  A simple, general description of the meal(s) served on the flight, for
 *  example: "Hot meal".
 */
@property(nonatomic, copy, nullable) NSString *meal;

/**
 *  The number of miles in this leg.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *mileage;

/**
 *  In percent, the published on time performance on this leg.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *onTimePerformance;

/**
 *  Department of Transportation disclosure information on the actual operator
 *  of a flight in a code share. (A code share refers to a marketing agreement
 *  between two carriers, where one carrier will list in its schedules (and take
 *  bookings for) flights that are actually operated by another carrier.)
 */
@property(nonatomic, copy, nullable) NSString *operatingDisclosure;

/** The leg origin as a city and airport. */
@property(nonatomic, copy, nullable) NSString *origin;

/** The terminal the flight is scheduled to depart from. */
@property(nonatomic, copy, nullable) NSString *originTerminal;

/**
 *  Whether passenger information must be furnished to the United States
 *  Transportation Security Administration (TSA) prior to departure.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *secure;

@end


/**
 *  The number and type of passengers. Unfortunately the definition of an
 *  infant, child, adult, and senior citizen varies across carriers and
 *  reservation systems.
 */
@interface GTLRQPXExpress_PassengerCounts : GTLRObject

/**
 *  The number of passengers that are adults.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *adultCount;

/**
 *  The number of passengers that are children.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *childCount;

/**
 *  The number of passengers that are infants travelling in the lap of an adult.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *infantInLapCount;

/**
 *  The number of passengers that are infants each assigned a seat.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *infantInSeatCount;

/**
 *  Identifies this as a passenger count object, representing the number of
 *  passengers. Value: the fixed string qpxexpress#passengerCounts.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The number of passengers that are senior citizens.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *seniorCount;

@end


/**
 *  The price of one or more travel segments. The currency used to purchase
 *  tickets is usually determined by the sale/ticketing city or the
 *  sale/ticketing country, unless none are specified, in which case it defaults
 *  to that of the journey origin country.
 */
@interface GTLRQPXExpress_PricingInfo : GTLRObject

/**
 *  The total fare in the base fare currency (the currency of the country of
 *  origin). This element is only present when the sales currency and the
 *  currency of the country of commencement are different.
 */
@property(nonatomic, copy, nullable) NSString *baseFareTotal;

/** The fare used to price one or more segments. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_FareInfo *> *fare;

/**
 *  The horizontal fare calculation. This is a field on a ticket that displays
 *  all of the relevant items that go into the calculation of the fare.
 */
@property(nonatomic, copy, nullable) NSString *fareCalculation;

/**
 *  Identifies this as a pricing object, representing the price of one or more
 *  travel segments. Value: the fixed string qpxexpress#pricingInfo.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The latest ticketing time for this pricing assuming the reservation occurs
 *  at ticketing time and there is no change in fares/rules. The time is local
 *  to the point of sale (POS).
 */
@property(nonatomic, copy, nullable) NSString *latestTicketingTime;

/** The number of passengers to which this price applies. */
@property(nonatomic, strong, nullable) GTLRQPXExpress_PassengerCounts *passengers;

/**
 *  The passenger type code for this pricing. An alphanumeric code used by a
 *  carrier to restrict fares to certain categories of passenger. For instance,
 *  a fare might be valid only for senior citizens.
 */
@property(nonatomic, copy, nullable) NSString *ptc;

/**
 *  Whether the fares on this pricing are refundable.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *refundable;

/** The total fare in the sale or equivalent currency. */
@property(nonatomic, copy, nullable) NSString *saleFareTotal;

/** The taxes in the sale or equivalent currency. */
@property(nonatomic, copy, nullable) NSString *saleTaxTotal;

/**
 *  Total per-passenger price (fare and tax) in the sale or equivalent currency.
 */
@property(nonatomic, copy, nullable) NSString *saleTotal;

/** The per-segment price and baggage information. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_SegmentPricing *> *segmentPricing;

/** The taxes used to calculate the tax total per ticket. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_TaxInfo *> *tax;

@end


/**
 *  Details of a segment of a flight; a segment is one or more consecutive legs
 *  on the same flight. For example a hypothetical flight ZZ001, from DFW to
 *  OGG, would have one segment with two legs: DFW to HNL (leg 1), HNL to OGG
 *  (leg 2), and DFW to OGG (legs 1 and 2).
 */
@interface GTLRQPXExpress_SegmentInfo : GTLRObject

/** The booking code or class for this segment. */
@property(nonatomic, copy, nullable) NSString *bookingCode;

/**
 *  The number of seats available in this booking code on this segment.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *bookingCodeCount;

/** The cabin booked for this segment. */
@property(nonatomic, copy, nullable) NSString *cabin;

/**
 *  In minutes, the duration of the connection following this segment.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *connectionDuration;

/**
 *  The duration of the flight segment in minutes.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *duration;

/** The flight this is a segment of. */
@property(nonatomic, strong, nullable) GTLRQPXExpress_FlightInfo *flight;

/**
 *  An id uniquely identifying the segment in the solution.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies this as a segment object. A segment is one or more consecutive
 *  legs on the same flight. For example a hypothetical flight ZZ001, from DFW
 *  to OGG, could have one segment with two legs: DFW to HNL (leg 1), HNL to OGG
 *  (leg 2). Value: the fixed string qpxexpress#segmentInfo.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The legs composing this segment. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_LegInfo *> *leg;

/**
 *  The solution-based index of a segment in a married segment group. Married
 *  segments can only be booked together. For example, an airline might report a
 *  certain booking code as sold out from Boston to Pittsburgh, but as available
 *  as part of two married segments Boston to Chicago connecting through
 *  Pittsburgh. For example content of this field, consider the round-trip
 *  flight ZZ1 PHX-PHL ZZ2 PHL-CLT ZZ3 CLT-PHX. This has three segments, with
 *  the two outbound ones (ZZ1 ZZ2) married. In this case, the two outbound
 *  segments belong to married segment group 0, and the return segment belongs
 *  to married segment group 1.
 */
@property(nonatomic, copy, nullable) NSString *marriedSegmentGroup;

/**
 *  Whether the operation of this segment remains subject to government
 *  approval.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *subjectToGovernmentApproval;

@end


/**
 *  The price of this segment.
 */
@interface GTLRQPXExpress_SegmentPricing : GTLRObject

/**
 *  A segment identifier unique within a single solution. It is used to refer to
 *  different parts of the same solution.
 */
@property(nonatomic, copy, nullable) NSString *fareId;

/** Details of the free baggage allowance on this segment. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_FreeBaggageAllowance *> *freeBaggageOption;

/**
 *  Identifies this as a segment pricing object, representing the price of this
 *  segment. Value: the fixed string qpxexpress#segmentPricing.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** Unique identifier in the response of this segment. */
@property(nonatomic, copy, nullable) NSString *segmentId;

@end


/**
 *  Information about a slice. A slice represents a traveller's intent, the
 *  portion of a low-fare search corresponding to a traveler's request to get
 *  between two points. One-way journeys are generally expressed using 1 slice,
 *  round-trips using 2. For example, if a traveler specifies the following trip
 *  in a user interface:
 *  | Origin | Destination | Departure Date | | BOS | LAX | March 10, 2007 | |
 *  LAX | SYD | March 17, 2007 | | SYD | BOS | March 22, 2007 |
 *  then this is a three slice trip.
 */
@interface GTLRQPXExpress_SliceInfo : GTLRObject

/**
 *  The duration of the slice in minutes.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *duration;

/**
 *  Identifies this as a slice object. A slice represents a traveller's intent,
 *  the portion of a low-fare search corresponding to a traveler's request to
 *  get between two points. One-way journeys are generally expressed using 1
 *  slice, round-trips using 2. Value: the fixed string qpxexpress#sliceInfo.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The segment(s) constituting the slice. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_SegmentInfo *> *segment;

@end


/**
 *  Criteria a desired slice must satisfy.
 */
@interface GTLRQPXExpress_SliceInput : GTLRObject

/**
 *  Slices with only the carriers in this alliance should be returned; do not
 *  use this field with permittedCarrier. Allowed values are ONEWORLD, SKYTEAM,
 *  and STAR.
 */
@property(nonatomic, copy, nullable) NSString *alliance;

/** Departure date in YYYY-MM-DD format. */
@property(nonatomic, copy, nullable) NSString *date;

/** Airport or city IATA designator of the destination. */
@property(nonatomic, copy, nullable) NSString *destination;

/**
 *  Identifies this as a slice input object, representing the criteria a desired
 *  slice must satisfy. Value: the fixed string qpxexpress#sliceInput.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/**
 *  The longest connection between two legs, in minutes, you are willing to
 *  accept.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxConnectionDuration;

/**
 *  The maximum number of stops you are willing to accept in this slice.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *maxStops;

/** Airport or city IATA designator of the origin. */
@property(nonatomic, copy, nullable) NSString *origin;

/**
 *  A list of 2-letter IATA airline designators. Slices with only these carriers
 *  should be returned.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *permittedCarrier;

/**
 *  Slices must depart in this time of day range, local to the point of
 *  departure.
 */
@property(nonatomic, strong, nullable) GTLRQPXExpress_TimeOfDayRange *permittedDepartureTime;

/**
 *  Prefer solutions that book in this cabin for this slice. Allowed values are
 *  COACH, PREMIUM_COACH, BUSINESS, and FIRST.
 */
@property(nonatomic, copy, nullable) NSString *preferredCabin;

/**
 *  A list of 2-letter IATA airline designators. Exclude slices that use these
 *  carriers.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *prohibitedCarrier;

@end


/**
 *  Tax data.
 */
@interface GTLRQPXExpress_TaxData : GTLRObject

/**
 *  An identifier uniquely identifying a tax in a response.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies this as a tax data object, representing some tax. Value: the
 *  fixed string qpxexpress#taxData.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The name of a tax. */
@property(nonatomic, copy, nullable) NSString *name;

@end


/**
 *  Tax information.
 */
@interface GTLRQPXExpress_TaxInfo : GTLRObject

/** Whether this is a government charge or a carrier surcharge. */
@property(nonatomic, copy, nullable) NSString *chargeType;

/** The code to enter in the ticket's tax box. */
@property(nonatomic, copy, nullable) NSString *code;

/** For government charges, the country levying the charge. */
@property(nonatomic, copy, nullable) NSString *country;

/**
 *  Identifier uniquely identifying this tax in a response. Not present for
 *  unnamed carrier surcharges.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies this as a tax information object. Value: the fixed string
 *  qpxexpress#taxInfo.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The price of the tax in the sales or equivalent currency. */
@property(nonatomic, copy, nullable) NSString *salePrice;

@end


/**
 *  Two times in a single day defining a time range.
 */
@interface GTLRQPXExpress_TimeOfDayRange : GTLRObject

/** The earliest time of day in HH:MM format. */
@property(nonatomic, copy, nullable) NSString *earliestTime;

/**
 *  Identifies this as a time of day range object, representing two times in a
 *  single day defining a time range. Value: the fixed string
 *  qpxexpress#timeOfDayRange.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** The latest time of day in HH:MM format. */
@property(nonatomic, copy, nullable) NSString *latestTime;

@end


/**
 *  Trip information.
 */
@interface GTLRQPXExpress_TripOption : GTLRObject

/**
 *  Identifier uniquely identifying this trip in a response.
 *
 *  identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
 */
@property(nonatomic, copy, nullable) NSString *identifier;

/**
 *  Identifies this as a trip information object. Value: the fixed string
 *  qpxexpress#tripOption.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** Per passenger pricing information. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_PricingInfo *> *pricing;

/**
 *  The total price for all passengers on the trip, in the form of a currency
 *  followed by an amount, e.g. USD253.35.
 */
@property(nonatomic, copy, nullable) NSString *saleTotal;

/** The slices that make up this trip's itinerary. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_SliceInfo *> *slice;

@end


/**
 *  A QPX Express search request, which will yield one or more solutions.
 */
@interface GTLRQPXExpress_TripOptionsRequest : GTLRObject

/**
 *  Do not return solutions that cost more than this price. The alphabetical
 *  part of the price is in ISO 4217. The format, in regex, is
 *  [A-Z]{3}\\d+(\\.\\d+)? Example: $102.07
 */
@property(nonatomic, copy, nullable) NSString *maxPrice;

/** Counts for each passenger type in the request. */
@property(nonatomic, strong, nullable) GTLRQPXExpress_PassengerCounts *passengers;

/**
 *  Return only solutions with refundable fares.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *refundable;

/**
 *  IATA country code representing the point of sale. This determines the
 *  "equivalent amount paid" currency for the ticket.
 */
@property(nonatomic, copy, nullable) NSString *saleCountry;

/**
 *  The slices that make up the itinerary of this trip. A slice represents a
 *  traveler's intent, the portion of a low-fare search corresponding to a
 *  traveler's request to get between two points. One-way journeys are generally
 *  expressed using one slice, round-trips using two. An example of a one slice
 *  trip with three segments might be BOS-SYD, SYD-LAX, LAX-BOS if the traveler
 *  only stopped in SYD and LAX just long enough to change planes.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_SliceInput *> *slice;

/**
 *  The number of solutions to return, maximum 500.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *solutions;

/** IATA country code representing the point of ticketing. */
@property(nonatomic, copy, nullable) NSString *ticketingCountry;

@end


/**
 *  A QPX Express search response.
 */
@interface GTLRQPXExpress_TripOptionsResponse : GTLRObject

/** Informational data global to list of solutions. */
@property(nonatomic, strong, nullable) GTLRQPXExpress_Data *data;

/**
 *  Identifies this as a QPX Express trip response object, which consists of
 *  zero or more solutions. Value: the fixed string qpxexpress#tripOptions.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** An identifier uniquely identifying this response. */
@property(nonatomic, copy, nullable) NSString *requestId;

/** A list of priced itinerary solutions to the QPX Express query. */
@property(nonatomic, strong, nullable) NSArray<GTLRQPXExpress_TripOption *> *tripOption;

@end


/**
 *  A QPX Express search request.
 */
@interface GTLRQPXExpress_TripsSearchRequest : GTLRObject

/**
 *  A QPX Express search request. Required values are at least one adult or
 *  senior passenger, an origin, a destination, and a date.
 */
@property(nonatomic, strong, nullable) GTLRQPXExpress_TripOptionsRequest *request;

@end


/**
 *  A QPX Express search response.
 */
@interface GTLRQPXExpress_TripsSearchResponse : GTLRObject

/**
 *  Identifies this as a QPX Express API search response resource. Value: the
 *  fixed string qpxExpress#tripsSearch.
 */
@property(nonatomic, copy, nullable) NSString *kind;

/** All possible solutions to the QPX Express search request. */
@property(nonatomic, strong, nullable) GTLRQPXExpress_TripOptionsResponse *trips;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop
