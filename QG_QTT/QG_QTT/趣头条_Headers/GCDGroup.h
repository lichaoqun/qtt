//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_group;

@interface GCDGroup : NSObject
{
    NSObject<OS_dispatch_group> *_dispatchGroup;
}

+ (id)group;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *dispatchGroup; // @synthesize dispatchGroup=_dispatchGroup;
- (void).cxx_destruct;
- (void)notifyInQueue:(id)arg1 task:(CDUnknownBlockType)arg2;
- (void)asyncInQueue:(id)arg1 task:(CDUnknownBlockType)arg2;
- (_Bool)wait:(double)arg1;
- (void)waitForever;
- (void)leave;
- (void)enter;
- (id)init;

@end

