//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "V5AFURLSessionManager.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSURL, V5AFHTTPRequestSerializer, V5AFHTTPResponseSerializer, V5AFSecurityPolicy;
@protocol V5AFURLRequestSerialization, V5AFURLResponseSerialization;

@interface V5AFHTTPSessionManager : V5AFURLSessionManager <NSSecureCoding, NSCopying>
{
    NSURL *_baseURL;
    V5AFHTTPRequestSerializer<V5AFURLRequestSerialization> *_requestSerializer;
}

+ (_Bool)supportsSecureCoding;
+ (id)manager;
@property(retain, nonatomic) V5AFHTTPRequestSerializer<V5AFURLRequestSerialization> *requestSerializer; // @synthesize requestSerializer=_requestSerializer;
@property(retain, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)dataTaskWithHTTPMethod:(id)arg1 URLString:(id)arg2 parameters:(id)arg3 uploadProgress:(CDUnknownBlockType)arg4 downloadProgress:(CDUnknownBlockType)arg5 success:(CDUnknownBlockType)arg6 failure:(CDUnknownBlockType)arg7;
- (id)DELETE:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)PATCH:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)PUT:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (id)POST:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)POST:(id)arg1 parameters:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)POST:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)HEAD:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)GET:(id)arg1 parameters:(id)arg2 progress:(CDUnknownBlockType)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (id)GET:(id)arg1 parameters:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) V5AFSecurityPolicy *securityPolicy; // @dynamic securityPolicy;
@property(retain, nonatomic) V5AFHTTPResponseSerializer<V5AFURLResponseSerialization> *responseSerializer; // @dynamic responseSerializer;
- (id)initWithBaseURL:(id)arg1 sessionConfiguration:(id)arg2;
- (id)initWithSessionConfiguration:(id)arg1;
- (id)initWithBaseURL:(id)arg1;
- (id)init;

@end

