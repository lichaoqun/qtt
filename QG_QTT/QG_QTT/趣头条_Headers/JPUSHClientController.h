//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class JCOREClientController, JPUSHBadgeNumberController, JPUSHTagAlias, NSMutableArray, NSTimer;

@interface JPUSHClientController : NSObject
{
    NSTimer *_deviceTokenStatusCheckTimer;
    long long _deviceTokenStatusCheckTimes;
    NSMutableArray *_apnsDataList;
    CDUnknownBlockType _messageHandler;
    _Bool _isReportCrash;
    _Bool _isActive;
    _Bool _isSetup;
    JCOREClientController *_coreClient;
    JPUSHTagAlias *_tagAliasMng;
    JPUSHBadgeNumberController *_badgeNumberManager;
}

+ (id)sdkVersion;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedClient;
@property(nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(readonly, nonatomic) JPUSHBadgeNumberController *badgeNumberManager; // @synthesize badgeNumberManager=_badgeNumberManager;
@property(readonly, nonatomic) _Bool isReportCrash; // @synthesize isReportCrash=_isReportCrash;
@property(readonly, nonatomic) JPUSHTagAlias *tagAliasMng; // @synthesize tagAliasMng=_tagAliasMng;
@property(readonly, nonatomic) JCOREClientController *coreClient; // @synthesize coreClient=_coreClient;
- (void).cxx_destruct;
- (void)didLogin:(id)arg1;
- (void)unobserveNotifications;
- (void)observeNotifications;
- (void)closeJPUSHThread;
- (void)stopDeviceTokenUpdatedCheckTimer;
- (void)startDeviceTokenUpdatedCheckTimer;
- (void)useFakeDeviceToken;
- (void)checkDeviceTokenUpdated:(id)arg1;
- (void)synchronizeData;
- (void)setLatitude:(id)arg1;
- (void)setViewLogSecond:(id)arg1;
- (void)setViewStop:(id)arg1;
- (void)setViewStart:(id)arg1;
- (void)reportMsgStatus:(int)arg1 withMessageId:(unsigned long long)arg2 flag:(int)arg3;
- (void)handleRemoteNotification:(id)arg1;
- (void)setBadgeNumberReport:(id)arg1;
- (void)tryUploadIDFA;
- (void)UDPReportAPNSState;
- (void)reportInactive;
- (void)reportLaunch;
- (void)setTagAlias:(id)arg1;
- (void)handleMessage:(id)arg1;
- (void)updateDeviceToken:(id)arg1;
- (void)close;
- (void)setup;
- (void)setCrashLogON;
- (void)dealloc;
- (id)init;

@end

