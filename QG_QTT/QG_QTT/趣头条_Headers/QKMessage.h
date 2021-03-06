//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString, QKMessageHelper, UIApplication;

@interface QKMessage : NSObject
{
    UIApplication *_application;
    NSString *_channel;
    NSString *_uniqueId;
    NSDictionary *_launchOptions;
    NSString *_category;
    QKMessageHelper *_msgHelper;
}

+ (id)shareMessage;
@property(retain, nonatomic) QKMessageHelper *msgHelper; // @synthesize msgHelper=_msgHelper;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(retain, nonatomic) NSDictionary *launchOptions; // @synthesize launchOptions=_launchOptions;
@property(copy, nonatomic) NSString *uniqueId; // @synthesize uniqueId=_uniqueId;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void).cxx_destruct;
- (void)removeAlias:(id)arg1 type:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)setAlias:(id)arg1 type:(id)arg2 response:(CDUnknownBlockType)arg3;
- (void)resetTags:(id)arg1;
- (void)setDeviceToken:(id)arg1;
- (void)registerAPNS_IOS10_Or_More;
- (void)registerAPNS_IOS8_To_IOS10;
- (void)registerForRemoteNotifications;
- (void)unregisterForRemoteNotifications;
- (id)init;

@end

