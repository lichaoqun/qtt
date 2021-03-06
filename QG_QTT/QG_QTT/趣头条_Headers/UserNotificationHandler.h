//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UNUserNotificationCenterDelegate-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;

@interface UserNotificationHandler : NSObject <UNUserNotificationCenterDelegate>
{
    _Bool _isLaunchedByNotification;
    NSDictionary *_launchOptions;
    NSMutableArray *_apnsMessageIds;
}

+ (id)handlerWithLaunchOptions:(id)arg1;
@property(retain, nonatomic) NSMutableArray *apnsMessageIds; // @synthesize apnsMessageIds=_apnsMessageIds;
@property(readonly, nonatomic) _Bool isLaunchedByNotification; // @synthesize isLaunchedByNotification=_isLaunchedByNotification;
@property(readonly, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
- (void).cxx_destruct;
- (void)gotoQKContentViewController:(id)arg1;
- (void)push_content_read_report:(id)arg1 foreground:(_Bool)arg2 exend:(id)arg3;
- (id)getThePushControllerWithContentModel:(id)arg1;
- (void)processing:(id)arg1;
- (void)setupOptions:(id)arg1;
- (void)clickNotificationWithUserInfo:(id)arg1;
- (void)didReceiveRemoteNotificationByOpeningApp:(id)arg1;
- (void)didReceiveRemoteNotificationInForeground:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)setAliasForRemoteNotification;
- (void)setTagForRemoteNotification;
- (void)qkPushConfig;
- (void)jPushConfig;
- (void)uPushConfig;
- (void)registerPushConfig;
- (void)config;
- (void)resetBageNumber;
- (void)processingAPNSUserInfo:(id)arg1;
@property(readonly, nonatomic) _Bool isAllowedNotification;
- (void)recordUserActive;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

