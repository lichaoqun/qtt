//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface LCHttpEngine : NSObject
{
}

+ (void)apiEroReport:(id)arg1;
+ (id)apiSecure:(id)arg1;
+ (id)multiUpload:(id)arg1 parameters:(id)arg2 files:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (void)uploadFile2:(id)arg1 src:(int)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)uploadFile:(id)arg1 src:(int)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)upload:(id)arg1 file:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (void)request_GET:(id)arg1 parameters:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)request:(id)arg1 method:(unsigned long long)arg2 bundle:(id)arg3 handler:(CDUnknownBlockType)arg4;
+ (id)cgetSign:(id)arg1;
+ (id)getSign:(id)arg1;
+ (id)sharedHttpSessionManager;

@end

