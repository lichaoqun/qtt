//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSString;

@interface BaiduMobAdLocationHelper : NSObject <CLLocationManagerDelegate>
{
    _Bool _locationUpdating;
    CLLocationManager *_locationManager;
    double _timestamp;
    CDUnknownBlockType _locationBlock;
    CLLocation *_mapSdkLocation;
    struct CLLocationCoordinate2D _currentLocation;
}

+ (id)sharedInstance;
@property(retain, nonatomic) CLLocation *mapSdkLocation; // @synthesize mapSdkLocation=_mapSdkLocation;
@property(copy, nonatomic) CDUnknownBlockType locationBlock; // @synthesize locationBlock=_locationBlock;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool locationUpdating; // @synthesize locationUpdating=_locationUpdating;
@property(nonatomic) struct CLLocationCoordinate2D currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateToLocation:(id)arg2 fromLocation:(id)arg3;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)updateLocationOnce:(CDUnknownBlockType)arg1;
- (void)cleanUpLocationManager;
- (_Bool)isAuthorizationStatusEnable;
- (_Bool)isLocationPlistSet;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

