//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSData, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSString;

@interface JPUSHReportRequest : NSObject
{
    NSMutableDictionary *_reportBody;
    long long _reportTimeStamp;
    _Bool _hasSubpackage;
    unsigned char _controlFlag;
    _Bool _isResend;
    NSMutableData *_packetValueData;
    NSString *_reportFlag;
    unsigned long long _reportType;
    NSMutableArray *_reportContents;
    NSMutableArray *_realContents;
    NSDictionary *_content;
    CDUnknownBlockType _responseBlock;
    NSData *_bodyData;
    long long _reSendTimerIndex;
}

@property(nonatomic) _Bool isResend; // @synthesize isResend=_isResend;
@property(nonatomic) long long reSendTimerIndex; // @synthesize reSendTimerIndex=_reSendTimerIndex;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(copy, nonatomic) CDUnknownBlockType responseBlock; // @synthesize responseBlock=_responseBlock;
@property(retain, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(retain, nonatomic) NSMutableArray *realContents; // @synthesize realContents=_realContents;
@property(retain, nonatomic) NSMutableArray *reportContents; // @synthesize reportContents=_reportContents;
@property(nonatomic) long long reportTimeStamp; // @synthesize reportTimeStamp=_reportTimeStamp;
@property(nonatomic) unsigned long long reportType; // @synthesize reportType=_reportType;
@property(retain, nonatomic) NSString *reportFlag; // @synthesize reportFlag=_reportFlag;
@property(nonatomic) unsigned char controlFlag; // @synthesize controlFlag=_controlFlag;
@property(retain, nonatomic) NSMutableData *packetValueData; // @synthesize packetValueData=_packetValueData;
@property(readonly, nonatomic) _Bool hasSubpackage; // @synthesize hasSubpackage=_hasSubpackage;
- (void).cxx_destruct;
- (id)description;
- (id)p_generateRequestHead;
- (id)generateReportRequest;
- (void)send;
- (_Bool)startDelaySend;
@property(nonatomic) _Bool isSendRequestLock; // @dynamic isSendRequestLock;
- (_Bool)cacheRequestRequired;
- (_Bool)loginRequired;
- (_Bool)validRequired;
- (_Bool)packData;
- (_Bool)compareInfoFrom:(id)arg1 To:(id)arg2;
- (id)generateSessionId;
- (void)p_addHistoryFile;
- (unsigned long long)p_calculateCurrentSize;
- (void)p_addContents;
- (void)p_dropContentBeyondMaxSize;
- (id)packetData;
- (void)setResponseBlock;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

