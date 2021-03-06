//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface InnoConfig : NSObject
{
    _Bool _bReportScreenTouchData;
    _Bool _bReportGyroData;
    _Bool _bReportJSData;
    _Bool _bEnableSDK;
    int _eReportPolicy;
    NSString *_strSDKServerVersion;
    NSString *_strSDKLocalVersion;
    NSString *_strChannelId;
    NSDictionary *_dicCustomParams;
    unsigned long long _nReportInterval;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool bEnableSDK; // @synthesize bEnableSDK=_bEnableSDK;
@property(nonatomic) unsigned long long nReportInterval; // @synthesize nReportInterval=_nReportInterval;
@property(nonatomic) int eReportPolicy; // @synthesize eReportPolicy=_eReportPolicy;
@property(nonatomic) _Bool bReportJSData; // @synthesize bReportJSData=_bReportJSData;
@property(nonatomic) _Bool bReportGyroData; // @synthesize bReportGyroData=_bReportGyroData;
@property(nonatomic) _Bool bReportScreenTouchData; // @synthesize bReportScreenTouchData=_bReportScreenTouchData;
@property(retain, nonatomic) NSDictionary *dicCustomParams; // @synthesize dicCustomParams=_dicCustomParams;
@property(copy, nonatomic) NSString *strChannelId; // @synthesize strChannelId=_strChannelId;
@property(copy, nonatomic) NSString *strSDKLocalVersion; // @synthesize strSDKLocalVersion=_strSDKLocalVersion;
@property(copy, nonatomic) NSString *strSDKServerVersion; // @synthesize strSDKServerVersion=_strSDKServerVersion;
- (void).cxx_destruct;
- (id)init;

@end

