//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSDate;

@interface LeakModel : NSObject
{
    NSDate *_time;
    NSArray *_viewStack;
}

@property(retain, nonatomic) NSArray *viewStack; // @synthesize viewStack=_viewStack;
@property(retain, nonatomic) NSDate *time; // @synthesize time=_time;
- (void).cxx_destruct;

@end

