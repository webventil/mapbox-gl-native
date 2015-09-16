#import "MGLUserLocation.h"

NS_ASSUME_NONNULL_BEGIN

@class MGLMapView;

@interface MGLUserLocation (Private)

@property (nonatomic, weak) MGLMapView *mapView;
@property (nonatomic, readwrite, nullable) CLLocation *location;

#if !__TVOS_9_0
@property (nonatomic, readwrite, nullable) CLHeading *heading;

#endif
- (instancetype)initWithMapView:(MGLMapView *)mapView;

@end

NS_ASSUME_NONNULL_END
