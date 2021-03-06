//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UMLogDataProtocol-Protocol.h"

@class NSString;

@interface UMPComponent : NSObject <UMLogDataProtocol>
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void)sendClickMsgId:(id)arg1 actiontype:(id)arg2 ts:(unsigned long long)arg3;
- (void)sendDeviceToken:(id)arg1 url:(id)arg2;
- (_Bool)cacheDataReady;
- (void)removeCacheData:(id)arg1;
- (id)readCachedData;
- (id)readCachedDataWithSize:(long long)arg1 overSize:(long long)arg2;
- (id)setupReportData:(long long)arg1;
- (void)workEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

